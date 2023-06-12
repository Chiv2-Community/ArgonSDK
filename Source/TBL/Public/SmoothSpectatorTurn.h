#pragma once
#include "CoreMinimal.h"
#include "SmoothSpectatorTurn.generated.h"

USTRUCT(BlueprintType)
struct FSmoothSpectatorTurn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAccelerating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeDir;
    
    TBL_API FSmoothSpectatorTurn();
};

