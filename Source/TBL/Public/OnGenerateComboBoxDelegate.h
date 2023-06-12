#pragma once
#include "CoreMinimal.h"
#include "OnGenerateComboBoxDelegate.generated.h"

class UOptionsScreenProp_ComboBox;
class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FOnGenerateComboBox, UOptionsScreenProp_ComboBox*, ComboBox);

