#pragma once
#include "CoreMinimal.h"
#include "Ability.h"
#include "AbilityAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbilityAdded, const FAbility&, Ability);

