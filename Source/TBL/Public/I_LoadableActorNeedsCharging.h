#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_InputAxis.h"
#include "I_LoadableActorNeedsCharging.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UI_LoadableActorNeedsCharging : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UI_LoadableActorNeedsCharging();
};

