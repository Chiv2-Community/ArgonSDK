#pragma once
#include "CoreMinimal.h"
#include "OnProjectileBeginPlayDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProjectileBeginPlay, AInventoryItem*, InventoryItem);

