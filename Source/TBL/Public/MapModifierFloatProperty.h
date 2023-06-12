#pragma once
#include "CoreMinimal.h"
#include "MapModifierProperty.h"
#include "MapModifierFloatProperty.generated.h"

UCLASS(Blueprintable)
class UMapModifierFloatProperty : public UMapModifierProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UMapModifierFloatProperty();
    UFUNCTION(BlueprintCallable)
    void SetValue(float NewValue);
    
};

