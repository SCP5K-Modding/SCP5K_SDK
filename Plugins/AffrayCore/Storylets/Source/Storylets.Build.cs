using UnrealBuildTool;

public class Storylets : ModuleRules {
    public Storylets(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameActions",
            "GameplayObjectives",
            "GameplayTags",
        });
    }
}
