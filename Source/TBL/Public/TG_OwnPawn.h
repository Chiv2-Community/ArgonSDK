#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_TargetGenerator.h"
#include "TG_OwnPawn.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UTG_OwnPawn : public UUtilityAI_TargetGenerator {
    GENERATED_BODY()
public:
    UTG_OwnPawn();
};

