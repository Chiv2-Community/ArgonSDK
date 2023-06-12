#pragma once
#include "CoreMinimal.h"
#include "OnAnimNotifyCatapultFireDelegate.generated.h"

class UTBLCatapultAnimInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnimNotifyCatapultFire, UTBLCatapultAnimInstance*, AnimInstance);

