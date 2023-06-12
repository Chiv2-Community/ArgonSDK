#pragma once
#include "CoreMinimal.h"
#include "BaseKillTask.h"
#include "Templates/SubclassOf.h"
#include "KillXFromDistanceTask.generated.h"

class AInventoryItem;

UCLASS(Blueprintable, EditInlineNew)
class UKillXFromDistanceTask : public UBaseKillTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceMeters;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> ProjectileClass;
    
public:
    UKillXFromDistanceTask();
};

