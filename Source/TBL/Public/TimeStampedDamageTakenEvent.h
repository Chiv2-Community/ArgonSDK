#pragma once
#include "CoreMinimal.h"
#include "DamageTakenEvent.h"
#include "TimeStampedDamageTakenEvent.generated.h"

USTRUCT(BlueprintType)
struct FTimeStampedDamageTakenEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDamageTakenEvent DamageTakenEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeRecorded;
    
    TBL_API FTimeStampedDamageTakenEvent();
};

