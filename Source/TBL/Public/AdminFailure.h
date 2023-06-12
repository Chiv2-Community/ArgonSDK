#pragma once
#include "CoreMinimal.h"
#include "GameAnalyticsEvent.h"
#include "AdminFailure.generated.h"

USTRUCT(BlueprintType)
struct FAdminFailure : public FGameAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Function;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NetId;
    
    TBL_API FAdminFailure();
};

