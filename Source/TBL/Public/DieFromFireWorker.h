#pragma once
#include "CoreMinimal.h"
#include "DamageTakenEvent.h"
#include "TBLAchievementWorker.h"
#include "DieFromFireWorker.generated.h"

class ATBLPlayerController;

UCLASS(Blueprintable)
class UDieFromFireWorker : public UTBLAchievementWorker {
    GENERATED_BODY()
public:
    UDieFromFireWorker();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTakenDamage(const FDamageTakenEvent& DamageEvent, ATBLPlayerController* Controller);
    
};

