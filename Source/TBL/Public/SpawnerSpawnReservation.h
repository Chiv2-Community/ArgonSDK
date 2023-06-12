#pragma once
#include "CoreMinimal.h"
#include "SpawnerSpawnReservation.generated.h"

class AController;
class ATBLCharacter;

USTRUCT(BlueprintType)
struct FSpawnerSpawnReservation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasExecuted;
    
    TBL_API FSpawnerSpawnReservation();
};

