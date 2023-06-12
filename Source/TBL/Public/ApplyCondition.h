#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "EConditionType.h"
#include "ApplyCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UApplyCondition : public UAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionType ConditionType;
    
    UApplyCondition();
};

