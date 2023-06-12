#pragma once
#include "CoreMinimal.h"
#include "ESphereHitDirection.generated.h"

UENUM(BlueprintType)
enum class ESphereHitDirection : uint8 {
    FromSphereCenter,
    InitiatorHorseForward,
    InitiatorHorseBackward,
};

