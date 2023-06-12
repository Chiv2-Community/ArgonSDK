#pragma once
#include "CoreMinimal.h"
#include "ProjectileHUDConfig.generated.h"

USTRUCT(BlueprintType)
struct FProjectileHUDConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileControlRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseDragTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseDragLookUpRate;
    
    TBL_API FProjectileHUDConfig();
};

