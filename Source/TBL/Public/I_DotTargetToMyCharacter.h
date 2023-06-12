#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_InputAxis.h"
#include "I_DotTargetToMyCharacter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UI_DotTargetToMyCharacter : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UI_DotTargetToMyCharacter();
};

