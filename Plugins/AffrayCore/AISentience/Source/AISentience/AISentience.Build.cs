using UnrealBuildTool;

public class AISentience : ModuleRules {
    public AISentience(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AITestSuite",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "FMODStudio",
            "FPSController",
            "LightSensing",
            "NavigationSystem",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
        });
    }
}
