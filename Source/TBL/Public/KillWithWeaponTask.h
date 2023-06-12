#pragma once
#include "CoreMinimal.h"
#include "BaseKillTask.h"
#include "Templates/SubclassOf.h"
#include "KillWithWeaponTask.generated.h"

class AInventoryItem;

UCLASS(Blueprintable, EditInlineNew)
class UKillWithWeaponTask : public UBaseKillTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AInventoryItem>> WeaponClasses;
    
    UKillWithWeaponTask();
};

