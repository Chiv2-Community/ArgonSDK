#pragma once
#include "CoreMinimal.h"
#include "AchievementInstance.h"
#include "EGameModeType.h"
#include "AchievementGameModeInstance.generated.h"

UCLASS(Blueprintable)
class TBL_API UAchievementGameModeInstance : public UAchievementInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGameModeType::Type> GamemodeType;
    
    UAchievementGameModeInstance();
};

