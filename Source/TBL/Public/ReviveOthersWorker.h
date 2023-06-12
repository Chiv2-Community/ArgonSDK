#pragma once
#include "CoreMinimal.h"
#include "TBLAchievementWorker.h"
#include "ReviveOthersWorker.generated.h"

class APawn;
class ATBLPlayerController;

UCLASS(Blueprintable)
class UReviveOthersWorker : public UTBLAchievementWorker {
    GENERATED_BODY()
public:
    UReviveOthersWorker();
protected:
    UFUNCTION(BlueprintCallable)
    void OnRevivedOtherPlayer(APawn* Pawn, ATBLPlayerController* Controller);
    
};

