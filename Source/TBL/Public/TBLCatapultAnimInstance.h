#pragma once
#include "CoreMinimal.h"
#include "AttackInfo.h"
#include "EDismountType.h"
#include "OnAnimNotifyCatapultFireDelegate.h"
#include "TBLAnimInstance.h"
#include "TBLCatapultAnimInstance.generated.h"

class AActor;
class ACatapult;
class ATBLCharacter;
class UCombatState;
class UTBLCharacterAnimInstance_Playable;

UCLASS(Blueprintable, NonTransient)
class UTBLCatapultAnimInstance : public UTBLAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimNotifyCatapultFire OnAnimNotifyCatapultFire;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimNotifyCatapultFire OnAnimNotifyCatapultFireEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACatapult* CatapultActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* MountedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTBLCharacterAnimInstance_Playable* CharacterAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Is3p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPacked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsToFire;
    
    UTBLCatapultAnimInstance();
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* NewCombatState);
    
    UFUNCTION(BlueprintCallable)
    void OnCatapultStateChanged(uint8 State, uint8 PreviousState);
    
    UFUNCTION(BlueprintCallable)
    void OnCatapultMounted(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnCatapultFireNoDriver();
    
    UFUNCTION(BlueprintCallable)
    void OnCatapultDismounted(ATBLCharacter* Character, EDismountType DismountType);
    
    UFUNCTION(BlueprintCallable)
    void CatapultLaunchCharacters();
    
    UFUNCTION(BlueprintCallable)
    void CatapultFireAction();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_catapultFireEnd_Action();
    
};

