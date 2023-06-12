#pragma once
#include "CoreMinimal.h"
#include "EUtilityAI_Curve.generated.h"

UENUM(BlueprintType)
enum class EUtilityAI_Curve : uint8 {
    Linear,
    Polynomial,
    Logistic,
    Logit,
    Normal,
    Sine,
    EUtilityAI_MAX UMETA(Hidden),
};

