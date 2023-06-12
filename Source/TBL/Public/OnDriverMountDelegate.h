#pragma once
#include "CoreMinimal.h"
#include "OnDriverMountDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDriverMount, ATBLCharacter*, Driver);

