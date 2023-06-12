#pragma once
#include "CoreMinimal.h"
#include "Ability.h"
#include "AbilityRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbilityRemoved, const FAbility&, Ability);

