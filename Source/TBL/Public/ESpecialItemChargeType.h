#pragma once
#include "CoreMinimal.h"
#include "ESpecialItemChargeType.generated.h"

UENUM(BlueprintType)
enum class ESpecialItemChargeType : uint8 {
    Time,
    Kill,
    Death,
    TeamDamage,
    HeadHunter,
    Charger,
    Medic,
    Unbreakable,
    Murderer,
    Respawn,
    UseCharge,
    Cleaver,
    Cheat,
};

