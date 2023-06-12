#pragma once
#include "CoreMinimal.h"
#include "MovementCorrectionData.generated.h"

USTRUCT(BlueprintType)
struct FMovementCorrectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NetAutonomousMovementCorrections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NetAutonomousMovementCorrectionBunches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NetSimulatedMovementCorrections;
    
    TBL_API FMovementCorrectionData();
};

