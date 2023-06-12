#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "IsRiposte.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UIsRiposte : public UCondition {
    GENERATED_BODY()
public:
    UIsRiposte();
};

