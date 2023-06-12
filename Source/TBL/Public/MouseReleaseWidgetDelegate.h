#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "MouseReleaseWidgetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(FEventReply, FMouseReleaseWidget, const FPointerEvent&, MouseEvent);

