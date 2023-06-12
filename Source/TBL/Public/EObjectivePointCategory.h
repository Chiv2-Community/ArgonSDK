#pragma once
#include "CoreMinimal.h"
#include "EObjectivePointCategory.generated.h"

UENUM(BlueprintType)
namespace EObjectivePointCategory {
    enum Type {
        None,
        Glyph,
        Ark,
        DjinnLamp,
        DemiGlyph,
        PlayerKill,
    };
}

