#pragma once
#include "CoreMinimal.h"
#include "BroadcastActorUnderCrosshairChangedEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBroadcastActorUnderCrosshairChangedEvent, AActor*, Actor);

