#pragma once
#include "CoreMinimal.h"
#include "AimPenaltyEvent.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FAimPenaltyEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Penalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    TBL_API FAimPenaltyEvent();
};

