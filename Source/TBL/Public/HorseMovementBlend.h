#pragma once
#include "CoreMinimal.h"
#include "HorseMovementData.h"
#include "HorseMovementBlend.generated.h"

USTRUCT(BlueprintType)
struct FHorseMovementBlend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseMovementData BlendFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseMovementData BlendTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    TBL_API FHorseMovementBlend();
};

