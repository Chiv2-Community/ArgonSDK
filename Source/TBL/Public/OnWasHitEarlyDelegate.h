#pragma once
#include "CoreMinimal.h"
#include "EarlyHitResult.h"
#include "OnWasHitEarlyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWasHitEarly, const FEarlyHitResult&, EarlyHit);

