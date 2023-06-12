#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DisplayComponentInterface.h"
#include "EFaction.h"
#include "EInteractCombatState.h"
#include "EInteractableRechargeRule.h"
#include "EInteractableUILocation.h"
#include "EInteractionType.h"
#include "InteractableComponentCanBeUsedDelegate.h"
#include "InteractableComponentCanShowUIDelegate.h"
#include "InteractableComponentOnCooldownSignatureDelegate.h"
#include "InteractableComponentOnInteractableEnabledDelegate.h"
#include "InteractableComponentOnInteractableFocusedSignatureDelegate.h"
#include "InteractableComponentOnInteractableLostFocusSignatureDelegate.h"
#include "InteractableComponentOnInteractableReachableSignatureDelegate.h"
#include "InteractableComponentOnInteractableUnreachableSignatureDelegate.h"
#include "InteractableComponentOnUseHeldInitiatedSignatureDelegate.h"
#include "InteractableComponentOnUseHeldSignatureDelegate.h"
#include "InteractableComponentOnUseReleasedSignatureDelegate.h"
#include "InteractableComponentOnUseSignatureDelegate.h"
#include "InteractableComponentOnUsesChangedSignatureDelegate.h"
#include "ReplicatedSubobjectInterface.h"
#include "Replicated_AActorPtr.h"
#include "Replicated_Bool.h"
#include "Replicated_EFaction.h"
#include "Replicated_EInteractableRechargeRule.h"
#include "Replicated_EInteractionType.h"
#include "Replicated_Float.h"
#include "Replicated_Int32.h"
#include "StageActorAction.h"
#include "Templates/SubclassOf.h"
#include "UsingPawnChangedSignatureDelegate.h"
#include "InteractableComponent.generated.h"

class AInventoryItem;
class APawn;
class ATBLCharacter;
class UHUDContainerSubWidget;
class UInteractableComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class TBL_API UInteractableComponent : public UActorComponent, public IReplicatedSubobjectInterface, public IDisplayComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* OverrideInteractable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableComponentOnUseHeldInitiatedSignature OnUseHeldInitiated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableComponentOnUseSignature OnUse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableComponentOnUseHeldSignature OnUseHeld;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableComponentOnUseSignature OnUseSyncFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableComponentOnCooldownSignature OnCooldown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableComponentOnUseReleasedSignature OnUseReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableComponentOnInteractableReachableSignature OnInteractableReachable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableComponentOnInteractableUnreachableSignature OnInteractableUnreachable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableComponentOnInteractableFocusedSignature OnInteractableFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableComponentOnInteractableLostFocusSignature OnInteractableLostFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableComponentOnUsesChangedSignature OnInteracbleUsesUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableComponentOnInteractableEnabled OnInteractableEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUsingPawnChangedSignature OnPawnChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableComponentCanShowUI OnCanShowUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableComponentCanBeUsed OnCanBeUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* UsingPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentUsingPawn, meta=(AllowPrivateAccess=true))
    FReplicated_AActorPtr CurrentUsingPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Uses, meta=(AllowPrivateAccess=true))
    FReplicated_Int32 Uses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowProximityCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseRechargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RechargeStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RechargeRule, meta=(AllowPrivateAccess=true))
    FReplicated_EInteractableRechargeRule ReplicatedRechargeRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractableRechargeRule RechargeRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InteractionType, meta=(AllowPrivateAccess=true))
    FReplicated_EInteractionType ReplicatedInteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractionType InteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyBind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractableUILocation UILocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction AllowedTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bOnlyAllowOwningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ValidCollisionComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSet<UPrimitiveComponent*> ValidCollisionComponentSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckValidEquipState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractCombatState InteractCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_EFaction UseableByTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitiateUseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InitiateUseDuration, meta=(AllowPrivateAccess=true))
    FReplicated_Float ReplicatedInitiateUseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentUseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUseHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> ItemRequiredToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATBLCharacter> CharacterClassRequiredToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageActorAction StageActorAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHUDContainerSubWidget> ConfigWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHUDContainerSubWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHaveHudMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPickupOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideInteractablePrompt;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Enabled, meta=(AllowPrivateAccess=true))
    FReplicated_Bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATBLCharacter*> HoldingCharacterList;
    
public:
    UInteractableComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Use(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void StopRechargeTimer();
    
    UFUNCTION(BlueprintCallable)
    void SetUseableByTeam(EFaction EFaction);
    
    UFUNCTION(BlueprintCallable)
    void SetRechargeRule(EInteractableRechargeRule InRechargeRule);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlyAllowOwningPlayer(bool bInOnlyAllowOwningPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionType(EInteractionType InInteractionType);
    
    UFUNCTION(BlueprintCallable)
    void SetInitiateUseDuration(float InInitiateUseDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool Enabled, bool bForceClient);
    
    UFUNCTION(BlueprintCallable)
    void RestartRechargeTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Uses();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RechargeRule();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InteractionType();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InitiateUseDuration();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Enabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentUsingPawn();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsValidCollisionComponent(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPrimitiveComponent*> GetValidCollisionComponents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUses();
    
    UFUNCTION(BlueprintCallable)
    EFaction GetUseableByTeam();
    
    UFUNCTION(BlueprintCallable)
    EInteractableRechargeRule GetRechargeRule();
    
    UFUNCTION(BlueprintCallable)
    EInteractionType GetInteractionType();
    
    UFUNCTION(BlueprintCallable)
    UInteractableComponent* GetInteractableComponent();
    
    UFUNCTION(BlueprintCallable)
    bool GetEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowUI(APawn* Pawn) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

