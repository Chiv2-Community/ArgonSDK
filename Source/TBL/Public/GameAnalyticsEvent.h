#pragma once
#include "CoreMinimal.h"
#include "AnalyticsEvent.h"
#include "GameAnalyticsEvent.generated.h"

USTRUCT(BlueprintType)
struct FGameAnalyticsEvent : public FAnalyticsEvent {
    GENERATED_BODY()
public:
    TBL_API FGameAnalyticsEvent();
};

