#pragma once
#include "CoreMinimal.h"
#include "HorsePlayDismountAnimationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHorsePlayDismountAnimation, FName, AnimationName);

