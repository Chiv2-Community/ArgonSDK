#pragma once
#include "CoreMinimal.h"
#include "VirtualGoodReward.h"
#include "LevelStats.generated.h"

USTRUCT(BlueprintType)
struct FLevelStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVirtualGoodReward> VirtualGoodRewards;
    
    TBL_API FLevelStats();
};

