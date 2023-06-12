#pragma once
#include "CoreMinimal.h"
#include "TBLAchievementTaskCountable.h"
#include "Templates/SubclassOf.h"
#include "BandageXTimesTask.generated.h"

class AInventoryItem;

UCLASS(Blueprintable, EditInlineNew)
class UBandageXTimesTask : public UTBLAchievementTaskCountable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> BandageClass;
    
public:
    UBandageXTimesTask();
};

