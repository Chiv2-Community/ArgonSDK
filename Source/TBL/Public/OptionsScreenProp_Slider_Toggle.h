#pragma once
#include "CoreMinimal.h"
#include "OptionsScreenProp_Slider.h"
#include "OptionsScreenProp_Slider_Toggle.generated.h"

UCLASS(Blueprintable)
class UOptionsScreenProp_Slider_Toggle : public UOptionsScreenProp_Slider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToggleValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToggleReturn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextOverrideForToggle;
    
    UOptionsScreenProp_Slider_Toggle();
};

