#pragma once
#include "CoreMinimal.h"
#include "GameAnalyticsEvent.h"
#include "ObjectiveScore.generated.h"

USTRUCT(BlueprintType)
struct FObjectiveScore : public FGameAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Category;
    
    TBL_API FObjectiveScore();
};

