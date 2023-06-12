#pragma once
#include "CoreMinimal.h"
#include "AutomationSequenceEvent.generated.h"

USTRUCT(BlueprintType)
struct FAutomationSequenceEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Something;
    
    TBL_API FAutomationSequenceEvent();
};

