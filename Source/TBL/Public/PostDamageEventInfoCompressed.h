#pragma once
#include "CoreMinimal.h"
#include "ECrowdControlVariant.h"
#include "PostDamageEventInfoCompressed.generated.h"

USTRUCT(BlueprintType)
struct FPostDamageEventInfoCompressed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DamageTakerCombatStateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrowdControlVariant CrowdControlVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNewCombatState: 1;
    
    TBL_API FPostDamageEventInfoCompressed();
};

