#pragma once
#include "CoreMinimal.h"
#include "MapModifierProperty.h"
#include "MapModifierComboBoxProperty.generated.h"

UCLASS(Blueprintable)
class UMapModifierComboBoxProperty : public UMapModifierProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> TextValues;
    
    UMapModifierComboBoxProperty();
    UFUNCTION(BlueprintCallable)
    void SetValue(int32 NewValue);
    
};

