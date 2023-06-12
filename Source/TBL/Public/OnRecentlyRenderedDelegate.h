#pragma once
#include "CoreMinimal.h"
#include "OnRecentlyRenderedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRecentlyRendered, bool, bRecentlyRendered);

