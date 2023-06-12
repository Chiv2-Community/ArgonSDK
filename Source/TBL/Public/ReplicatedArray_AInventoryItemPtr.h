#pragma once
#include "CoreMinimal.h"
#include "ReplicatedArray_AInventoryItemPtr.generated.h"

class AInventoryItem;

USTRUCT(BlueprintType)
struct FReplicatedArray_AInventoryItemPtr {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AInventoryItem*> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_AInventoryItemPtr();
};

