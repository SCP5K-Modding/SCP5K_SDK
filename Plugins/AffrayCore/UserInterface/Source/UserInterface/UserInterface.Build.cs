using UnrealBuildTool;

public class UserInterface : ModuleRules {
    public UserInterface(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameUtilities",
            "GameplayTags",
            "MediaAssets",
            "UMG",
        });
    }
}
