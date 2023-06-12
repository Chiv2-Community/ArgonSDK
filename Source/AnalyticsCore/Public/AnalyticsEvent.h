#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnalyticsEvent.generated.h"

USTRUCT(BlueprintType)
struct ANALYTICSCORE_API FAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime EventTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuildCL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Random;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLogged;
    
    FAnalyticsEvent();
};

