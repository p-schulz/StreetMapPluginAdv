// Copyright FZI Forschungszentrum Informatik Karlsruhe, 2019

#include "OSMFile.h"
#include "StreetMapImporting.h"


FOSMFile::FOSMFile()
	: ParsingState( ParsingState::Root )
{
}
		

FOSMFile::~FOSMFile()
{
	// Clean up time
	{
		for( auto* Way : Ways )
		{
			delete Way;
		}
		Ways.Empty();
				
		for( auto HashPair : NodeMap )
		{
			FOSMNodeInfo* NodeInfo = HashPair.Value;
			delete NodeInfo;
		}
		NodeMap.Empty();
	}
}


bool FOSMFile::LoadOpenStreetMapFile( FString& OSMFilePath, const bool bIsFilePathActuallyTextBuffer, FFeedbackContext* FeedbackContext )
{
	const bool bShowSlowTaskDialog = true;
	const bool bShowCancelButton = true;

	FText ErrorMessage;
	int32 ErrorLineNumber;
	if( FFastXml::ParseXmlFile( 
		this, 
		bIsFilePathActuallyTextBuffer ? nullptr : *OSMFilePath, 
		bIsFilePathActuallyTextBuffer ? OSMFilePath.GetCharArray().GetData() : nullptr, 
		FeedbackContext, 
		bShowSlowTaskDialog, 
		bShowCancelButton, 
		/* Out */ ErrorMessage, 
		/* Out */ ErrorLineNumber ) )
	{
		if( NodeMap.Num() > 0 )
		{
			AverageLatitude /= NodeMap.Num();
			AverageLongitude /= NodeMap.Num();
		}

		return true;
	}

	if( FeedbackContext != nullptr )
	{
		FeedbackContext->Logf(
			ELogVerbosity::Error,
			TEXT( "Failed to load OpenStreetMap XML file ('%s', Line %i)" ),
			*ErrorMessage.ToString(),
			ErrorLineNumber );
	}

	return false;
}

		
bool FOSMFile::ProcessXmlDeclaration( const TCHAR* ElementData, int32 XmlFileLineNumber )
{
	// Don't care about XML declaration for now
	return true;
}


bool FOSMFile::ProcessComment( const TCHAR* Comment )
{
	// Don't care about comments for now
	return true;
}
	
	
bool FOSMFile::ProcessElement( const TCHAR* ElementName, const TCHAR* ElementData, int32 XmlFileLineNumber )
{
	if( ParsingState == ParsingState::Root )
	{
		if( !FCString::Stricmp( ElementName, TEXT( "node" ) ) )
		{
			ParsingState = ParsingState::Node;
			CurrentNodeInfo = new FOSMNodeInfo();
			CurrentNodeInfo->Latitude = 0.0;
			CurrentNodeInfo->Longitude = 0.0;
		}
		else if( !FCString::Stricmp( ElementName, TEXT( "way" ) ) )
		{
			ParsingState = ParsingState::Way;
			CurrentWayInfo = new FOSMWayInfo();
			CurrentWayInfo->Name.Empty();
			CurrentWayInfo->Ref.Empty();
			CurrentWayInfo->WayType = EOSMWayType::Other;
			CurrentWayInfo->Height = 0.0;
			CurrentWayInfo->bIsOneWay = false;

			// @todo: We're currently ignoring the "visible" tag on ways, which means that roads will always
			//        be included in our data set. Would be nice to make this an import option.
		}
	}
	else if( ParsingState == ParsingState::Way )
	{
		if( !FCString::Stricmp( ElementName, TEXT( "nd" ) ) )
		{
			ParsingState = ParsingState::Way_NodeRef;
		}
		else if( !FCString::Stricmp( ElementName, TEXT( "tag" ) ) )
		{
			ParsingState = ParsingState::Way_Tag;
		}
	}

	return true;
}


bool FOSMFile::ProcessAttribute( const TCHAR* AttributeName, const TCHAR* AttributeValue )
{
	if( ParsingState == ParsingState::Node )
	{
		if( !FCString::Stricmp( AttributeName, TEXT( "id" ) ) )
		{
			CurrentNodeID = FPlatformString::Atoi64( AttributeValue );
		}
		else if( !FCString::Stricmp( AttributeName, TEXT( "lat" ) ) )
		{
			CurrentNodeInfo->Latitude = FPlatformString::Atod( AttributeValue );

			AverageLatitude += CurrentNodeInfo->Latitude;
					
			// Update minimum and maximum latitude
			// @todo: Performance: Instead of computing our own bounding box, we could parse the "minlat" and
			//        "minlon" tags from the OSM file
			if( CurrentNodeInfo->Latitude < MinLatitude )
			{
				MinLatitude = CurrentNodeInfo->Latitude;
			}
			if( CurrentNodeInfo->Latitude > MaxLatitude )
			{
				MaxLatitude = CurrentNodeInfo->Latitude;
			}
		}
		else if( !FCString::Stricmp( AttributeName, TEXT( "lon" ) ) )
		{
			CurrentNodeInfo->Longitude = FPlatformString::Atod( AttributeValue );

			AverageLongitude += CurrentNodeInfo->Longitude;
					
			// Update minimum and maximum longitude
			if( CurrentNodeInfo->Longitude < MinLongitude )
			{
				MinLongitude = CurrentNodeInfo->Longitude;
			}
			if( CurrentNodeInfo->Longitude > MaxLongitude )
			{
				MaxLongitude = CurrentNodeInfo->Longitude;
			}
		}
	}
	else if( ParsingState == ParsingState::Way )
	{
		// ...
	}
	else if( ParsingState == ParsingState::Way_NodeRef )
	{
		if( !FCString::Stricmp( AttributeName, TEXT( "ref" ) ) )
		{
			FOSMNodeInfo* ReferencedNode = NodeMap.FindRef( FPlatformString::Atoi64( AttributeValue ) );
			const int NewNodeIndex = CurrentWayInfo->Nodes.Num();
			CurrentWayInfo->Nodes.Add( ReferencedNode );
					
			// Update the node with information about the way that is referencing it
			{
				FOSMWayRef NewWayRef;
				NewWayRef.Way = CurrentWayInfo;
				NewWayRef.NodeIndex = NewNodeIndex;
				ReferencedNode->WayRefs.Add( NewWayRef );
			}
		}
	}
	else if( ParsingState == ParsingState::Way_Tag )
	{
		if( !FCString::Stricmp( AttributeName, TEXT( "k" ) ) )
		{
			CurrentWayTagKey = AttributeValue;
		}
		else if( !FCString::Stricmp( AttributeName, TEXT( "v" ) ) )
		{
			if( !FCString::Stricmp( CurrentWayTagKey, TEXT( "name" ) ) )
			{
				CurrentWayInfo->Name = AttributeValue;
			}
			else if( !FCString::Stricmp( CurrentWayTagKey, TEXT( "ref" ) ) )
			{
				CurrentWayInfo->Ref = AttributeValue;
			}
			else if( !FCString::Stricmp( CurrentWayTagKey, TEXT( "highway" ) ) )
			{
				EOSMWayType WayType = EOSMWayType::Other;
				FString MType = "other";
						
				if( !FCString::Stricmp( AttributeValue, TEXT( "motorway" ) ) )
				{
					WayType = EOSMWayType::Motorway;
					MType = "motorway";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "motorway_link" ) ) )
				{
					WayType = EOSMWayType::Motorway_Link;
					MType = "motorway_link";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "trunk" ) ) )
				{
					WayType = EOSMWayType::Trunk;
					MType = "trunk";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "trunk_link" ) ) )
				{
					WayType = EOSMWayType::Trunk_Link;
					MType = "trunk_link";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "primary" ) ) )
				{
					WayType = EOSMWayType::Primary;
					MType = "primary";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "primary_link" ) ) )
				{
					WayType = EOSMWayType::Primary_Link;
					MType = "primary_link";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "secondary" ) ) )
				{
					WayType = EOSMWayType::Secondary;
					MType = "secondary";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "secondary_link" ) ) )
				{
					WayType = EOSMWayType::Secondary_Link;
					MType = "secondary_link";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "tertiary" ) ) )
				{
					WayType = EOSMWayType::Tertiary;
					MType = "tertiary";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "tertiary_link" ) ) )
				{
					WayType = EOSMWayType::Tertiary_Link;
					MType = "tertiary_link";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "residential" ) ) )
				{
					WayType = EOSMWayType::Residential;
					MType = "residential";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "service" ) ) )
				{
					WayType = EOSMWayType::Service;
					MType = "service";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "unclassified" ) ) )
				{
					WayType = EOSMWayType::Unclassified;
					MType = "unclassified";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "living_street" ) ) )
				{
					WayType = EOSMWayType::Living_Street;
					MType = "living_street";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "pedestrian" ) ) )
				{
					WayType = EOSMWayType::Pedestrian;
					MType = "pedestrian";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "track" ) ) )
				{
					WayType = EOSMWayType::Track;
					MType = "track";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "bus_guideway" ) ) )
				{
					WayType = EOSMWayType::Bus_Guideway;
					MType = "bus_guideway";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "raceway" ) ) )
				{
					WayType = EOSMWayType::Raceway;
					MType = "raceway";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "road" ) ) )
				{
					WayType = EOSMWayType::Road;
					MType = "road";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "footway" ) ) )
				{
					WayType = EOSMWayType::Footway;
					MType = "footway";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "cycleway" ) ) )
				{
					WayType = EOSMWayType::Cycleway;
					MType = "cycleway";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "bridleway" ) ) )
				{
					WayType = EOSMWayType::Bridleway;
					MType = "bridleway";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "steps" ) ) )
				{
					WayType = EOSMWayType::Steps;
					MType = "steps";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "path" ) ) )
				{
					WayType = EOSMWayType::Path;
					MType = "path";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "proposed" ) ) )
				{
					WayType = EOSMWayType::Proposed;
					MType = "proposed";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "construction" ) ) )
				{
					WayType = EOSMWayType::Construction;
					MType = "construction";
				}
				else
				{
					// Other type that we don't recognize yet.  See http://wiki.openstreetmap.org/wiki/Key:highway
				}
						
						
				CurrentWayInfo->WayType = WayType;
				CurrentWayInfo->MType = MType;
			}
			else if( !FCString::Stricmp( CurrentWayTagKey, TEXT( "barrier" ) ) )
			{
				EOSMWayType WayType = EOSMWayType::Barrier;
				FString MType = "other";
				
				if( !FCString::Stricmp( AttributeValue, TEXT( "bollard" ) ) )
				{
					WayType = EOSMWayType::Barrier;
					MType = "bollard";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "bollard" ) ) )
				{
					WayType = EOSMWayType::Bollard;
					MType = "bollard";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "fence" ) ) )
				{
					WayType = EOSMWayType::Fence;
					MType = "fence";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "hedge" ) ) )
				{
					WayType = EOSMWayType::Hedge;
					MType = "hedge";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "kerb" ) ) )
				{
					WayType = EOSMWayType::Kerb;
					MType = "kerb";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "wall" ) ) )
				{
					WayType = EOSMWayType::Wall;
					MType = "wall";
				}
				else
				{
					// Other type that we don't recognize yet.  See http://wiki.openstreetmap.org/wiki/Key:building
				}

				CurrentWayInfo->WayType = EOSMWayType::Barrier;//WayType;
				CurrentWayInfo->MType = MType;
			}
			else if( !FCString::Stricmp( CurrentWayTagKey, TEXT( "advertising" ) ) )
			{
				EOSMWayType WayType =  EOSMWayType::Advertising;
				FString MType = "other";
				
				if( !FCString::Stricmp( AttributeValue, TEXT( "advertising" ) ) )
				{
					WayType = EOSMWayType::Advertising;
					MType = "advertising";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "billboard" ) ) )
				{
					WayType = EOSMWayType::Billboard;
					MType = "billboard";
				}
				else
				{
					// Other type that we don't recognize yet.  See http://wiki.openstreetmap.org/wiki/Key:building
				}

				CurrentWayInfo->WayType = WayType;
				CurrentWayInfo->MType = MType;
			}
			else if( !FCString::Stricmp( CurrentWayTagKey, TEXT( "amenity" ) ) )
			{
				EOSMWayType WayType =  EOSMWayType::Amenity;
				FString MType = "other";
				
				if( !FCString::Stricmp( AttributeValue, TEXT( "amenity" ) ) )
				{
					WayType = EOSMWayType::Amenity;
					MType = "amenity";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "post_box" ) ) )
				{
					WayType = EOSMWayType::PostBox;
					MType = "post_box";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "waste_basket" ) ) )
				{
					WayType = EOSMWayType::WasteBasket;
					MType = "waste_basket";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "waste_disposal" ) ) )
				{
					WayType = EOSMWayType::WasteDisposal;
					MType = "waste_disposal";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "recycling" ) ) )
				{
					WayType = EOSMWayType::Recycling;
					MType = "recycling";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "vending" ) ) )
				{
					WayType = EOSMWayType::Vending;
					MType = "vending";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "bicycle_parking" ) ) )
				{
					WayType = EOSMWayType::BicycleParking;
					MType = "bicycle_parking";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "bus_station" ) ) )
				{
					WayType = EOSMWayType::BusStop;
					MType = "bus_station";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "fuel" ) ) )
				{
					WayType = EOSMWayType::Fuel;
					MType = "fuel";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "parking" ) ) )
				{
					WayType = EOSMWayType::Parking;
					MType = "parking";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "parking_space" ) ) )
				{
					WayType = EOSMWayType::ParkingSpace;
					MType = "parking_space";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "taxi" ) ) )
				{
					WayType = EOSMWayType::Taxi;
					MType = "taxi";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "atm" ) ) )
				{
					WayType = EOSMWayType::ATM;
					MType = "atm";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "pharmacy" ) ) )
				{
					WayType = EOSMWayType::Pharmacy;
					MType = "pharmacy";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "clock" ) ) )
				{
					WayType = EOSMWayType::Clock;
					MType = "clock";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "toilet" ) ) )
				{
					WayType = EOSMWayType::Toilet;
					MType = "toilet";
				}
				else
				{
					// Other type that we don't recognize yet.  See http://wiki.openstreetmap.org/wiki/Key:building
				}

				CurrentWayInfo->WayType = EOSMWayType::Amenity;//WayType;
				CurrentWayInfo->MType = MType;
			}
			else if( !FCString::Stricmp( CurrentWayTagKey, TEXT( "power" ) ) )
			{
				EOSMWayType WayType =  EOSMWayType::Power;
				FString MType = "other";
				
				if( !FCString::Stricmp( AttributeValue, TEXT( "power" ) ) )
				{
					WayType = EOSMWayType::Power;
					MType = "power";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "power_box" ) ) )
				{
					WayType = EOSMWayType::PowerBox;
					MType = "power_box";
				}
				else
				{
					// Other type that we don't recognize yet.  See http://wiki.openstreetmap.org/wiki/Key:building
				}

				CurrentWayInfo->WayType = WayType;
				CurrentWayInfo->MType = MType;
			}
			else if( !FCString::Stricmp( CurrentWayTagKey, TEXT( "street_cabinet" ) ) )
			{
				CurrentWayInfo->WayType = EOSMWayType::StreetCabinet;
				CurrentWayInfo->MType = "other";
				
				if( !FCString::Stricmp( AttributeValue, TEXT( "power" ) ) )
				{
					CurrentWayInfo->WayType = EOSMWayType::StreetCabinet;
					CurrentWayInfo->MType = "street_cabinet";
				}
				else
				{
					// Other type that we don't recognize yet.  See http://wiki.openstreetmap.org/wiki/Key:building
				}
			}
			else if( !FCString::Stricmp( CurrentWayTagKey, TEXT( "support" ) ) )
			{
				EOSMWayType WayType =  EOSMWayType::Support;
				FString MType = "other";
				
				if( !FCString::Stricmp( AttributeValue, TEXT( "support" ) ) )
				{
					WayType = EOSMWayType::Support;
					MType = "support";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "wire" ) ) )
				{
					WayType = EOSMWayType::Wire;
					MType = "wire";
				}
				else
				{
					// Other type that we don't recognize yet.  See http://wiki.openstreetmap.org/wiki/Key:building
				}

				CurrentWayInfo->WayType = WayType;
				CurrentWayInfo->MType = MType;
			}
			else if( !FCString::Stricmp( CurrentWayTagKey, TEXT( "natural" ) ) )
			{
				EOSMWayType WayType =  EOSMWayType::Natural;
				FString MType = "natural";
				
				if( !FCString::Stricmp( AttributeValue, TEXT( "tree" ) ) )
				{
					WayType = EOSMWayType::Tree;
					MType = "tree";
				}
				else
				{
					// Other type that we don't recognize yet.  See http://wiki.openstreetmap.org/wiki/Key:building
				}

				CurrentWayInfo->WayType = WayType;
				CurrentWayInfo->MType = MType;
			}
			else if( !FCString::Stricmp( CurrentWayTagKey, TEXT( "building" ) ) )
			{
				EOSMWayType WayType =  EOSMWayType::Building;
				FString MType = "other";
				
				if( !FCString::Stricmp( AttributeValue, TEXT( "yes" ) ) )
				{
					WayType = EOSMWayType::Building;
					MType = "generic";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "bridge" ) ) )
				{
					WayType = EOSMWayType::Bridge;
					MType = "bridge";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "office" ) ) )
				{
					WayType = EOSMWayType::Office;
					MType = "office";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "house" ) ) )
				{
					WayType = EOSMWayType::House;
					MType = "house";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "commercial" ) ) )
				{
					WayType = EOSMWayType::Commercial;
					MType = "commercial";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "kiosk" ) ) )
				{
					WayType = EOSMWayType::Kiosk;
					MType = "kiosk";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "warehouse" ) ) )
				{
					WayType = EOSMWayType::Warehouse;
					MType = "warehouse";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "supermarket" ) ) )
				{
					WayType = EOSMWayType::Supermarket;
					MType = "supermarket";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "retail" ) ) )
				{
					WayType = EOSMWayType::Supermarket;
					MType = "supermarket";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "church" ) ) )
				{
					WayType = EOSMWayType::Church;
					MType = "church";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "shed" ) ) )
				{
					WayType = EOSMWayType::Shed;
					MType = "shed";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "roof" ) ) )
				{
					WayType = EOSMWayType::Roof;
					MType = "roof";
				}
				else if( !FCString::Stricmp( AttributeValue, TEXT( "entrance" ) ) )
				{
					WayType = EOSMWayType::Entrance;
					MType = "entrance";
				}
				else
				{
					// Other type that we don't recognize yet.  See http://wiki.openstreetmap.org/wiki/Key:building
				}

				CurrentWayInfo->WayType = WayType;
				CurrentWayInfo->MType = MType;
			}
			else if( !FCString::Stricmp( CurrentWayTagKey, TEXT( "height//building" ) ) )
			{
				// Check to see if there is a space character in the height value.  For now, we're looking
				// for straight-up floating point values.
				if( !FString( AttributeValue ).Contains( TEXT( " " ) ) )
				{
					// Okay, no space character.  So this has got to be a floating point number.  The OSM
					// spec says that the height values are in meters.
					CurrentWayInfo->Height = FPlatformString::Atod( AttributeValue );
				}
				else
				{
					// Looks like the height value contains units of some sort.
					// @todo: Add support for interpreting unit strings and converting the values
				}
			}
			else if (!FCString::Stricmp(CurrentWayTagKey, TEXT("building:levels")))
			{
				CurrentWayInfo->BuildingLevels = FPlatformString::Atoi(AttributeValue);
			}
			else if( !FCString::Stricmp( CurrentWayTagKey, TEXT( "oneway" ) ) )
			{
				if( !FCString::Stricmp( AttributeValue, TEXT( "yes" ) ) )
				{
					CurrentWayInfo->bIsOneWay = true;
				}
				else
				{
					CurrentWayInfo->bIsOneWay = false;
				}
			}
		}
	}

	return true;
}


bool FOSMFile::ProcessClose( const TCHAR* Element )
{
	if( ParsingState == ParsingState::Node )
	{
		NodeMap.Add( CurrentNodeID, CurrentNodeInfo );
		CurrentNodeID = 0;
		CurrentNodeInfo = nullptr;
				
		ParsingState = ParsingState::Root;
	}
	else if( ParsingState == ParsingState::Way )
	{
		Ways.Add( CurrentWayInfo );
		CurrentWayInfo = nullptr;
				
		ParsingState = ParsingState::Root;
	}
	else if( ParsingState == ParsingState::Way_NodeRef )
	{
		ParsingState = ParsingState::Way;
	}
	else if( ParsingState == ParsingState::Way_Tag )
	{
		CurrentWayTagKey = TEXT( "" );
		ParsingState = ParsingState::Way;
	}

	return true;
}
