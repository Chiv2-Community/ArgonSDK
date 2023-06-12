#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "CanDropItem.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UCanDropItem : public UCondition {
    GENERATED_BODY()
public:
    UCanDropItem();
};

