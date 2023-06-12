#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "SpawnQueueActivatedDelegate.h"
#include "SpawnQueueDeactivatedDelegate.h"
#include "SpawnQueuePlayerReadyToSpawnDelegate.h"
#include "TBLObject.h"
#include "SpawnQueuer.generated.h"

class AController;

UCLASS(Blueprintable, DefaultToInstanced)
class USpawnQueuer : public UTBLObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSpawnQueueActivated OnActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSpawnQueueDeactivated OnDeactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSpawnQueuePlayerReadyToSpawn OnSpawnQueuePlayerReadyToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplysToAllTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDeactivate;
    
    USpawnQueuer();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RequestSpawnFor(AController* PC);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveFromQueue(AController* PC);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanActivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

