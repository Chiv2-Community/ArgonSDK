#pragma once
#include "CoreMinimal.h"
#include "AnalyticsEvent.h"
#include "AnalyticsEvent_Client.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsEvent_Client : public FAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NetId;
    
    ANALYTICSCORE_API FAnalyticsEvent_Client();
};

