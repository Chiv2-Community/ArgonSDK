#pragma once
#include "CoreMinimal.h"
#include "AKAudioStartStopStruct.h"
#include "LastStageScoreMusicConfig.h"
#include "StageEndingConfig.generated.h"

USTRUCT(BlueprintType)
struct FStageEndingConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAKAudioStartStopStruct> Music;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLastStageScoreMusicConfig LastStageScoreMusicConfig;
    
    TBL_API FStageEndingConfig();
};

