using UnrealBuildTool;

public class FPSController : ModuleRules {
    public FPSController(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "Core",
            "CoreUObject",
            "Engine",
            "FMODStudio",
            "GameUtilities",
            "GameplayTags",
            "Niagara",
            "PhysicsCore",
            "SignificanceBase",
        });
    }
}
