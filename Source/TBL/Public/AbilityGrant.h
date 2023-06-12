#pragma once
#include "CoreMinimal.h"
#include "AbilityGrant.generated.h"

class AInventoryItem;
class UAbilitySpec;

USTRUCT(BlueprintType)
struct FAbilityGrant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySpec* Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AInventoryItem* InventoryItem;
    
    TBL_API FAbilityGrant();
};

