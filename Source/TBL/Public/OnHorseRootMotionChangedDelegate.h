#pragma once
#include "CoreMinimal.h"
#include "OnHorseRootMotionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorseRootMotionChanged, bool, bRootMotion);

