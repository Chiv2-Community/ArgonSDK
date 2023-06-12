#pragma once
#include "CoreMinimal.h"
#include "InventoryItemPool.generated.h"

class AInventoryItem;

USTRUCT(BlueprintType)
struct FInventoryItemPool {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AInventoryItem*> InventoryItemPool;
    
public:
    TBL_API FInventoryItemPool();
};

