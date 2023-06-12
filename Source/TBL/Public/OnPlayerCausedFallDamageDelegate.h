#pragma once
#include "CoreMinimal.h"
#include "DeathDamageTakenEvent.h"
#include "OnPlayerCausedFallDamageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerCausedFallDamage, const FDeathDamageTakenEvent&, DamageEvent);

