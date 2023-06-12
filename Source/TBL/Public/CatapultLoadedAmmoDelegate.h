#pragma once
#include "CoreMinimal.h"
#include "CatapultLoadedAmmoDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCatapultLoadedAmmo, AInventoryItem*, LoadedAmmo);

