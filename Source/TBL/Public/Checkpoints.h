#pragma once
#include "CoreMinimal.h"
#include "AnalyticsEvent_Client.h"
#include "CheckedProcess.h"
#include "Checkpoints.generated.h"

USTRUCT(BlueprintType)
struct FCheckpoints : public FAnalyticsEvent_Client {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckedProcess PreLoadGameMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckedProcess PlayGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckedProcess NormalExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoginAttempt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoginSucceeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoginError;
    
    TBL_API FCheckpoints();
};

