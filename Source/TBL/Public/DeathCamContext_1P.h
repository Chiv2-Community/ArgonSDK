#pragma once
#include "CoreMinimal.h"
#include "DeathCamContext_1P.generated.h"

class ATBLCharacter;

USTRUCT(BlueprintType)
struct FDeathCamContext_1P {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* KilledCharacter;
    
    TBL_API FDeathCamContext_1P();
};

