#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TimersArray.generated.h"

USTRUCT(BlueprintType)
struct FTimersArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimerHandle> Timers;
    
    TBL_API FTimersArray();
};

