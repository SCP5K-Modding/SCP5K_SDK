using UnrealBuildTool;

public class Pandemic : ModuleRules {
    public Pandemic(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AISentience",
            "AIUtils",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Dismemberment",
            "Electronics",
            "Engine",
            "FMODStudio",
            "FPSController",
            "GameActions",
            "GameUtilities",
            "GameplayObjectives",
            "GameplayTags",
            "Interaction",
            "LevelSequence",
            "LightSensing",
            "LoadingScreen",
            "MediaAssets",
            "ModularAssets",
            "NavigationSystem",
            "Niagara",
            "OnlineSubsystemUtils",
            "RandomScenarios",
            "SignificanceBase",
            "SignificanceManager",
            "Slate",
            "SlateCore",
            "UMG",
            "UserInterface",
        });
    }
}
