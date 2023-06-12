#pragma once
#include "CoreMinimal.h"
#include "ESyncMovementType.generated.h"

UENUM(BlueprintType)
enum class ESyncMovementType : uint8 {
    Invalid,
    StartMovement,
    StartForcedAutorun,
    SetAutorunMovementMode,
    StopForcedAutorun,
    CinematicRestrictControl,
    CinematicAllowControl,
    Downed,
    Revive,
    PlaySpawnAnimation,
    InitiateAbility,
    HitWorld,
    TrapEvent,
    StartAttack,
    StartHeavyAttack,
    StartFire,
    CancelAttack,
    ChargeStab,
    ReleaseStab,
    GetUp,
    ManualReload,
    DisableAttackRootMotion,
    StartSpawnBonus,
    MountLadder,
    PlayLadderAnimation,
    EndLadderMovement,
    HorseToHorseBump,
    HorseToWorldBump,
    MaintainImpactSpeed,
};

