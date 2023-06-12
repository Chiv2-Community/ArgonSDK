#pragma once
#include "CoreMinimal.h"
#include "DamageTakenEvent.h"
#include "TBLAchievementWorker.h"
#include "BaseKillWorker.generated.h"

class ATBLPlayerController;

UCLASS(Abstract, Blueprintable)
class UBaseKillWorker : public UTBLAchievementWorker {
    GENERATED_BODY()
public:
    UBaseKillWorker();
private:
    UFUNCTION(BlueprintCallable)
    void OnCausedDamageInternal(const FDamageTakenEvent& DamageEvent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCausedDamage(const FDamageTakenEvent& DamageEvent, ATBLPlayerController* Controller);
    
};

