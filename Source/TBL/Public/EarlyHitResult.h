#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EarlyHitResult.generated.h"

class ATBLCharacter;

USTRUCT(BlueprintType)
struct FEarlyHitResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal HitDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* AttackingCharacter;
    
    TBL_API FEarlyHitResult();
};

