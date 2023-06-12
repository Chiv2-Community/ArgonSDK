#pragma once
#include "CoreMinimal.h"
#include "PhysMatFallingDamageMultiplier.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FPhysMatFallingDamageMultiplier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageMultiplier;
    
    TBL_API FPhysMatFallingDamageMultiplier();
};

