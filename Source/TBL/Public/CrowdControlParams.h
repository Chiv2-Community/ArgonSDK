#pragma once
#include "CoreMinimal.h"
#include "ECrowdControlDirection.h"
#include "ECrowdControlVariant.h"
#include "Templates/SubclassOf.h"
#include "CrowdControlParams.generated.h"

class AInventoryItem;

USTRUCT(BlueprintType)
struct FCrowdControlParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrowdControlVariant Variant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrowdControlDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> InventoryItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityName;
    
    TBL_API FCrowdControlParams();
};

