#pragma once
#include "CoreMinimal.h"
#include "GameAnalyticsEvent.h"
#include "PostMatchFeedback.generated.h"

USTRUCT(BlueprintType)
struct FPostMatchFeedback : public FGameAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerNetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchRating;
    
    TBL_API FPostMatchFeedback();
};

