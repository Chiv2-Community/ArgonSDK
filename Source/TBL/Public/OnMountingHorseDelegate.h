#pragma once
#include "CoreMinimal.h"
#include "OnMountingHorseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMountingHorse, bool, IsMountingHorse);

