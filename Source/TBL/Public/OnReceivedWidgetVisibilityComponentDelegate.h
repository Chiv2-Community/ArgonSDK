#pragma once
#include "CoreMinimal.h"
#include "OnReceivedWidgetVisibilityComponentDelegate.generated.h"

class UWidgetVisibilityComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedWidgetVisibilityComponent, UWidgetVisibilityComponent*, VisibilityComponent);

