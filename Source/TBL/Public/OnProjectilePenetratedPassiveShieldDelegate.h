#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnProjectilePenetratedPassiveShieldDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnProjectilePenetratedPassiveShield, AInventoryItem*, Shield, AInventoryItem*, Projectile, FVector, HitLocation);

