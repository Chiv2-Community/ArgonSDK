#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "TBLLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class ATBLLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    ATBLLevelScriptActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWarmupComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchStateChanged(FName NewState);
    
    UFUNCTION(BlueprintCallable)
    void GameStateSetup();
    
};

