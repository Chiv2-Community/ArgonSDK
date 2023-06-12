#pragma once
#include "CoreMinimal.h"
#include "DeathRecapAbilityEntry.generated.h"

class UAbilitySpec;

USTRUCT(BlueprintType)
struct FDeathRecapAbilityEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySpec* AbilitySpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageCaused;
    
    TBL_API FDeathRecapAbilityEntry();
};

