#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "IsCounterSuccess.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UIsCounterSuccess : public UCondition {
    GENERATED_BODY()
public:
    UIsCounterSuccess();
};

