#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DestroyableByPushableInterface.generated.h"

class UPushableComponent;

UINTERFACE(Blueprintable)
class UDestroyableByPushableInterface : public UInterface {
    GENERATED_BODY()
};

class IDestroyableByPushableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPushableBeginOverlap(UPushableComponent* Pushable);
    
};

