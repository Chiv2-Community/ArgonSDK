#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "IsAttackType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UIsAttackType : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackTypeName;
    
    UIsAttackType();
};

