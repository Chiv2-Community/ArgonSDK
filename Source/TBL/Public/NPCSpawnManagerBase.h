#pragma once
#include "CoreMinimal.h"
#include "OnBehaviorTreeStartedDelegate.h"
#include "TBLActor.h"
#include "NPCSpawnManagerBase.generated.h"

UCLASS(Abstract, Blueprintable)
class TBL_API ANPCSpawnManagerBase : public ATBLActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBehaviorTreeStarted OnBehaviorTreeStarted;
    
    ANPCSpawnManagerBase();
};

