#pragma once
#include "CoreMinimal.h"
#include "SpawnWave.h"
#include "ForcedRespawnSpawnWave.generated.h"

class AController;

UCLASS(Blueprintable)
class AForcedRespawnSpawnWave : public ASpawnWave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* RespawningController;
    
public:
    AForcedRespawnSpawnWave();
protected:
    UFUNCTION(BlueprintCallable)
    void ForceSpawnController(AController* Controller);
    
};

