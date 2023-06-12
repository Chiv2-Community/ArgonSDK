#pragma once
#include "CoreMinimal.h"
#include "PlayerStateArray.generated.h"

class ATBLPlayerState;

USTRUCT(BlueprintType)
struct FPlayerStateArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATBLPlayerState*> PlayerStates;
    
    TBL_API FPlayerStateArray();
};

