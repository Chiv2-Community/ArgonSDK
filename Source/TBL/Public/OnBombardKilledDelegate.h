#pragma once
#include "CoreMinimal.h"
#include "DeathDamageTakenEvent.h"
#include "OnBombardKilledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBombardKilled, const FDeathDamageTakenEvent&, Event);

