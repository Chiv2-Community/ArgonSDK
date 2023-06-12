#pragma once
#include "CoreMinimal.h"
#include "PlayInventoryAnimationDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayInventoryAnimation, FName, Animation, AInventoryItem*, Item);

