#pragma once
#include "CoreMinimal.h"
#include "DeathDamageTakenEvent.h"
#include "DeathEvent.h"
#include "PlayerKilledDelegate.generated.h"

class AController;
class UDamageSource;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FPlayerKilled, AController*, Killer, AController*, Killed, UDamageSource*, DamageSource, FDeathEvent, DeathEvent, const FDeathDamageTakenEvent&, DamageEvent);

