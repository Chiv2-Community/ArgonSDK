#pragma once
#include "CoreMinimal.h"
#include "SetOnHorseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSetOnHorse, bool, IsOnHorse);

