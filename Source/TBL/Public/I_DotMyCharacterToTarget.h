#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_InputAxis.h"
#include "I_DotMyCharacterToTarget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UI_DotMyCharacterToTarget : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UI_DotMyCharacterToTarget();
};

