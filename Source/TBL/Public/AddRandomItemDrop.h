#pragma once
#include "CoreMinimal.h"
#include "EOnlineItemUnlockType.h"
#include "ProgressionReward.h"
#include "AddRandomItemDrop.generated.h"

class URewardTable;

UCLASS(Blueprintable, EditInlineNew)
class UAddRandomItemDrop : public UProgressionReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URewardTable* DropTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOnlineItemUnlockType::Type> ItemUnlockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RewardTokenName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UAddRandomItemDrop();
};

