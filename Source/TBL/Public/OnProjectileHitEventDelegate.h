#pragma once
#include "CoreMinimal.h"
#include "ProjectileHitParams.h"
#include "OnProjectileHitEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProjectileHitEvent, const FProjectileHitParams&, HitParams);

