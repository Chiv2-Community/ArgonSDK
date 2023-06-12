#pragma once
#include "CoreMinimal.h"
#include "OnGenerateSliderDelegate.generated.h"

class UOptionsScreenProp_Slider;
class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FOnGenerateSlider, UOptionsScreenProp_Slider*, Slider);

