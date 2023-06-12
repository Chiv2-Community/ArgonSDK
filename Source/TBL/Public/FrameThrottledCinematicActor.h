#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EFrameThrottleBranch.h"
#include "FrameThrottledCinematicActor.generated.h"

UCLASS(Blueprintable)
class AFrameThrottledCinematicActor : public AActor {
    GENERATED_BODY()
public:
    AFrameThrottledCinematicActor();
private:
    UFUNCTION(BlueprintCallable)
    static void AttemptThrottledCall(EFrameThrottleBranch& Branches);
    
};

