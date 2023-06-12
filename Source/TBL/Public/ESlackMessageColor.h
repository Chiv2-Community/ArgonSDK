#pragma once
#include "CoreMinimal.h"
#include "ESlackMessageColor.generated.h"

UENUM(BlueprintType)
namespace ESlackMessageColor {
    enum Type {
        None,
        Good,
        Warning,
        Danger,
    };
}

