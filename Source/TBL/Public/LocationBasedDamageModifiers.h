#pragma once
#include "CoreMinimal.h"
#include "LocationBasedDamageModifiers.generated.h"

USTRUCT(BlueprintType)
struct FLocationBasedDamageModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Headshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpperBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowerBody;
    
    TBL_API FLocationBasedDamageModifiers();
};

