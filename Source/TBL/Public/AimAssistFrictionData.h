#pragma once
#include "CoreMinimal.h"
#include "AimAssistFrictionData.generated.h"

USTRUCT(BlueprintType)
struct FAimAssistFrictionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AssistFrictionPercentageMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AssistFrictionPercentageMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AssistFrictionFocusPercentageMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AssistFrictionFocusPercentageMax;
    
    TBL_API FAimAssistFrictionData();
};

