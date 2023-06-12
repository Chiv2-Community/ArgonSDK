#pragma once
#include "CoreMinimal.h"
#include "OnProjectileHitPassiveShieldDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnProjectileHitPassiveShield, AInventoryItem*, Shield, AInventoryItem*, Projectile);

