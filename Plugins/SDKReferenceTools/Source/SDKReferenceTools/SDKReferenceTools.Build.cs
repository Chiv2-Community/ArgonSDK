using UnrealBuildTool;

public class SDKReferenceTools : ModuleRules
{
    public SDKReferenceTools(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PrivateDependencyModuleNames.AddRange(new string[] {
            "Core", "CoreUObject", "Engine", "UnrealEd", "BlueprintGraph",
            "Kismet", "KismetCompiler", "UMG", "Json"
        });
    }
}
