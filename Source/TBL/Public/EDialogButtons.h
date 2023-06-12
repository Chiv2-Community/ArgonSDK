#pragma once
#include "CoreMinimal.h"
#include "EDialogButtons.generated.h"

UENUM(BlueprintType)
enum class EDialogButtons : uint8 {
    None,
    Ok,
    Cancel,
    Yes = 0x4,
    No = 0x8,
    Exit = 0x16,
};

