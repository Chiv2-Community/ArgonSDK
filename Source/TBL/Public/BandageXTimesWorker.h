#pragma once
#include "CoreMinimal.h"
#include "TBLAchievementWorker.h"
#include "BandageXTimesWorker.generated.h"

class AInventoryItem;
class ATBLPlayerController;

UCLASS(Blueprintable)
class UBandageXTimesWorker : public UTBLAchievementWorker {
    GENERATED_BODY()
public:
    UBandageXTimesWorker();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerUsedItem(AInventoryItem* Item, ATBLPlayerController* Controller);
    
};

