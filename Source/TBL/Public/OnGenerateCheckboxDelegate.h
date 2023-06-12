#pragma once
#include "CoreMinimal.h"
#include "OnGenerateCheckboxDelegate.generated.h"

class UOptionsScreenProp_CheckBox;
class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FOnGenerateCheckbox, UOptionsScreenProp_CheckBox*, CheckBox);

