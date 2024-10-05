using UnrealBuildTool;

public class DiscordImage : ModuleRules {
    public DiscordImage(ReadOnlyTargetRules Target) : base(Target) {
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
