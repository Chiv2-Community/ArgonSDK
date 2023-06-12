#pragma once
#include "CoreMinimal.h"
#include "MapModifierProperty.h"
#include "MapModifierBoolProperty.generated.h"

UCLASS(Blueprintable)
class UMapModifierBoolProperty : public UMapModifierProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    UMapModifierBoolProperty();
    UFUNCTION(BlueprintCallable)
    void SetValue(bool NewValue);
    
};

