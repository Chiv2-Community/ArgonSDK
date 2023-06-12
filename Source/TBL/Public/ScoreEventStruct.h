#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EScoreGroup.h"
#include "ScoreEventStruct.generated.h"

class ATBLPlayerState;

USTRUCT(BlueprintType)
struct FScoreEventStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ScoreEventText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreEventAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ScoreEventTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLPlayerState* Killed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScoreGroup ScoreGroup;
    
    TBL_API FScoreEventStruct();
};

