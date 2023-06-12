#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "CanUseItem.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UCanUseItem : public UCondition {
    GENERATED_BODY()
public:
    UCanUseItem();
};

