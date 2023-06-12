#pragma once
#include "CoreMinimal.h"
#include "EDialogTypes.generated.h"

UENUM(BlueprintType)
enum class EDialogTypes : uint8 {
    None,
    Ok,
    Cancel,
    OkCancel,
    YesNo = 0x12,
    Exit = 0x16,
};

