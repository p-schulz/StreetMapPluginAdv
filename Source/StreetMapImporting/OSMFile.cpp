// Copyright 2017 Mike Fricker. All Rights Reserved.

#include "StreetMapImporting.h"
#include "OSMFile.h"


FOSMFile::FOSMFile()
	: ParsingState( ParsingState::Root )
	, SpatialReferenceSystem( 0, 0 )
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

			SpatialReferenceSystem = FSpatialReferenceSystem(AverageLongitude, AverageLatitude);
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
	// Don't care about XML declaration
	return true;
}


bool FOSMFile::ProcessComment( const TCHAR* Comment )
{
	// Don't care about comments
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
			//        be included in our data set.  It might be nice to make this an import option.
		}
		else if (!FCString::Stricmp(ElementName, TEXT("relation")))
		{
			ParsingState = ParsingState::Relation;
			CurrentRelation = new FOSMRelation();
			CurrentRelation->Type = EOSMRelationType::Other;
		}
	}
	else if (ParsingState == ParsingState::Node)
	{
		if (!FCString::Stricmp(ElementName, TEXT("tag")))
		{
			ParsingState = ParsingState::Node_Tag;
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
	else if (ParsingState == ParsingState::Relation)
	{
		if (!FCString::Stricmp(ElementName, TEXT("member")))
		{
			ParsingState = ParsingState::Relation_Member;
			CurrentRelationMember = new FOSMRelationMember();
			CurrentRelationMember->Type = EOSMRelationMemberType::Other;
			CurrentRelationMember->Role = EOSMRelationMemberRole::Other;
		}
		else if (!FCString::Stricmp(ElementName, TEXT("tag")))
		{
			ParsingState = ParsingState::Relation_Tag;
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
	else if (ParsingState == ParsingState::Node_Tag)
	{
		if (!FCString::Stricmp(AttributeName, TEXT("k")))
		{
			CurrentNodeTagKey = AttributeValue;
		}
		else if (!FCString::Stricmp(AttributeName, TEXT("v")))
		{
			FOSMTag Tag;
			Tag.Key = FName::FName(CurrentNodeTagKey);
			Tag.Value = FName::FName(AttributeValue);
			CurrentNodeInfo->Tags.Add(Tag);
		}
	}
	else if( ParsingState == ParsingState::Way )
	{
		if (!FCString::Stricmp(AttributeName, TEXT("id")))
		{
			CurrentWayID = FPlatformString::Atoi64(AttributeValue);
		}
	}
	else if( ParsingState == ParsingState::Way_NodeRef )
	{
		if( !FCString::Stricmp( AttributeName, TEXT( "ref" ) ) )
		{
			FOSMNodeInfo* ReferencedNode = NodeMap.FindRef( FPlatformString::Atoi64( AttributeValue ) );
			if(ReferencedNode)
			{
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
				CurrentWayInfo->WayType = EOSMWayType::Highway;
				CurrentWayInfo->Category = AttributeValue;
			}
			else if (!FCString::Stricmp(CurrentWayTagKey, TEXT("railway")))
			{
				CurrentWayInfo->WayType = EOSMWayType::Railway;
				CurrentWayInfo->Category = AttributeValue;
			}
			else if( !FCString::Stricmp( CurrentWayTagKey, TEXT( "building" ) ) )
			{
				CurrentWayInfo->WayType = EOSMWayType::Building;

				if( FCString::Stricmp( AttributeValue, TEXT( "yes" ) ) )
				{
					CurrentWayInfo->Category = AttributeValue;
				}
			}
			else if( !FCString::Stricmp( CurrentWayTagKey, TEXT( "height" ) ) )
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
			else if(CurrentWayInfo->WayType == EOSMWayType::Other)
			{
				// if this way was not already marked as building or highway, try other types as well
				if (!FCString::Stricmp(CurrentWayTagKey, TEXT("leisure")))
				{
					CurrentWayInfo->WayType = EOSMWayType::Leisure;
					CurrentWayInfo->Category = AttributeValue;
				}
				else if (!FCString::Stricmp(CurrentWayTagKey, TEXT("natural")))
				{
					CurrentWayInfo->WayType = EOSMWayType::Natural;
					CurrentWayInfo->Category = AttributeValue;
				}
				else if (!FCString::Stricmp(CurrentWayTagKey, TEXT("landuse")))
				{
					CurrentWayInfo->WayType = EOSMWayType::LandUse;
					CurrentWayInfo->Category = AttributeValue;
				}
			}
		}
	}
	else if (ParsingState == ParsingState::Relation)
 	{
		if (!FCString::Stricmp(AttributeName, TEXT("id")))
		{
			CurrentRelationID = FPlatformString::Atoi64(AttributeValue);
		}
	}
	else if (ParsingState == ParsingState::Relation_Member)
	{
		if (!FCString::Stricmp(AttributeName, TEXT("type")))
		{
			if (!FCString::Stricmp(AttributeValue, TEXT("node")))
			{
				CurrentRelationMember->Type = EOSMRelationMemberType::Node;
			}
			else if (!FCString::Stricmp(AttributeValue, TEXT("way")))
			{
				CurrentRelationMember->Type = EOSMRelationMemberType::Way;
			}
			else if (!FCString::Stricmp(AttributeValue, TEXT("relation")))
			{
				CurrentRelationMember->Type = EOSMRelationMemberType::Relation;
			}
		}
		else if (!FCString::Stricmp(AttributeName, TEXT("ref")))
		{
			CurrentRelationMember->Ref = FPlatformString::Atoi64(AttributeValue); // TODO: decide if int64 or FString is better
		}
		else if (!FCString::Stricmp(AttributeName, TEXT("role")))
		{
			if (!FCString::Stricmp(AttributeValue, TEXT("outer")))
			{
				CurrentRelationMember->Role = EOSMRelationMemberRole::Outer;
			}
			else if (!FCString::Stricmp(AttributeValue, TEXT("inner")))
			{
				CurrentRelationMember->Role = EOSMRelationMemberRole::Inner;
			}
		}
	}
	else if (ParsingState == ParsingState::Relation_Tag)
	{
		if (!FCString::Stricmp(AttributeName, TEXT("k")))
		{
			CurrentRelationTagKey = AttributeValue;
		}
		else if (!FCString::Stricmp(AttributeName, TEXT("v")))
		{
			FOSMTag Tag;
			Tag.Key = FName::FName(CurrentRelationTagKey);
			Tag.Value = FName::FName(AttributeValue);
			CurrentRelation->Tags.Add(Tag);

			if (!FCString::Stricmp(CurrentRelationTagKey, TEXT("type")))
			{
				if (!FCString::Stricmp(AttributeValue, TEXT("boundary")))
				{
					CurrentRelation->Type = EOSMRelationType::Boundary;
				}
				else if (!FCString::Stricmp(AttributeValue, TEXT("multipolygon")))
				{
					CurrentRelation->Type = EOSMRelationType::Multipolygon;
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
	else if (ParsingState == ParsingState::Node_Tag)
	{
		CurrentNodeTagKey = TEXT("");
		ParsingState = ParsingState::Node;
	}
	else if( ParsingState == ParsingState::Way )
	{
		WayMap.Add(CurrentWayID, CurrentWayInfo );
		CurrentWayID = 0;
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
	else if (ParsingState == ParsingState::Relation)
	{
		Relations.Add( CurrentRelation );
		ParsingState = ParsingState::Root;
	}
	else if (ParsingState == ParsingState::Relation_Member)
	{
		CurrentRelation->Members.Add(CurrentRelationMember);
		ParsingState = ParsingState::Relation;
	}
	else if (ParsingState == ParsingState::Relation_Tag)
	{
		CurrentWayTagKey = TEXT("");
		ParsingState = ParsingState::Relation;
	}

	return true;
}
