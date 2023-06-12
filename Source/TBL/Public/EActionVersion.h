#pragma once
#include "CoreMinimal.h"
#include "EActionVersion.generated.h"

UENUM(BlueprintType)
namespace EActionVersion {
    enum Type {
        EffectSpecStructToUObject,
        SaveVersionAsInt,
        Latest,
    };
}

