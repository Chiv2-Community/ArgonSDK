#pragma once
#include "CoreMinimal.h"
#include "NetAnalyticsEventAttribute.generated.h"

USTRUCT(BlueprintType)
struct FNetAnalyticsEventAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AttrName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AttrValue;
    
    ANALYTICSCORE_API FNetAnalyticsEventAttribute();
};

