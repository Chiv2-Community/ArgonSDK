#pragma once
#include "CoreMinimal.h"
#include "ESonyAppType.generated.h"

UENUM(BlueprintType)
enum ESonyAppType {
    ESony_Unknown,
    ESony_SIEE,
    ESony_SIEA,
    ESony_SIEJ,
    ESony_MAX UMETA(Hidden),
};

