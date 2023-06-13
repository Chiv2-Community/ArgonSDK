#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FastSharedProperties_InventoryItem.generated.h"

USTRUCT(BlueprintType)
struct FFastSharedProperties_InventoryItem {
    GENERATED_BODY()
public:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPROPERTY()
    FRepMovement ReplicatedMovement;
    
    TBL_API FFastSharedProperties_InventoryItem();
};

