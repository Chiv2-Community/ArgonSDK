using UnrealBuildTool;

// Fallback home for UAssemblyInstance on stock UE 4.25, which (unlike the custom
// 4.25 engine fork) does not expose it from the Engine module. This lives in its
// own module so TBL can leave it out of the build entirely when the engine
// already provides the class - a UCLASS cannot be #if'd out in place, and UHT
// scans every header in a module regardless of #include. See TBL.Build.cs.
public class TBLAssemblyCompat : ModuleRules
{
    public TBLAssemblyCompat(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject" });
    }
}
