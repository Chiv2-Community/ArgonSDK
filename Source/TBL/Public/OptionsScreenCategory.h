#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OptionsScreenCategory.generated.h"

class UOptionsScreenSubCategory;

UCLASS(Blueprintable)
class UOptionsScreenCategory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOptionsScreenSubCategory*> Subcategories;
    
    UOptionsScreenCategory();
    UFUNCTION(BlueprintCallable)
    void SetToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void ResetAll();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAll();
    
};

