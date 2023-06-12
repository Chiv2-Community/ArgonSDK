#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "OrCondition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UOrCondition : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCondition*> Conditions;
    
    UOrCondition();
};

