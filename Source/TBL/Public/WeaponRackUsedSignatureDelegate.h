#pragma once
#include "CoreMinimal.h"
#include "WeaponRackUsedSignatureDelegate.generated.h"

class AInventoryItem;
class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FWeaponRackUsedSignature, APawn*, Pawn, AInventoryItem*, ItemGranted, int32, UsesRemaining);

