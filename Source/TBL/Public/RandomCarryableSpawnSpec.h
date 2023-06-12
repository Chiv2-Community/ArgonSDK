#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RandomCarryableSpawnSpec.generated.h"

class AInventoryItem;

USTRUCT(BlueprintType)
struct FRandomCarryableSpawnSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> Carryable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AssignmentPercentage;
    
    TBL_API FRandomCarryableSpawnSpec();
};

