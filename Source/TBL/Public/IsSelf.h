#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "IsSelf.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UIsSelf : public UCondition {
    GENERATED_BODY()
public:
    UIsSelf();
};

