#pragma once
#include "CoreMinimal.h"
#include "AttackInfo.h"
#include "EDismountType.h"
#include "OnAnimationStartingDelegate.h"
#include "OnCharacterChargeChangedDelegate.h"
#include "OnFinalMontageSectionPlayingDelegate.h"
#include "OnMountableActorKilledAnimCompleteDelegate.h"
#include "SiegeEngine.h"
#include "Templates/SubclassOf.h"
#include "CharacterMountableActor.generated.h"

class AActor;
class ATBLCharacter;
class UCombatState;
class UCombatStateComponent;
class UCombatStateQueue;
class UCombatStateSet;
class UCombatStateSynchronization;
class UCurveFloat;
class UInteractableComponent;
class UPhysicsAsset;
class UPrimitiveComponent;
class USiegeMountPoint;

UCLASS(Blueprintable)
class ACharacterMountableActor : public ASiegeEngine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatStateComponent* CombatStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatStateSynchronization* CombatStateSynchronization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatStateQueue* CombatStateQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCombatStateSet> CombatStateSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* LeftInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* RightInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USiegeMountPoint* LeftMountPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USiegeMountPoint* RightMountPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ChargeToDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChargePercent, meta=(AllowPrivateAccess=true))
    float ChargePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TwoPlayerChargeBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PhysAsset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterChargeChanged OnChargeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMountableActorKilledAnimComplete OnMountableActorKilledAnimComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinalMontageSectionPlaying OnFinalMontageSectionPlaying;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimationStarting OnAnimationStarting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterMountableActorAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityChargeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityAttackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumChargePercent;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATBLCharacter> AbilityInstigatingDriver;
    
public:
    ACharacterMountableActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChargePercent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* CombatState);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterMount(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDismounted(ATBLCharacter* DismountedDriver, EDismountType DismountType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool NeedsTick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPrimitiveComponent* GetPushingComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumCharacters() const;
    
};

