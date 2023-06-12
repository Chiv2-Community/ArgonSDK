#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ScoreEventStruct.h"
#include "PlayerScoreUiInterface.generated.h"

UINTERFACE(Blueprintable)
class UPlayerScoreUiInterface : public UInterface {
    GENERATED_BODY()
};

class IPlayerScoreUiInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemoved();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddSubScoreEvent(FScoreEventStruct ScoreEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddScore(int32 Score);
    
};

