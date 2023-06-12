#pragma once
#include "CoreMinimal.h"
#include "OnProjectileFinishedDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProjectileFinished, AInventoryItem*, Item);

