#pragma once
#include "CoreMinimal.h"
#include "InteractableComponentOnInteractableEnabledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractableComponentOnInteractableEnabled, bool, Enabled);

