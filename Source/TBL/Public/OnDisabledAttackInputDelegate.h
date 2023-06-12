#pragma once
#include "CoreMinimal.h"
#include "EWeaponAbilitySlotKey.h"
#include "OnDisabledAttackInputDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDisabledAttackInput, EWeaponAbilitySlotKey, WeaponAbilitySlotKey);

