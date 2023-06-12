#pragma once
#include "CoreMinimal.h"
#include "FollowerPushableComponentProperties.generated.h"

USTRUCT(BlueprintType)
struct FFollowerPushableComponentProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowAtDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagTimeFromLeader;
    
    TBL_API FFollowerPushableComponentProperties();
};

