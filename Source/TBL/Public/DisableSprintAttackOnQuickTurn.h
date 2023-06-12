#pragma once
#include "CoreMinimal.h"
#include "DisableSprintAttackOnQuickTurn.generated.h"

USTRUCT(BlueprintType)
struct FDisableSprintAttackOnQuickTurn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    TBL_API FDisableSprintAttackOnQuickTurn();
};

