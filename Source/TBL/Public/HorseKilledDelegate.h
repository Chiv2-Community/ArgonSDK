#pragma once
#include "CoreMinimal.h"
#include "DeathDamageTakenEvent.h"
#include "HorseKilledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHorseKilled, const FDeathDamageTakenEvent&, DamageEvent);

