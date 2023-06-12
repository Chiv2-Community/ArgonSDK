#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "IsLookingDown.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UIsLookingDown : public UCondition {
    GENERATED_BODY()
public:
    UIsLookingDown();
};

