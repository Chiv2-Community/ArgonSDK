#pragma once
#include "CoreMinimal.h"
#include "PlayerCaptureData.generated.h"

class ATBLCharacter;

USTRUCT(BlueprintType)
struct FPlayerCaptureData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
    TBL_API FPlayerCaptureData();
};

