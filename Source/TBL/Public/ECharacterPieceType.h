#pragma once
#include "CoreMinimal.h"
#include "ECharacterPieceType.generated.h"

UENUM(BlueprintType)
enum class ECharacterPieceType : uint8 {
    Torso,
    Head,
    Helm,
    Legs,
    Gore,
    Hair,
    Beard,
    Max,
    Invalid,
};

