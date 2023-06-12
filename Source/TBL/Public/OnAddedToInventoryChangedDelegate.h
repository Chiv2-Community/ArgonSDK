#pragma once
#include "CoreMinimal.h"
#include "OnAddedToInventoryChangedDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAddedToInventoryChanged, AInventoryItem*, Item, bool, IsAddedToInventory);

