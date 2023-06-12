#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TBLGameInstancePerformanceCaptureActor.generated.h"

UCLASS(Blueprintable)
class ATBLGameInstancePerformanceCaptureActor : public AActor {
    GENERATED_BODY()
public:
    ATBLGameInstancePerformanceCaptureActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Run();
    
};

