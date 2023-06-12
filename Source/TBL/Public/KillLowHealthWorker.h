#pragma once
#include "CoreMinimal.h"
#include "BaseKillWorker.h"
#include "EStat.h"
#include "StatEntry.h"
#include "KillLowHealthWorker.generated.h"

class AActor;
class APawn;
class ATBLPlayerController;

UCLASS(Blueprintable)
class UKillLowHealthWorker : public UBaseKillWorker {
    GENERATED_BODY()
public:
    UKillLowHealthWorker();
    UFUNCTION(BlueprintCallable)
    void OnStatChanged(AActor* Actor, EStat StatType, const FStatEntry& Stat, float DeltaValue);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnPossessed(APawn* Pawn, ATBLPlayerController* Controller);
    
};

