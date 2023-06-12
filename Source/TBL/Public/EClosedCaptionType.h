#pragma once
#include "CoreMinimal.h"
#include "EClosedCaptionType.generated.h"

UENUM(BlueprintType)
enum class EClosedCaptionType : uint8 {
    None,
    ManualVoiceOver,
    AutoVoiceOver,
    MAX,
};

