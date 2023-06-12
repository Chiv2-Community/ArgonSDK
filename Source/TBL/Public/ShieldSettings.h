#pragma once
#include "CoreMinimal.h"
#include "ShieldSettings.generated.h"

USTRUCT(BlueprintType)
struct FShieldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanStickProjectilesToShield;
    
    TBL_API FShieldSettings();
};

