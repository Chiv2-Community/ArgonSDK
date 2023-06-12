#pragma once
#include "CoreMinimal.h"
#include "EAiComboMode.generated.h"

UENUM(BlueprintType)
enum class EAiComboMode : uint8 {
    Always,
    Never,
    AdvantageOnly,
};

