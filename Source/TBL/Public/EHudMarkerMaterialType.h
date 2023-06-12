#pragma once
#include "CoreMinimal.h"
#include "EHudMarkerMaterialType.generated.h"

UENUM(BlueprintType)
namespace EHudMarkerMaterialType {
    enum Type {
        Primary,
        Secondary,
        FlagPlantZone,
        MAX,
    };
}

