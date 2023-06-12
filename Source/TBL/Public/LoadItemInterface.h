#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LoadItemInterface.generated.h"

class AInventoryItem;
class ATBLCharacter;

UINTERFACE(Blueprintable)
class ULoadItemInterface : public UInterface {
    GENERATED_BODY()
};

class ILoadItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadItem(AInventoryItem* Item, ATBLCharacter* Initiator);
    
};

