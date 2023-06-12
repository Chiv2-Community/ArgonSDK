#pragma once
#include "CoreMinimal.h"
#include "OnGenerateKeybindDelegate.generated.h"

class UOptionsScreenProp_Keybind;
class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FOnGenerateKeybind, UOptionsScreenProp_Keybind*, KeyBind);

