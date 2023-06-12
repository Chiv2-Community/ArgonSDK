#pragma once
#include "CoreMinimal.h"
#include "StaminaModifiers.generated.h"

USTRUCT(BlueprintType)
struct FStaminaModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeldParryDrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnRiposte;
    
    TBL_API FStaminaModifiers();
};

