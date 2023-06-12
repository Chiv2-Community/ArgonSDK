#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "IsEnemy.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UIsEnemy : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeadPawnsAreEnemy;
    
    UIsEnemy();
};

