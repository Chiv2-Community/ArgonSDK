#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_InputAxis.h"
#include "I_PathLength.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UI_PathLength : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PullTowardsQuerierDistance;
    
    UI_PathLength();
};

