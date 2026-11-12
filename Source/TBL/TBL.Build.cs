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

        // AssemblyInstance moved into the Engine module in the custom 4.25 engine
        // fork. Use the engine's class when present; otherwise pull the fallback
        // from the TBLAssemblyCompat module (not built when the engine has the class).
        string AssemblyInstanceHeader = System.IO.Path.Combine(
            EngineDirectory, "Source", "Runtime", "Engine", "Classes", "Engine", "AssemblyInstance.h");
        bool bEngineHasAssemblyInstance = System.IO.File.Exists(AssemblyInstanceHeader);
        PublicDefinitions.Add("TBL_WITH_ENGINE_ASSEMBLY_INSTANCE=" +
            (bEngineHasAssemblyInstance ? "1" : "0"));
        if (!bEngineHasAssemblyInstance)
        {
            PublicDependencyModuleNames.Add("TBLAssemblyCompat");
        }
    }
}
