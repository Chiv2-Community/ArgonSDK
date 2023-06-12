#pragma once
#include "CoreMinimal.h"
#include "HorseMovementAction_Accelerate.h"
#include "HorseMovementAction_IncreaseGear.generated.h"

USTRUCT(BlueprintType)
struct FHorseMovementAction_IncreaseGear : public FHorseMovementAction_Accelerate {
    GENERATED_BODY()
public:
    TBL_API FHorseMovementAction_IncreaseGear();
};

