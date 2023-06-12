using UnrealBuildTool;

public class TBLGameTarget : TargetRules {
	public TBLGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"AnalyticsCore",
			"TBL",
			"TBLLoadingScreen",
		});
	}
}
