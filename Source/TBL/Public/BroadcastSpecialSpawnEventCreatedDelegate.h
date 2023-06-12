#pragma once
#include "CoreMinimal.h"
#include "eSpecialSpawnType.h"
#include "BroadcastSpecialSpawnEventCreatedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBroadcastSpecialSpawnEventCreated, TEnumAsByte<eSpecialSpawnType>, Type, const UObject*, Event);

