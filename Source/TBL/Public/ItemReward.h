#pragma once
#include "CoreMinimal.h"
#include "ItemReference.h"
#include "ProgressionReward.h"
#include "ItemReward.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UItemReward : public UProgressionReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemReference> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UItemReward();
};

