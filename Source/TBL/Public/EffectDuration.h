#pragma once
#include "CoreMinimal.h"
#include "EDuration.h"
#include "EStateBasedEffectEnd.h"
#include "EffectDuration.generated.h"

USTRUCT(BlueprintType)
struct FEffectDuration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDuration::Type> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Ticks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateBasedEffectEnd StateBasedEffectEnd;
    
    TBL_API FEffectDuration();
};

