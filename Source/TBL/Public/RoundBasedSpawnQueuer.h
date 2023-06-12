#pragma once
#include "CoreMinimal.h"
#include "SpawnQueuer.h"
#include "RoundBasedSpawnQueuer.generated.h"

class AController;

UCLASS(Blueprintable)
class URoundBasedSpawnQueuer : public USpawnQueuer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AController*> PlayersWaitingToSpawn;
    
public:
    URoundBasedSpawnQueuer();
};

