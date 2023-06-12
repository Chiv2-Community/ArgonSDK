#pragma once
#include "CoreMinimal.h"
#include "OnHorseBumpDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnHorseBump, AActor*, OtherActor, FName, Direction, float, Angle, float, BumpVelocity, bool, bRearImpact);

