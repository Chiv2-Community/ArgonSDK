#pragma once
#include "CoreMinimal.h"
#include "FallDamageTakenEvent.h"
#include "OnFallDamageEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFallDamageEvent, const FFallDamageTakenEvent&, FallDamageEvent);

