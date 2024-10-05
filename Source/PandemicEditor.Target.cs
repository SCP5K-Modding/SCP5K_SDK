using UnrealBuildTool;

public class PandemicEditorTarget : TargetRules {
	public PandemicEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Pandemic",
		});
	}
}
