#pragma once
#include "CoreMinimal.h"
#include "KeyPressedParams.generated.h"

USTRUCT(BlueprintType)
struct FKeyPressedParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyBind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAltAttack;
    
    TBL_API FKeyPressedParams();
};

