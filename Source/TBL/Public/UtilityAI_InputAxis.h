#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UtilityAI_Context.h"
#include "UtilityAI_InputAxis.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew, MinimalAPI)
class UUtilityAI_InputAxis : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeMax;
    
    UUtilityAI_InputAxis();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ScaleToRange(float X) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalculateValue(const FUtilityAI_Context& C) const;
    
};

