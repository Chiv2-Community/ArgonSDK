#pragma once
#include "CoreMinimal.h"
#include "SyncSpawnAnimationParams.generated.h"

USTRUCT(BlueprintType)
struct FSyncSpawnAnimationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorYaw;
    
    TBL_API FSyncSpawnAnimationParams();
};

