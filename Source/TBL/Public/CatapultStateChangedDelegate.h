#pragma once
#include "CoreMinimal.h"
#include "CatapultStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCatapultStateChanged, uint8, CatapultState, uint8, PreviousState);

