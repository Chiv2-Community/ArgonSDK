#pragma once
#include "CoreMinimal.h"
#include "DeathDamageTakenEvent.h"
#include "OnCatapultKilledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCatapultKilled, const FDeathDamageTakenEvent&, Event);

