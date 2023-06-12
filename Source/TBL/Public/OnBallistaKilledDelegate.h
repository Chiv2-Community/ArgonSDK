#pragma once
#include "CoreMinimal.h"
#include "DeathDamageTakenEvent.h"
#include "OnBallistaKilledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBallistaKilled, const FDeathDamageTakenEvent&, Event);

