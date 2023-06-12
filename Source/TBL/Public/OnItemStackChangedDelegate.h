#pragma once
#include "CoreMinimal.h"
#include "OnItemStackChangedDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemStackChanged, AInventoryItem*, Item, int32, Delta);

