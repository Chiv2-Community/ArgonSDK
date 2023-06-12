#pragma once
#include "CoreMinimal.h"
#include "TBLAchievementTaskCountable.h"
#include "Templates/SubclassOf.h"
#include "FireArrowsTask.generated.h"

class AInventoryItem;

UCLASS(Blueprintable, EditInlineNew)
class UFireArrowsTask : public UTBLAchievementTaskCountable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequiredState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AInventoryItem>> EligibleWeapons;
    
    UFireArrowsTask();
};

