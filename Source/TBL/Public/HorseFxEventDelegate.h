#pragma once
#include "CoreMinimal.h"
#include "HorseFxEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHorseFxEvent, FName, EventName, float, EventScale, const TArray<FName>&, EventTags);

