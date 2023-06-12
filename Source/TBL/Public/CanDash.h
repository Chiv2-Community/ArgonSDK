#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "CanDash.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UCanDash : public UCondition {
    GENERATED_BODY()
public:
    UCanDash();
};

