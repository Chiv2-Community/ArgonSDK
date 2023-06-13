using UnrealBuildTool;

public class TBLEditorTarget : TargetRules {
	public TBLEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"AnalyticsCore",
			//"OnlineSubsystem",
			"TBL",
			"TBLLoadingScreen",
		});
	}
}
