#pragma once
#include "CoreMinimal.h"
#include "EMovementFrameOfReference.generated.h"

UENUM(BlueprintType)
namespace EMovementFrameOfReference {
    enum Type {
        InitiatorToTarget,
        CharacterRotation,
        AttackDirectionHit,
        AttackDirectionParry,
        Default,
    };
}

