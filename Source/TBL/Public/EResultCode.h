#pragma once
#include "CoreMinimal.h"
#include "EResultCode.generated.h"

UENUM(BlueprintType)
namespace EResultCode {
    enum Type {
        Success,
        AbilityCannotCast,
        AbilityNotWhileDead,
        AbilityNotWhileSilenced,
        AbilityOnCooldown,
        AbilityAlreadyCasting,
        AbilityActivationCosts,
        AbilityInitiatorPrerequisites,
        AbilityTargetPrerequisites,
        AbilityNoInvocations,
        AbilityNoActivationMethod,
        AbilityNoTargetMethod,
        AbilityReachedMaxInvocations,
        AbilityNotGranted,
        AbilityLockedByExperienceLevel,
        AbilityOutOfStamina,
        AbilityDisabled,
        EquipInvalidSlot,
        EquipMustBePawn,
        EquipMustBePlayer,
        EquipItemNotFound,
        EquipWrongSlotForItem,
        EquipNotRequiredClass,
        EquipNotRequiredTeam,
        EquipInvalidItem,
        GenericError,
        EquipItemNeedsReload,
        QuickThrowItemNotFound,
    };
}

