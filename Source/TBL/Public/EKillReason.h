#pragma once
#include "CoreMinimal.h"
#include "EKillReason.generated.h"

UENUM(BlueprintType)
enum class EKillReason : uint8 {
    Damage,
    FallDamage,
    Suicide,
    TapOut,
    OutOfCombat,
    FellOutOfWorld,
    Disconnect,
    ForwardSpawn,
    SwitchedTeams,
    Spectator,
};

