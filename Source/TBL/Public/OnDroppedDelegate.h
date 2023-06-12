#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnDroppedDelegate.generated.h"

class AInventoryItem;
class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnDropped, AInventoryItem*, Item, ATBLCharacter*, Character, FTransform, Transform);

