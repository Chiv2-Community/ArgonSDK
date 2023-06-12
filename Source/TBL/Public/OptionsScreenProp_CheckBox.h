#pragma once
#include "CoreMinimal.h"
#include "OptionsScreenProperty.h"
#include "OptionsScreenProp_CheckBox.generated.h"

UCLASS(Blueprintable)
class UOptionsScreenProp_CheckBox : public UOptionsScreenProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CurrentValue;
    
    UOptionsScreenProp_CheckBox();
    UFUNCTION(BlueprintCallable)
    void SetCurrentValue(bool In);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentValue();
    
};

