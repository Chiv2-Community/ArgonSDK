#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "IsCounter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UIsCounter : public UCondition {
    GENERATED_BODY()
public:
    UIsCounter();
};

