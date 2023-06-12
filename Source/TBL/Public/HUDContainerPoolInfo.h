#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HUDContainerPoolInfo.generated.h"

class UHUDContainerSubWidget;

USTRUCT(BlueprintType)
struct FHUDContainerPoolInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHUDContainerSubWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoolCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPrepopulated;
    
    TBL_API FHUDContainerPoolInfo();
};

