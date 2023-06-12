#pragma once
#include "CoreMinimal.h"
#include "AchievementInstance.h"
#include "AchievementLevelWinInstance.generated.h"

UCLASS(Blueprintable)
class TBL_API UAchievementLevelWinInstance : public UAchievementInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelSetName;
    
    UAchievementLevelWinInstance();
};

