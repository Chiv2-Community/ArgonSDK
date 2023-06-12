#pragma once
#include "CoreMinimal.h"
#include "FLammableHitEvent.h"
#include "OnDamageAppliedToFlammableComponentDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamageAppliedToFlammableComponent, FFLammableHitEvent, HitEvent);

