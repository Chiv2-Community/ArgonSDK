#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "AmbientAnimalInterface.generated.h"

UINTERFACE(Blueprintable)
class UAmbientAnimalInterface : public UInterface {
    GENERATED_BODY()
};

class IAmbientAnimalInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RandomizeAnimal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimalHide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimalFlee(const FVector& StimulusLocation);
    
};

