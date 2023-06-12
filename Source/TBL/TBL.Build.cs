using UnrealBuildTool;

public class TBL : ModuleRules {
    public TBL(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnalyticsCore",
            "AnimGraphRuntime",
            "AnimationCore",
            "AudioExtensions",
            "AudioMixer",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "Engine",
            "GameServerQueryPlugin",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "PropertyPath",
            "ReplicationGraph",
            "RuntimeAssetCache",
            "ST_SparseGrid",
            "SignificanceManager",
            "Slate",
            "SlateCore",
            "StaggeredUpdater",
            "TBLLoadingScreen",
            "UMG",
        });
    }
}
