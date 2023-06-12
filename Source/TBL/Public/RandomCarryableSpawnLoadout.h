#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RandomCarryableSpawnSpec.h"
#include "Templates/SubclassOf.h"
#include "RandomCarryableSpawnLoadout.generated.h"

class AInventoryItem;

UCLASS(Blueprintable)
class URandomCarryableSpawnLoadout : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomCarryableSpawnSpec> CarryableSpecs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TotalPercent;
    
    URandomCarryableSpawnLoadout();
    UFUNCTION(BlueprintCallable)
    TSubclassOf<AInventoryItem> GetRandomCarryable();
    
};

