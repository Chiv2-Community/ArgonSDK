#pragma once
#include "CoreMinimal.h"
#include "HorseMovementScale.generated.h"

USTRUCT(BlueprintType)
struct FHorseMovementScale {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    TBL_API FHorseMovementScale();
};

