#pragma once
#include "CoreMinimal.h"
#include "EDismountType.h"
#include "OnDriverDismountDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDriverDismount, ATBLCharacter*, Driver, EDismountType, DismountType);

