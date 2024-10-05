using UnrealBuildTool;

public class DiscordRelationship : ModuleRules {
    public DiscordRelationship(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DiscordCore",
            "Engine",
        });
    }
}
