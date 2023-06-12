#pragma once
#include "CoreMinimal.h"
#include "InventoryItemDamagedParams.h"
#include "OnInventoryItemDamagedDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInventoryItemDamaged, AInventoryItem*, Item, FInventoryItemDamagedParams, Params);

