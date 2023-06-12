#pragma once
#include "CoreMinimal.h"
#include "TBLAchievementTask.h"
#include "DieFromFireTask.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDieFromFireTask : public UTBLAchievementTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=BroadcastProgressUpdated, meta=(AllowPrivateAccess=true))
    bool bIsFinished;
    
public:
    UDieFromFireTask();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

