using UnrealBuildTool;

public class AISentience : ModuleRules {
    public AISentience(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;

            PublicIncludePaths.AddRange(
                new string[] {
                "AISentience/Public"
                    // ... add other public include paths required here ...
                }
            );

            PrivateIncludePaths.AddRange(
                new string[] {
                "AISentience/Private",
                "Runtime/AIModule/Private/EnvironmentQuery/Tests"
                    // ... add other private include paths required here ...
                }
            );

            PrivateDependencyModuleNames.AddRange(new string[] {
            "EnvironmentQueryEditor",
            "AIModule",
            "Engine",
            "RHI",
        });
        if (Target.bBuildEditor == true)
        {
            PrivateDependencyModuleNames.Add("UnrealEd");

            PrivateDependencyModuleNames.Add("AITestSuite");
            CircularlyReferencedDependentModules.Add("AITestSuite");
        }

        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AITestSuite",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DialogueSystem",
            "Engine",
            "FMODStudio",
            "FPSController",
            "GameplayTags",
            "LightSensing",
            "NavigationSystem",
            "PhysicsCore",
            "SignificanceBase",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "DebugUtils",
        });
    }
}
