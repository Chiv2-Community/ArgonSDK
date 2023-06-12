#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "GetKeybindingWidgetDelegateDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FGetKeybindingWidgetDelegate, FKey, Key);

