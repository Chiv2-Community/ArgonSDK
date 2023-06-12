#pragma once
#include "CoreMinimal.h"
#include "Ability.h"
#include "AbilityAddedDelegate.h"
#include "AbilityArray.h"
#include "AbilityErrorInfo.h"
#include "AbilityErrorSignatureDelegate.h"
#include "AbilityInitiatedSignatureDelegate.h"
#include "AbilityInitiationParams.h"
#include "AbilityOnCooldownDelegate.h"
#include "AbilityRemovedDelegate.h"
#include "ClientAbilityInitiationParams.h"
#include "CombatStateStartAttack.h"
#include "EInvocationScope.h"
#include "InstancedObjectContainer.h"
#include "Result.h"
#include "ServerInitiateAbilityParams.h"
#include "TBLComponent.h"
#include "TargetMethodFinishedSignatureDelegate.h"
#include "AbilitiesComponent.generated.h"

class AAbilityInvocation;
class AActor;
class UAbilitySpec;
class UAbilityTargetMethod;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAbilitiesComponent : public UTBLComponent, public IInstancedObjectContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityAdded OnAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityRemoved OnRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityInitiatedSignature OnInitiated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityErrorSignature OnError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityOnCooldown OnOnCooldown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetMethodFinishedSignature OnTargetMethodFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAbilitySpec*> AbilityGrants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAbilityArray Abilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySpec* InitiatingAbility;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAbilityErrorInfo> PreviousAbilityErrors;
    
public:
    UAbilitiesComponent();
    UFUNCTION(BlueprintCallable)
    FResult TerminateAbility(UAbilitySpec* Spec);
    
    UFUNCTION(BlueprintCallable)
    void SyncServerInitiateAbility(const FServerInitiateAbilityParams& Params);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTerminateAbility(UAbilitySpec* AbilitySpec);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerInitiateAbility(const FServerInitiateAbilityParams& Params);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCombatStateStartAttack(UAbilitySpec* AbilitySpec, const FCombatStateStartAttack& Params);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInvocationActor(UAbilitySpec* AbilitySpec, TEnumAsByte<EInvocationScope::Type> Scope, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnInvocationComplete(AAbilityInvocation* Invocation, UAbilitySpec* AbilitySpec);
    
    UFUNCTION(BlueprintCallable)
    FResult InitiateAbility(UAbilitySpec* Spec, FAbilityInitiationParams InitiationParams);
    
    UFUNCTION(BlueprintCallable)
    FAbility GetAbility(UAbilitySpec* Spec);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartTargetMethodCosmetic(UAbilitySpec* AbilitySpec, int32 InvocationId, FAbilityInitiationParams InitiationParams, UAbilityTargetMethod* TargetMethod);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientSpamTest(const FString& Payload);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAbilityInvocationComplete(int32 InvocationId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAbilityInitiated(const FClientAbilityInitiationParams& Params);
    
    UFUNCTION(BlueprintCallable)
    FResult CanInitiate(UAbilitySpec* Spec);
    
    
    // Fix for true pure virtual functions not being implemented
};

