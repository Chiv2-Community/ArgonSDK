#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "OnPreviewMouseButtonDownEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreviewMouseButtonDownEventDelegate, const FPointerEvent&, MouseEvent);

