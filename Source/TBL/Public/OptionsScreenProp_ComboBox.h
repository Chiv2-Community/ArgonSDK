#pragma once
#include "CoreMinimal.h"
#include "OptionsScreenProperty.h"
#include "OptionsScreenProp_ComboBox.generated.h"

UCLASS(Blueprintable)
class UOptionsScreenProp_ComboBox : public UOptionsScreenProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Options;
    
    UOptionsScreenProp_ComboBox();
    UFUNCTION(BlueprintCallable)
    void SetCurrentValue(int32 In);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentValue();
    
};

