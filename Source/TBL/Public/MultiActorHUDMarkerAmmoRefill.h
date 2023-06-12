#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "MarkedActorEntryAmmoRefill.h"
#include "MultiActorHUDMarkerBase.h"
#include "MultiActorHUDMarkerAmmoRefill.generated.h"

class AInventoryItem;
class UInventory;

UCLASS(Blueprintable, Config=Game)
class TBL_API AMultiActorHUDMarkerAmmoRefill : public AMultiActorHUDMarkerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMarkedActorEntryAmmoRefill> MarkedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFaction CachedFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AInventoryItem*> CachedAmmoInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventory* CachedInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float MaxMarkerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 SimultaneousMarkerOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxMarkerDistanceSquared;
    
public:
    AMultiActorHUDMarkerAmmoRefill();
};

