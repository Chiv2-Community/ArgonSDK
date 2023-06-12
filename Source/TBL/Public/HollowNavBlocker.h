#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HollowNavBlocker.generated.h"

UCLASS(Abstract, Blueprintable)
class AHollowNavBlocker : public AActor {
    GENERATED_BODY()
public:
    AHollowNavBlocker();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Activate();
    
};

