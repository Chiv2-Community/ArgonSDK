#pragma once
#include "CoreMinimal.h"
#include "ClientAbilityInitiationParams.generated.h"

class UAbilitySpec;

USTRUCT(BlueprintType)
struct FClientAbilityInitiationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySpec* AbilitySpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InvocationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackID;
    
    TBL_API FClientAbilityInitiationParams();
};

