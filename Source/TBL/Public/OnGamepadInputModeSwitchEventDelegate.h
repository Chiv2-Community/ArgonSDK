#pragma once
#include "CoreMinimal.h"
#include "EGamepadInputMode.h"
#include "OnGamepadInputModeSwitchEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGamepadInputModeSwitchEvent, EGamepadInputMode, GamepadInputMode);

