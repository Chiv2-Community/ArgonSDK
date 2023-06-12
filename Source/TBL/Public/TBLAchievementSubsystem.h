#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TBLAchievementSubsystem.generated.h"

class UTBLAchievementTask;
class UTBLAchievementWorker;
class UWorld;

UCLASS(Blueprintable, Config=Game)
class UTBLAchievementSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UTBLAchievementWorker*> WorkersByClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UTBLAchievementTask*> IdToTaskMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UTBLAchievementTask*, FString> TaskToIdMap;
    
public:
    UTBLAchievementSubsystem();
private:
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAchievements();
    
    UFUNCTION(BlueprintCallable)
    void OnWorldDestroy(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void OnWorldCreation(UWorld* World);
    
};

