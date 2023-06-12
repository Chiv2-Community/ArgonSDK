#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OptionsScreenSubCategory.generated.h"

class UOptionsScreenProperty;

UCLASS(Blueprintable)
class UOptionsScreenSubCategory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsKeybindingSubCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOptionsScreenProperty*> Properties;
    
    UOptionsScreenSubCategory();
    UFUNCTION(BlueprintCallable)
    void ResetAll();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAll();
    
};

