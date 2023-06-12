#pragma once
#include "CoreMinimal.h"
#include "EGamepadNavigationMode.h"
#include "OnGamepadNavigationModeSwitchEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGamepadNavigationModeSwitchEvent, EGamepadNavigationMode, GamepadNavigationMode);

