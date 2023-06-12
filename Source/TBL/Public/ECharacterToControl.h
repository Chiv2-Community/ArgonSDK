#pragma once
#include "CoreMinimal.h"
#include "ECharacterToControl.generated.h"

UENUM(BlueprintType)
enum class ECharacterToControl : uint8 {
    Initiator,
    Target,
    Both,
};

