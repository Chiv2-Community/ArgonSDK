#pragma once
#include "CoreMinimal.h"
#include "DataTableRowSelection.h"
#include "EInventoryItemCondition.h"
#include "InventoryItemAnimation.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowSelection AnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryItemCondition Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    TBL_API FInventoryItemAnimation();
};

