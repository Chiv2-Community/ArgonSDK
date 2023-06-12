#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AchievementProgressUpdateDelegate.h"
#include "TBLAchievementTask.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTBLAchievementTask : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAchievementProgressUpdate OnProgressUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetOnNewMatch;
    
    UTBLAchievementTask();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgressFloat() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastProgressUpdated();
    
};

