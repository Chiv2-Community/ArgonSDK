#pragma once
#include "CoreMinimal.h"
#include "SpawnScoreData.generated.h"

USTRUCT(BlueprintType)
struct FSpawnScoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Score;
    
    TBL_API FSpawnScoreData();
};

