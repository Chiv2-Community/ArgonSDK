#pragma once
#include "CoreMinimal.h"
#include "HitActorInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHitActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastHitTime;
    
    TBL_API FHitActorInfo();
};

