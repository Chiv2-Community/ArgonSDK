#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_InputAxis.h"
#include "I_TargetIsHuman.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UI_TargetIsHuman : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UI_TargetIsHuman();
};

