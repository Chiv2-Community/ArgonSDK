#pragma once
#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "OnMouseWheelScrolledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMouseWheelScrolled, const FGeometry&, MyGeometry, const FPointerEvent&, MouseEvent);

