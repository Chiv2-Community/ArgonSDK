#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "OutOfCombatZoneVolumeTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FOutOfCombatZoneVolumeTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    TBL_API FOutOfCombatZoneVolumeTickFunction();
};

template<>
struct TStructOpsTypeTraits<FOutOfCombatZoneVolumeTickFunction> : public TStructOpsTypeTraitsBase2<FOutOfCombatZoneVolumeTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

