#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "IsActiveRiposte.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UIsActiveRiposte : public UCondition {
    GENERATED_BODY()
public:
    UIsActiveRiposte();
};

