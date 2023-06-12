#pragma once
#include "CoreMinimal.h"
#include "AchievementProgressUpdateDelegate.generated.h"

class UTBLAchievementTask;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAchievementProgressUpdate, UTBLAchievementTask*, Task, float, Progress);

