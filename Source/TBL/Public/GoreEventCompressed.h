#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EHeadGoreAction.h"
#include "ELimbGoreAction.h"
#include "GoreEventCompressed.generated.h"

USTRUCT(BlueprintType)
struct FGoreEventCompressed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BoneNameIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeadGoreAction HeadGoreAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELimbGoreAction LimbGoreAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 Impulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSpawnedItem: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bKillingBlow: 1;
    
    TBL_API FGoreEventCompressed();
};

