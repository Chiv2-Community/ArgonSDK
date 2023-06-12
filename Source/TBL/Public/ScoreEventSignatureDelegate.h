#pragma once
#include "CoreMinimal.h"
#include "ScoreEventStruct.h"
#include "ScoreEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FScoreEventSignature, FScoreEventStruct, ScoreEvent);

