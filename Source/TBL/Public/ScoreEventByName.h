#pragma once
#include "CoreMinimal.h"
#include "ScoreEventByName.generated.h"

USTRUCT(BlueprintType)
struct FScoreEventByName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScoreEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreValue;
    
    TBL_API FScoreEventByName();
};

