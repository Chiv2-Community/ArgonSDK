#pragma once
#include "CoreMinimal.h"
#include "RoundResult.generated.h"

USTRUCT(BlueprintType)
struct FRoundResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoundScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoundTiebreakScore;
    
    TBL_API FRoundResult();
};

