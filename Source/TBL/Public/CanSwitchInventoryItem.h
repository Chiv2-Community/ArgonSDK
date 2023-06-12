#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "CanSwitchInventoryItem.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UCanSwitchInventoryItem : public UCondition {
    GENERATED_BODY()
public:
    UCanSwitchInventoryItem();
};

