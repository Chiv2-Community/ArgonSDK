#pragma once
#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "MouseEnterWidgetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(FEventReply, FMouseEnterWidget, const FGeometry&, Geometry, const FPointerEvent&, MouseEvent);

