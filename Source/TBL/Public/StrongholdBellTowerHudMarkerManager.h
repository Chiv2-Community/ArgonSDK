#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "ActorDisplayInfo.h"
#include "EDismountType.h"
#include "EFaction.h"
#include "Templates/SubclassOf.h"
#include "StrongholdBellTowerHudMarkerManager.generated.h"

class AActor;
class AInventoryItem;
class AMultiActorHUDMarker;
class ATBLCharacter;

UCLASS(Blueprintable)
class AStrongholdBellTowerHudMarkerManager : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMultiActorHUDMarker* MultiActorHUDMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction AttackingFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CatapultAmmoActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CatapultActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TeamCapturePointActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DestroyableActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> CatapultAmmoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorDisplayInfo LoadedCatapultDisplayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorDisplayInfo UnLoadedCatapultDisplayInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
public:
    AStrongholdBellTowerHudMarkerManager();
private:
    UFUNCTION(BlueprintCallable)
    void PlayerEquippedItemsChanged(ATBLCharacter* Player);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerLeftCapturePoint(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEnteredCapturePoint(ATBLCharacter* Character);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCatapultMounted(ATBLCharacter* Driver);
    
    UFUNCTION(BlueprintCallable)
    void OnCatapultLoadStatusChanged(AInventoryItem* LoadedAmmo);
    
    UFUNCTION(BlueprintCallable)
    void OnCatapultDismounted(ATBLCharacter* Driver, EDismountType DismountType);
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateManager();
    
    UFUNCTION(BlueprintCallable)
    void ActivateManager();
    
};

