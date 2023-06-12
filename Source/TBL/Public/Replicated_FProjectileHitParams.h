#pragma once
#include "CoreMinimal.h"
#include "ProjectileHitParams.h"
#include "Replicated_FProjectileHitParams.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FProjectileHitParams {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileHitParams Value;
    
public:
    TBL_API FReplicated_FProjectileHitParams();
};

