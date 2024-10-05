using UnrealBuildTool;

public class AIUtils : ModuleRules {
    public AIUtils(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "Engine",
            "AIHordes",
            "AISentience",
            "GameplayTasks",
        });
    }
}
