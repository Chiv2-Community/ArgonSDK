#pragma once
#include "CoreMinimal.h"
#include "OfflineAnalyticsAttribute.generated.h"

USTRUCT(BlueprintType)
struct FOfflineAnalyticsAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    TBL_API FOfflineAnalyticsAttribute();
};

