using UnrealBuildTool;

public class PandemicGameTarget : TargetRules {
	public PandemicGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Pandemic",
		});
	}
}
