#pragma once
#include "CoreMinimal.h"
#include "HorseBreakingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FHorseBreaking, bool, bIsBreaking, bool, bIsEmergencyBreaking, float, CurrentSpeed, FName, PreviousState);

