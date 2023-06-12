#pragma once
#include "CoreMinimal.h"
#include "EInventoryItemDamagedState.h"
#include "OnInventoryItemDamageStateChangedDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInventoryItemDamageStateChanged, AInventoryItem*, Item, EInventoryItemDamagedState, DamagedState);

