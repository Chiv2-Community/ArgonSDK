#pragma once
#include "CoreMinimal.h"
#include "HorseMovementAction.h"
#include "HorseMovementAction_Turn.generated.h"

USTRUCT(BlueprintType)
struct FHorseMovementAction_Turn : public FHorseMovementAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    TBL_API FHorseMovementAction_Turn();
};

