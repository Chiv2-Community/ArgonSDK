#pragma once
#include "CoreMinimal.h"
#include "InventoryItemSoundPair.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemSoundPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwitchKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AKSwitchState;
    
    TBL_API FInventoryItemSoundPair();
};

