#pragma once
#include "CoreMinimal.h"
#include "OnPlayerUsedItemDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerUsedItem, AInventoryItem*, Item);

