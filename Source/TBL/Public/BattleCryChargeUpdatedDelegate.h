#pragma once
#include "CoreMinimal.h"
#include "ESpecialItemChargeType.h"
#include "BattleCryChargeUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBattleCryChargeUpdated, float, CurrentCharge, float, MaxCharge, ESpecialItemChargeType, ChargeType);

