#pragma once
#include "CoreMinimal.h"
#include "Ability.h"
#include "AbilityOnCooldownDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAbilityOnCooldown, const FAbility&, Ability, float, RemainingTime, AInventoryItem*, InventoryItem);

