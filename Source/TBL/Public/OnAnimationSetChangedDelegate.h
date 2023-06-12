#pragma once
#include "CoreMinimal.h"
#include "AnimationSetDataTable.h"
#include "OnAnimationSetChangedDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAnimationSetChanged, FName, AnimSetName, FAnimationSetDataTable, AnimInfo, AInventoryItem*, InventoryItem);

