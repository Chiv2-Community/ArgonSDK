#pragma once
#include "CoreMinimal.h"
#include "CumulativePlayerSpawnPair.h"
#include "SpawnQueuer.h"
#include "CumulativeSpawnQueuer.generated.h"

class AController;

UCLASS(Blueprintable)
class UCumulativeSpawnQueuer : public USpawnQueuer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CumulativeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingRespawnTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCumulativePlayerSpawnPair> SpawnQueue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AController>, float> PlayerCumulativeTimes;
    
public:
    UCumulativeSpawnQueuer();
};

