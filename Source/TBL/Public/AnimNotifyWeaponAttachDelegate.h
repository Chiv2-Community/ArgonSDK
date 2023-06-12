#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyWeaponAttachDelegate.generated.h"

class UTBLCharacterAnimInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAnimNotifyWeaponAttach, UTBLCharacterAnimInstance*, AnimBP);

