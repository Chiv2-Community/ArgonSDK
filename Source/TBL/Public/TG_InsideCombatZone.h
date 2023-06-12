#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_TargetGenerator.h"
#include "TG_InsideCombatZone.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UTG_InsideCombatZone : public UUtilityAI_TargetGenerator {
    GENERATED_BODY()
public:
    UTG_InsideCombatZone();
};

