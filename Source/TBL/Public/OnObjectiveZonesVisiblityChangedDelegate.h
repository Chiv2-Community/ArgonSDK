#pragma once
#include "CoreMinimal.h"
#include "OnObjectiveZonesVisiblityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjectiveZonesVisiblityChanged, bool, IsVisible);

