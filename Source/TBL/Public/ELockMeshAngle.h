#pragma once
#include "CoreMinimal.h"
#include "ELockMeshAngle.generated.h"

UENUM(BlueprintType)
enum class ELockMeshAngle : uint8 {
    UseCharacterRotation,
    UseHorseRotation,
};

