#pragma once
#include "CoreMinimal.h"
#include "ESpawnerSelectionMode.h"
#include "Spawner.h"
#include "SpawnerChild.h"
#include "GroupSpawner.generated.h"

UCLASS(Blueprintable)
class AGroupSpawner : public ASpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnerChild> Spawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnerSelectionMode SpawnerSelectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnerSelectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPerformedRefill;
    
    AGroupSpawner();
};

