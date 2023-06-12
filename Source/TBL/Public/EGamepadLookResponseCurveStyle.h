#pragma once
#include "CoreMinimal.h"
#include "EGamepadLookResponseCurveStyle.generated.h"

UENUM(BlueprintType)
enum class EGamepadLookResponseCurveStyle : uint8 {
    Standard,
    Linear,
    Exponential,
    SCurve,
};

