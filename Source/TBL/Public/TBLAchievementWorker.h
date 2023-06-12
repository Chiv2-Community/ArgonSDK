#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RemoteTaskList.h"
#include "TBLAchievementWorker.generated.h"

class ATBLPlayerController;
class UTBLAchievementTask;

UCLASS(Abstract, Blueprintable)
class UTBLAchievementWorker : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTBLAchievementTask*> LocalTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ATBLPlayerController*, FRemoteTaskList> RemoteTasks;
    
public:
    UTBLAchievementWorker();
};

