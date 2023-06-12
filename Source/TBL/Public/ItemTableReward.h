#pragma once
#include "CoreMinimal.h"
#include "ProgressionReward.h"
#include "ItemTableReward.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UItemTableReward : public UProgressionReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarketable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTradeable;
    
    UItemTableReward();
};

