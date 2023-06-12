#pragma once
#include "CoreMinimal.h"
#include "MovementModifier.generated.h"

USTRUCT(BlueprintType)
struct FMovementModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentModifier;
    
    TBL_API FMovementModifier();
};

