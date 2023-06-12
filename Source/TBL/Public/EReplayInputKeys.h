#pragma once
#include "CoreMinimal.h"
#include "EReplayInputKeys.generated.h"

UENUM(BlueprintType)
namespace EReplayInputKeys {
    enum Type {
        AltAttack,
        Slash,
        Overhead,
        Stab,
        Parry,
        AbilityQ,
        AbilityE,
        AbilityF,
        Jump,
        BattleCry,
        Crouch,
        CancelAttack,
        CancelIntoParry,
        HorseMoveForward,
        HorseMoveBackward,
        HorseMoveLeft,
        HorseMoveRight,
        HorseControlMode,
        HorseBoost,
    };
}

