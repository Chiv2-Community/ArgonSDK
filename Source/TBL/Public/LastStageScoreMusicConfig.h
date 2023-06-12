#pragma once
#include "CoreMinimal.h"
#include "LastStageScoreMusicConfig.generated.h"

USTRUCT(BlueprintType)
struct FLastStageScoreMusicConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastStageIdNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreRemaining;
    
    TBL_API FLastStageScoreMusicConfig();
};

