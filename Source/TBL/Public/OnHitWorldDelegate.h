#pragma once
#include "CoreMinimal.h"
#include "OnHitWorldDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHitWorld, AActor*, HitActor, bool, bBreakableHit, bool, bAutonomous);

