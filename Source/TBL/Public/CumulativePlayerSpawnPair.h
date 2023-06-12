#pragma once
#include "CoreMinimal.h"
#include "CumulativePlayerSpawnPair.generated.h"

class AController;

USTRUCT(BlueprintType)
struct FCumulativePlayerSpawnPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentRespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnWorldTime;
    
    TBL_API FCumulativePlayerSpawnPair();
};

