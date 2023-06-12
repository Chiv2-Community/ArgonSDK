#pragma once
#include "CoreMinimal.h"
#include "TBLAchievementWorker.h"
#include "BeRevivedWorker.generated.h"

class APawn;
class ATBLPlayerController;

UCLASS(Blueprintable)
class UBeRevivedWorker : public UTBLAchievementWorker {
    GENERATED_BODY()
public:
    UBeRevivedWorker();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerRevived(APawn* Pawn, ATBLPlayerController* Controller);
    
};

