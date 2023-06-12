#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AbilityTargetMethod.h"
#include "AttackInfo.h"
#include "MeleeTargetMethod.generated.h"

class AActor;
class AInventoryItem;

UCLASS(Blueprintable, EditInlineNew)
class UMeleeTargetMethod : public UAbilityTargetMethod {
    GENERATED_BODY()
public:
    UMeleeTargetMethod();
protected:
    UFUNCTION(BlueprintCallable)
    void OnRagdollHitEventCosmetic(AActor* HitTaker, AActor* HitCauser, AInventoryItem* Weapon, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateEventCosmetic(AActor* Actor, FName EventName, const FAttackInfo& EventAttackInfo);
    
};

