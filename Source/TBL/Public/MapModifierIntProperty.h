#pragma once
#include "CoreMinimal.h"
#include "MapModifierProperty.h"
#include "MapModifierIntProperty.generated.h"

UCLASS(Blueprintable)
class UMapModifierIntProperty : public UMapModifierProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UMapModifierIntProperty();
    UFUNCTION(BlueprintCallable)
    void SetValue(int32 NewValue);
    
};

