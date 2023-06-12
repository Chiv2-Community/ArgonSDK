#pragma once
#include "CoreMinimal.h"
#include "HorseMovementAction.h"
#include "HorseMovementAction_Boost.generated.h"

USTRUCT(BlueprintType)
struct FHorseMovementAction_Boost : public FHorseMovementAction {
    GENERATED_BODY()
public:
    TBL_API FHorseMovementAction_Boost();
};

