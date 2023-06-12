#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "AutomationSequenceEvent.h"
#include "AutomationLevelSequenceActor.generated.h"

UCLASS(Blueprintable, Config=Game)
class AAutomationLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    AAutomationLevelSequenceActor();
    UFUNCTION(BlueprintCallable)
    void OnStop();
    
    UFUNCTION(BlueprintCallable)
    void OnSequenceEvent(FAutomationSequenceEvent SequenceEvent);
    
};

