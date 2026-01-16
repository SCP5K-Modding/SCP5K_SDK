using UnrealBuildTool;

public class Pandemic : ModuleRules {
    public Pandemic(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AIUtils",
            "AnimationInteractions",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DialogueSystem",
            "Dismemberment",
            "DynamicAudio",
            "Electronics",
            "Engine",
            "FMODStudio",
            "FPSController",
            "Flow",
            "GameActions",
            "GameEventBus",
            "GameUtilities",
            "GameplayConsole",
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
            "Storylets",
            "UMG",
            "UserInterface",
            "GameplayTasks",
            "InputCore"
        });
    }
}
