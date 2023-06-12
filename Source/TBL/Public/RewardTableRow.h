#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemReference.h"
#include "RewardTableRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FRewardTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemReference Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Table;
    
    TBL_API FRewardTableRow();
};

