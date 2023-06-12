#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DelegateWrapper_ActorDestroyed.generated.h"

class AActor;

UCLASS(Blueprintable)
class UDelegateWrapper_ActorDestroyed : public UObject {
    GENERATED_BODY()
public:
    UDelegateWrapper_ActorDestroyed();
    UFUNCTION(BlueprintCallable)
    void OnExecute(AActor* Actor);
    
};

