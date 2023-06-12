#pragma once
#include "CoreMinimal.h"
#include "ETBLWorldType.generated.h"

UENUM(BlueprintType)
namespace ETBLWorldType {
    enum Type {
        None,
        Game,
        Editor,
        PIE,
        Preview,
        Inactive,
        Invalid,
    };
}

