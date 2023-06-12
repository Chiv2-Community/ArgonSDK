#pragma once
#include "CoreMinimal.h"
#include "HorseAttackType.generated.h"

class UAttackType;

USTRUCT(BlueprintType)
struct FHorseAttackType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttackType* AttackType;
    
    TBL_API FHorseAttackType();
};

