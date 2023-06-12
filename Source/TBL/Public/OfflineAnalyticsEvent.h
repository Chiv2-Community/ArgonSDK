#pragma once
#include "CoreMinimal.h"
#include "OfflineAnalyticsAttribute.h"
#include "OfflineAnalyticsEvent.generated.h"

USTRUCT(BlueprintType)
struct FOfflineAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOfflineAnalyticsAttribute> Attributes;
    
    TBL_API FOfflineAnalyticsEvent();
};

