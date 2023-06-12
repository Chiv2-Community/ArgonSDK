#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VirtualGoodReward.h"
#include "XpProgressionRow.generated.h"

USTRUCT(BlueprintType)
struct FXpProgressionRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Xp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVirtualGoodReward> VirtualGoodRewards;
    
    TBL_API FXpProgressionRow();
};

