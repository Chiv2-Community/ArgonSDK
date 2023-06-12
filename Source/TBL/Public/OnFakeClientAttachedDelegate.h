#pragma once
#include "CoreMinimal.h"
#include "OnFakeClientAttachedDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFakeClientAttached, AInventoryItem*, ParentItem);

