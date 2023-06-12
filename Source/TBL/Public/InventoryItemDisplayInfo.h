#pragma once
#include "CoreMinimal.h"
#include "EOnlineStat.h"
#include "InventoryItemDisplayInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FInventoryItemDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* WeaponIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOnlineStat WeaponStat;
    
    TBL_API FInventoryItemDisplayInfo();
};

