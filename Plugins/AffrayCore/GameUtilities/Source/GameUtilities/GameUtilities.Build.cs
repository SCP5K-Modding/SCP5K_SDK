using UnrealBuildTool;

public class GameUtilities : ModuleRules {
    public GameUtilities(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DLSSBlueprint",
            "Engine",
            "FMODStudio",
            "GameplayTags",
            "LevelSequence",
            "NISBlueprint",
            "UIUtilities",
            "UMG",
        });
    }
}
