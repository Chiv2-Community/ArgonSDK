#pragma once
#include "CoreMinimal.h"
#include "CombatStateMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FCombatStateMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CombatState;
    
    TBL_API FCombatStateMontage();
};

