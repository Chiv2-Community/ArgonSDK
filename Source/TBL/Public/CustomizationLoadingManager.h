#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomizationLoadingManager.generated.h"

class UCustomizationLoadingJob;

UCLASS(Blueprintable)
class UCustomizationLoadingManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCustomizationLoadingJob*> Jobs;
    
public:
    UCustomizationLoadingManager();
};

