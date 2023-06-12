#pragma once
#include "CoreMinimal.h"
#include "LocalPlayerInsideZoneChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLocalPlayerInsideZoneChanged, bool, LocalPlayerInsideZone);

