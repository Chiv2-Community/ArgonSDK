#pragma once
#include "CoreMinimal.h"
#include "ECharacterClassType.generated.h"

UENUM(BlueprintType)
enum class ECharacterClassType : uint8 {
    Invalid,
    Archetype,
    Subclass,
    Special,
};

