#pragma once
#include "CoreMinimal.h"
#include "EDuplicationFlags.generated.h"

UENUM(BlueprintType)
namespace EDuplicationFlags {
    enum Type {
        None,
        DeepObjectArrays,
        Client,
    };
}

