#pragma once
#include "CoreMinimal.h"
#include "ESwingThroughReason.generated.h"

UENUM(BlueprintType)
enum ESwingThroughReason {
    STR_IsFacingTarget,
    STR_IsTargetVisible,
    STR_IsFacingWeaponTip,
    STR_IsFacingWeaponTipDelayed,
    STR_MAX UMETA(Hidden),
};

