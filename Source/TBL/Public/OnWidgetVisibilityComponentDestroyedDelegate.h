#pragma once
#include "CoreMinimal.h"
#include "OnWidgetVisibilityComponentDestroyedDelegate.generated.h"

class UWidgetVisibilityComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWidgetVisibilityComponentDestroyed, UWidgetVisibilityComponent*, Component);

