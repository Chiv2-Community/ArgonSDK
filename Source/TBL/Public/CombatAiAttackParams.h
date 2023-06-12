#pragma once
#include "CoreMinimal.h"
#include "EAiAttackMoveMode.h"
#include "EAiComboMode.h"
#include "CombatAiAttackParams.generated.h"

USTRUCT(BlueprintType)
struct FCombatAiAttackParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AllowedAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAiAttackMoveMode AttackMoveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAiComboMode ComboMode;
    
    TBL_API FCombatAiAttackParams();
};

