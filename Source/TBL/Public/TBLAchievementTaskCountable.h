#pragma once
#include "CoreMinimal.h"
#include "TBLAchievementTask.h"
#include "TBLAchievementTaskCountable.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTBLAchievementTaskCountable : public UTBLAchievementTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=BroadcastProgressUpdated, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=BroadcastProgressUpdated, meta=(AllowPrivateAccess=true))
    int32 RequiredCount;
    
    UTBLAchievementTaskCountable();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

