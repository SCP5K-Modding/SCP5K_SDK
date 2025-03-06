using UnrealBuildTool;

public class AISentience : ModuleRules {
    public AISentience(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
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
        });
    }
}
