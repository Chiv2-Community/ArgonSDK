#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "EHorseMovementStateOp.h"
#include "IsHorseMovementState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UIsHorseMovementState : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHorseMovementStateOp Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MovementState;
    
    UIsHorseMovementState();
};

