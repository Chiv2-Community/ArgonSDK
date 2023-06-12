#pragma once
#include "CoreMinimal.h"
#include "EAiAttackMoveMode.generated.h"

UENUM(BlueprintType)
enum class EAiAttackMoveMode : uint8 {
    CurrentLocation,
    IdealRange,
    FaceHug,
};

