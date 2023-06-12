#pragma once
#include "CoreMinimal.h"
#include "MovementActionInitiationParams.h"
#include "SyncStartMovementParams.generated.h"

class UMovementInstance;

USTRUCT(BlueprintType)
struct FSyncStartMovementParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementActionInitiationParams InitParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovementInstance* NewMovement;
    
    TBL_API FSyncStartMovementParams();
};

