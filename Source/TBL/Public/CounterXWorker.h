#pragma once
#include "CoreMinimal.h"
#include "EDefenderBlockedPolicy.h"
#include "TBLAchievementWorker.h"
#include "CounterXWorker.generated.h"

class ATBLCharacter;
class ATBLPlayerController;

UCLASS(Blueprintable)
class UCounterXWorker : public UTBLAchievementWorker {
    GENERATED_BODY()
public:
    UCounterXWorker();
protected:
    UFUNCTION(BlueprintCallable)
    void OnCounteredAttack(const EDefenderBlockedPolicy BlockPolicy, ATBLCharacter* AttackingCharacter, ATBLPlayerController* Controller);
    
};

