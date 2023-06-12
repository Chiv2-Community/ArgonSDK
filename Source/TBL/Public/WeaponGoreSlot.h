#pragma once
#include "CoreMinimal.h"
#include "DataTableRowSelection.h"
#include "EHeadGoreAction.h"
#include "EHelmetRemovalPolicy.h"
#include "ELimbGoreAction.h"
#include "WeaponGoreSlot.generated.h"

USTRUCT(BlueprintType)
struct FWeaponGoreSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowSelection Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeadGoreAction HeadGoreAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELimbGoreAction LimbGoreAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHelmetRemovalPolicy HelmetRemovalPolicy;
    
    TBL_API FWeaponGoreSlot();
};

