#pragma once
#include "CoreMinimal.h"
#include "EOnlineItemUnlockType.h"
#include "ItemReference.h"
#include "ProgressionReward.h"
#include "ItemTableRewardByAppId.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UItemTableRewardByAppId : public UProgressionReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemReference> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarketable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTradeable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOnlineItemUnlockType::Type> ItemUnlockType;
    
    UItemTableRewardByAppId();
};

