#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "TBLFrontendLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class TBL_API ATBLFrontendLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    ATBLFrontendLevelScriptActor();
private:
    UFUNCTION(BlueprintCallable)
    void FireLevelEvent(FName EventName);
    
    UFUNCTION(BlueprintCallable)
    void CreateLevelEvent(FName EventName);
    
};

