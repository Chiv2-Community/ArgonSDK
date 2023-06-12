#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "IsNot.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UIsNot : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCondition* Not;
    
    UIsNot();
};

