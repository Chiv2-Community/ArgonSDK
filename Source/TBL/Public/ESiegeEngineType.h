#pragma once
#include "CoreMinimal.h"
#include "ESiegeEngineType.generated.h"

UENUM(BlueprintType)
enum class ESiegeEngineType : uint8 {
    None,
    Horse,
    Catapult,
    Ballista,
    BatteringRam,
    CharacterMountableActor,
    Bombard,
};

