#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "IsAlive.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UIsAlive : public UCondition {
    GENERATED_BODY()
public:
    UIsAlive();
};

