#pragma once
#include "CoreMinimal.h"
#include "WeaponAbilityGrant.generated.h"

class AInventoryItem;

USTRUCT(BlueprintType)
struct FWeaponAbilityGrant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventoryItem* InventoryItem;
    
    TBL_API FWeaponAbilityGrant();
};

