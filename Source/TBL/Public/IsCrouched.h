#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "IsCrouched.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UIsCrouched : public UCondition {
    GENERATED_BODY()
public:
    UIsCrouched();
};

