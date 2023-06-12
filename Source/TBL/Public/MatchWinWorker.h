#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "TBLAchievementWorker.h"
#include "MatchWinWorker.generated.h"

UCLASS(Blueprintable)
class UMatchWinWorker : public UTBLAchievementWorker {
    GENERATED_BODY()
public:
    UMatchWinWorker();
    UFUNCTION(BlueprintCallable)
    void OnVictory(EFaction InVictor);
    
};

