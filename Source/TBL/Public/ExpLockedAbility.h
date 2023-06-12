#pragma once
#include "CoreMinimal.h"
#include "ExpLockedAbility.generated.h"

class UAbilitySpec;

USTRUCT(BlueprintType)
struct FExpLockedAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySpec* AbilitySpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpRequiredForUnlock;
    
    TBL_API FExpLockedAbility();
};

