#pragma once
#include "CoreMinimal.h"
#include "GoreHeadParams.generated.h"

class ATBLPlayerState;

USTRUCT(BlueprintType)
struct FGoreHeadParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DeadCharacterId;
    
    TBL_API FGoreHeadParams();
};

