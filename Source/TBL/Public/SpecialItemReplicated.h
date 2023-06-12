#pragma once
#include "CoreMinimal.h"
#include "ESpecialItemChargeType.h"
#include "SpecialItemReplicated.generated.h"

USTRUCT(BlueprintType)
struct FSpecialItemReplicated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Charge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialItemChargeType ChargeType;
    
    TBL_API FSpecialItemReplicated();
};

