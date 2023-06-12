#pragma once
#include "CoreMinimal.h"
#include "HorseMovementAction.h"
#include "HorseMovementAction_StrafeTurn.generated.h"

USTRUCT(BlueprintType)
struct FHorseMovementAction_StrafeTurn : public FHorseMovementAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    TBL_API FHorseMovementAction_StrafeTurn();
};

