#pragma once
#include "CoreMinimal.h"
#include "OnRootMotionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRootMotionChanged, bool, bRootMotion);

