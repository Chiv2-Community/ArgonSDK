#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomizationContext.h"
#include "CustomizationLoadingJob.generated.h"

class UCTBase;

UCLASS(Blueprintable)
class UCustomizationLoadingJob : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCTBase*> Assets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCustomizationContext TemporaryCustomizationContext;
    
public:
    UCustomizationLoadingJob();
};

