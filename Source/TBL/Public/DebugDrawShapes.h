#pragma once
#include "CoreMinimal.h"
#include "MovementDebugBox.h"
#include "MovementDebugCapsule.h"
#include "MovementDebugLine.h"
#include "MovementDebugSphere.h"
#include "DebugDrawShapes.generated.h"

USTRUCT(BlueprintType)
struct FDebugDrawShapes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementDebugCapsule> DrawCapsules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementDebugSphere> DrawSpheres;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementDebugBox> DrawBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementDebugLine> DrawLines;
    
    TBL_API FDebugDrawShapes();
};

