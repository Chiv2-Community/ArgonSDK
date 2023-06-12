#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_InputAxis.h"
#include "I_TimeUntilIDieFromBeingOutOfCombat.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UI_TimeUntilIDieFromBeingOutOfCombat : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UI_TimeUntilIDieFromBeingOutOfCombat();
};

