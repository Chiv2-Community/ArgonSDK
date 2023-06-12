#pragma once
#include "CoreMinimal.h"
#include "DeathRecapAbilityEntry.h"
#include "EKillerType.h"
#include "DeathRecapEntry.generated.h"

class AInventoryItem;
class UObject;

USTRUCT(BlueprintType)
struct FDeathRecapEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Killer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EKillerType::Type> KillerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeathRecapAbilityEntry> AbilityEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventoryItem* KillingBlowItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWasDowned: 1;
    
    TBL_API FDeathRecapEntry();
};

