#pragma once
#include "CoreMinimal.h"
#include "Replicated_AInventoryItem.generated.h"

class AInventoryItem;

USTRUCT(BlueprintType)
struct FReplicated_AInventoryItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventoryItem* Value;
    
public:
    TBL_API FReplicated_AInventoryItem();
};

