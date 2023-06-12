#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "IsMoving.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UIsMoving : public UCondition {
    GENERATED_BODY()
public:
    UIsMoving();
};

