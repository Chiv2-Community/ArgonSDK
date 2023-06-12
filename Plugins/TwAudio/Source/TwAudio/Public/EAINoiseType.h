#pragma once
#include "CoreMinimal.h"
#include "EAINoiseType.generated.h"

UENUM(BlueprintType)
enum class EAINoiseType : uint8 {
    NT_Ambient,
    NT_AlertToSelf,
    NT_AlertToEnemy,
    NT_AlertToPOI,
    NT_Custom1,
    NT_Custom2,
    NT_Custom3,
    NT_Custom4,
    NT_Custom5,
    NT_Custom6,
    NT_Custom7,
    NT_Custom8,
    NT_MAX UMETA(Hidden),
};

