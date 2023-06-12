#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/EngineTypes.h"
#include "ProjectileOverlapEventInterface.generated.h"

class AInventoryItem;

UINTERFACE(Blueprintable)
class UProjectileOverlapEventInterface : public UInterface {
    GENERATED_BODY()
};

class IProjectileOverlapEventInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProjectileOverlap(AInventoryItem* Item, FHitResult HitResult);
    
};

