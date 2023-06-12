#pragma once
#include "CoreMinimal.h"
#include "HitWorldParams.h"
#include "ServerHitWorldParams.generated.h"

USTRUCT(BlueprintType)
struct FServerHitWorldParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitWorldParams HitWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientTimeStamp;
    
    TBL_API FServerHitWorldParams();
};

