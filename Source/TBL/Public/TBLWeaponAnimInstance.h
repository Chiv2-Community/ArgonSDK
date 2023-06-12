#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimationSetDataTable.h"
#include "TBLAnimInstance.h"
#include "TBLWeaponAnimInstance.generated.h"

class AInventoryItem;
class ATBLCharacter;
class UAnimMontage;
class UAnimationSet;

UCLASS(Blueprintable, NonTransient)
class UTBLWeaponAnimInstance : public UTBLAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventoryItem* InventoryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Is3p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAddedToInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCarryable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviousCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* AnimationSetBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* AnimationSetBase1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* AnimationSetBase3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ReloadStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> IdlePoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MontageStartingSection;
    
    UTBLWeaponAnimInstance();
    UFUNCTION(BlueprintCallable)
    void StartWeaponAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnDropped(AInventoryItem* Item, ATBLCharacter* Character, FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackMontageSectionChanged(UAnimMontage* Montage, int32 NextSection);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationSetChanged(FName AnimSetName, FAnimationSetDataTable AnimInfo, AInventoryItem* InInventoryItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnCombatStateChanged(FName PreviousState, FName NewState);
    
    UFUNCTION(BlueprintCallable)
    void EndWeaponAnimation();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_ShowArrow();
    
};

