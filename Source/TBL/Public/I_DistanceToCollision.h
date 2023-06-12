#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_InputAxis.h"
#include "I_DistanceToCollision.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UI_DistanceToCollision : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UI_DistanceToCollision();
};

