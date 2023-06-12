#pragma once
#include "CoreMinimal.h"
#include "SpawnQueuer.h"
#include "NewSpawnSystemQueuer.generated.h"

class AAIController;
class AController;
class ASpawnWave;

UCLASS(Blueprintable)
class UNewSpawnSystemQueuer : public USpawnQueuer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASpawnWave* PlayFromHereWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AController*> PlayedFromHere;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAIController*> BotsWaitingToSpawn;
    
public:
    UNewSpawnSystemQueuer();
};

