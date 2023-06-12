#pragma once
#include "CoreMinimal.h"
#include "EHeadGoreAction.generated.h"

UENUM(BlueprintType)
enum class EHeadGoreAction : uint8 {
    DoNothing,
    ExplodeHead,
    Decapitate,
};

