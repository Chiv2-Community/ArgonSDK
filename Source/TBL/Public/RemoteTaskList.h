#pragma once
#include "CoreMinimal.h"
#include "RemoteTaskList.generated.h"

class UTBLAchievementTask;

USTRUCT(BlueprintType)
struct FRemoteTaskList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTBLAchievementTask*> Tasks;
    
    TBL_API FRemoteTaskList();
};

