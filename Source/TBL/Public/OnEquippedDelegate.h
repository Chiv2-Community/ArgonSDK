#pragma once
#include "CoreMinimal.h"
#include "OnEquippedDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquipped, AInventoryItem*, Item);

