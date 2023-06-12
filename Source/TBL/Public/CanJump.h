#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "CanJump.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UCanJump : public UCondition {
    GENERATED_BODY()
public:
    UCanJump();
};

