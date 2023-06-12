using UnrealBuildTool;

public class OnlineSubsystemRedpointEOS : ModuleRules {
    public OnlineSubsystemRedpointEOS(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioExtensions",
            "AudioMixer",
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "MovieScene",
            "MovieSceneTracks",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
