#pragma once
#include "CoreMinimal.h"
#include "EDefenderBlockedPolicy.h"
#include "TBLAchievementWorker.h"
#include "BlockProjectileWorker.generated.h"

class ATBLCharacter;
class ATBLPlayerController;

UCLASS(Blueprintable)
class UBlockProjectileWorker : public UTBLAchievementWorker {
    GENERATED_BODY()
public:
    UBlockProjectileWorker();
protected:
    UFUNCTION(BlueprintCallable)
    void OnBlockedAttack(const EDefenderBlockedPolicy BlockPolicy, ATBLCharacter* AttackingCharacter, const bool bProjectileAttack, ATBLPlayerController* Controller);
    
};

