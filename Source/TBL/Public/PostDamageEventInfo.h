#pragma once
#include "CoreMinimal.h"
#include "ECrowdControlVariant.h"
#include "PostDamageEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FPostDamageEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName DamageTakerCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECrowdControlVariant CrowdControlVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNewCombatState;
    
    TBL_API FPostDamageEventInfo();
};

