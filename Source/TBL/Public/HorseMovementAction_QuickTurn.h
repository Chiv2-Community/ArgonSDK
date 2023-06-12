#pragma once
#include "CoreMinimal.h"
#include "HorseMovementAction_Turn.h"
#include "HorseMovementAction_QuickTurn.generated.h"

USTRUCT(BlueprintType)
struct FHorseMovementAction_QuickTurn : public FHorseMovementAction_Turn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnRate;
    
    TBL_API FHorseMovementAction_QuickTurn();
};

