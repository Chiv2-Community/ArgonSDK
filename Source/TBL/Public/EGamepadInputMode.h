#pragma once
#include "CoreMinimal.h"
#include "EGamepadInputMode.generated.h"

UENUM(BlueprintType)
enum class EGamepadInputMode : uint8 {
    MouseKeyboard,
    Gamepad,
    Any,
};

