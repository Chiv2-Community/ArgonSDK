#pragma once
#include "CoreMinimal.h"
#include "TBLAchievementTaskCountable.h"
#include "BaseKillTask.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBaseKillTask : public UTBLAchievementTaskCountable {
    GENERATED_BODY()
public:
    UBaseKillTask();
};

