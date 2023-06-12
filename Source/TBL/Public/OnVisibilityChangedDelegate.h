#pragma once
#include "CoreMinimal.h"
#include "OnVisibilityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVisibilityChanged, bool, bNewVisibility);

