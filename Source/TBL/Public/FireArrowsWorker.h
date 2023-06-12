#pragma once
#include "CoreMinimal.h"
#include "TBLAchievementWorker.h"
#include "FireArrowsWorker.generated.h"

class AInventoryItem;
class UCombatState;

UCLASS(Blueprintable)
class UFireArrowsWorker : public UTBLAchievementWorker {
    GENERATED_BODY()
public:
    UFireArrowsWorker();
protected:
    UFUNCTION(BlueprintCallable)
    void OnCombatStateEnd(const FName& State, AInventoryItem* AttackingWeapon, UCombatState* InCombatState);
    
};

