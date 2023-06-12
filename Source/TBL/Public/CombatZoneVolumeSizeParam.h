#pragma once
#include "CoreMinimal.h"
#include "CombatZoneVolumeSizeParam.generated.h"

USTRUCT(BlueprintType)
struct FCombatZoneVolumeSizeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayersThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeThreshold;
    
    TBL_API FCombatZoneVolumeSizeParam();
};

