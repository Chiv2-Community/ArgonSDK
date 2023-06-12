#pragma once
#include "CoreMinimal.h"
#include "OnAnimNotifyBombardFireDelegate.generated.h"

class UTBLBombardAnimInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnimNotifyBombardFire, UTBLBombardAnimInstance*, AnimInstance);

