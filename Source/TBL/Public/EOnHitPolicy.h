#pragma once
#include "CoreMinimal.h"
#include "EOnHitPolicy.generated.h"

UENUM(BlueprintType)
enum class EOnHitPolicy : uint8 {
    Nothing,
    Cancel,
    HitSuccess,
};

