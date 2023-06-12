#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FailedAttackInfo.h"
#include "SyncAttackId.h"
#include "CombatStateSynchronization.generated.h"

class UCombatStateComponent;
class UCombatStateQueue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCombatStateSynchronization : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatStateComponent* CombatStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatStateQueue* CombatStateQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LatestAttackID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSyncAttackId> ReceivedAcks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSyncAttackId> FailedAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSyncAttackId> CancelledAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFailedAttackInfo LastFailedAttack;
    
public:
    UCombatStateSynchronization();
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnAttackFailed(int32 AttackID);
    
};

