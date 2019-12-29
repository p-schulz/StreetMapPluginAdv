// Copyright FZI Forschungszentrum Informatik Karlsruhe, 2019

namespace UnrealBuildTool.Rules
{
	public class StreetMapRuntime : ModuleRules
	{
        public StreetMapRuntime(ReadOnlyTargetRules Target)
			: base(Target)
		{
			PrivateDependencyModuleNames.AddRange(
				new string[] {
                    "Core",
					"CoreUObject",
					"Engine",
					"RHI",
					"RenderCore",
					"ShaderCore",
                }
			);

            if (Target.bBuildEditor == true)
            {
                //@TODO: Needed for FPropertyEditorModule::NotifyCustomizationModuleChanged()
                //@TOOD: To move/implement in FStreetMapComponentDetails
                PrivateDependencyModuleNames.Add("PropertyEditor");
            }
        }
	}
}