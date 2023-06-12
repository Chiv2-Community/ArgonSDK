#pragma once
#include "CoreMinimal.h"
#include "ESlateInputMode.generated.h"

UENUM(BlueprintType)
enum class ESlateInputMode : uint8 {
    GameOnly,
    GameAndUI,
    UIOnly,
    Unknown,
};

