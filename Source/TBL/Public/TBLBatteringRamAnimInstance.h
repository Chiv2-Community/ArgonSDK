#pragma once
#include "CoreMinimal.h"
#include "AttackInfo.h"
#include "TBLAnimInstance.h"
#include "TBLBatteringRamAnimInstance.generated.h"

class AActor;
class ABatteringRam;
class ATBLCharacter;
class UCombatState;
class USkeletalMeshComponent;
class UTBLCharacterAnimInstance_Playable;

UCLASS(Blueprintable, NonTransient)
class UTBLBatteringRamAnimInstance : public UTBLAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABatteringRam* BatteringRamActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* LeftCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* RightCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* LeftCharacterMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* RightCharacterMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTBLCharacterAnimInstance_Playable* LeftCharacterAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTBLCharacterAnimInstance_Playable* RightCharacterAnimBP;
    
    UTBLBatteringRamAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState);
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_ramRecovery_End();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_ramFire_Action();
    
};

