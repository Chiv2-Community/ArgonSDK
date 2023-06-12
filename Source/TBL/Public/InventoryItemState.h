#pragma once
#include "CoreMinimal.h"
#include "EAttachedState.h"
#include "EEquippedHand.h"
#include "EEquippedState.h"
#include "InventoryItemState.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquippedState EquippedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquippedHand EquippedHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    EAttachedState AttachedState;
    
    TBL_API FInventoryItemState();
};

