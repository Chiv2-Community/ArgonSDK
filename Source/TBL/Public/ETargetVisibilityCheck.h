#pragma once
#include "CoreMinimal.h"
#include "ETargetVisibilityCheck.generated.h"

UENUM(BlueprintType)
namespace ETargetVisibilityCheck {
    enum Type {
        NoVisibilityCheck,
        VisibleFromInitiator,
        VisibleFromShapeLocation,
    };
}

