#pragma once
#include "CoreMinimal.h"
#include "OnProjectileStartedDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProjectileStarted, AInventoryItem*, Item);

