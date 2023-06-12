#pragma once
#include "CoreMinimal.h"
#include "AttackInfo.h"
#include "EDismountType.h"
#include "TBLAnimInstance.h"
#include "TBLBallistaAnimInstance.generated.h"

class AActor;
class ABallista;
class ATBLCharacter;
class UCombatState;
class UTBLCharacterAnimInstance_Playable;

UCLASS(Blueprintable, NonTransient)
class UTBLBallistaAnimInstance : public UTBLAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABallista* BallistaActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* MountedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BallistaPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BallistaYaw;
    
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
    
    UTBLBallistaAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRepaired();
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* NewCombatState);
    
    UFUNCTION(BlueprintCallable)
    void OnBallistaRepaired();
    
    UFUNCTION(BlueprintCallable)
    void OnBallistaMounted(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnBallistaDismounted(ATBLCharacter* Character, EDismountType DismountType);
    
};

