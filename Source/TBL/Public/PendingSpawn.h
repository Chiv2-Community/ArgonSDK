#pragma once
#include "CoreMinimal.h"
#include "PendingSpawn.generated.h"

class AController;
class ASpawnWave;
class ASpawner;
class USpawnQueuer;

USTRUCT(BlueprintType)
struct FPendingSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USpawnQueuer> Queuer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASpawner> Spawner;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASpawnWave> SpawnWave;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AController> Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReservationIndex;
    
    TBL_API FPendingSpawn();
};

