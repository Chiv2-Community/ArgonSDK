#pragma once
#include "CoreMinimal.h"
#include "BaseKillWorker.h"
#include "DeathDamageTakenEvent.h"
#include "KillXWithDamage.generated.h"

class ATBLPlayerController;

UCLASS(Blueprintable)
class UKillXWithDamage : public UBaseKillWorker {
    GENERATED_BODY()
public:
    UKillXWithDamage();
protected:
    UFUNCTION(BlueprintCallable)
    void PlayerCausedFallDamage(const FDeathDamageTakenEvent& DeathEvent, ATBLPlayerController* Controller);
    
};

