#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AssemblyInstance.generated.h"

// Stock UE 4.25 fallback for the custom engine fork's /Script/Engine.AssemblyInstance.
// Empty UObject subclass, matching the engine class, so UCombatState (and any other
// TBL class) can derive from UAssemblyInstance on either engine. Exported so TBL can
// link against it across the module boundary.
UCLASS(Blueprintable)
class TBLASSEMBLYCOMPAT_API UAssemblyInstance : public UObject
{
    GENERATED_BODY()
};
