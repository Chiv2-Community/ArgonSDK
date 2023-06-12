#pragma once
#include "CoreMinimal.h"
#include "AttackInfo.h"
#include "EDismountType.h"
#include "OnAnimNotifyBombardFireDelegate.h"
#include "OnBombardFireAnimCompleteDelegate.h"
#include "TBLAnimInstance.h"
#include "TBLBombardAnimInstance.generated.h"

class AActor;
class ABombard;
class ATBLCharacter;
class UCombatState;
class UTBLCharacterAnimInstance_Playable;

UCLASS(Blueprintable, NonTransient)
class UTBLBombardAnimInstance : public UTBLAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABombard* BombardActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* MountedCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimNotifyBombardFire OnAnimNotifyBombardFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BombardPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BombardYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTBLCharacterAnimInstance_Playable* CharacterAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Is3p;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBombardFireAnimComplete OnBombardFireAnimComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsToFire;
    
    UTBLBombardAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRepaired();
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* NewCombatState);
    
    UFUNCTION(BlueprintCallable)
    void OnBombardRepaired();
    
    UFUNCTION(BlueprintCallable)
    void OnBombardMounted(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnBombardFireActionBegin();
    
    UFUNCTION(BlueprintCallable)
    void OnBombardFireAction();
    
    UFUNCTION(BlueprintCallable)
    void OnBombardDismounted(ATBLCharacter* Character, EDismountType DismountType);
    
    UFUNCTION(BlueprintCallable)
    void AddLogEntry(const FString& LogEntry);
    
};

