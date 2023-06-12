#pragma once
#include "CoreMinimal.h"
#include "EOnStaminaDrainedPolicy.generated.h"

UENUM(BlueprintType)
enum class EOnStaminaDrainedPolicy : uint8 {
    Nothing,
    CancelAttack,
};

