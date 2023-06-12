#pragma once
#include "CoreMinimal.h"
#include "PlayerSpawnPair.generated.h"

class AController;

USTRUCT(BlueprintType)
struct FPlayerSpawnPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnRequestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AssignedMinimumRespawnTime;
    
    TBL_API FPlayerSpawnPair();
};

