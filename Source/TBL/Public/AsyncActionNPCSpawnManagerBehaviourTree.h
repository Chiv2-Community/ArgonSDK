#pragma once
#include "CoreMinimal.h"
#include "AsyncActionNPCSpawnManagerBase.h"
#include "OnBehaviorTreeStartedDelegate.h"
#include "AsyncActionNPCSpawnManagerBehaviourTree.generated.h"

class ANPCSpawnManagerBase;
class ATBLAIController;
class UAsyncActionNPCSpawnManagerBehaviourTree;
class UObject;

UCLASS(Blueprintable)
class TBL_API UAsyncActionNPCSpawnManagerBehaviourTree : public UAsyncActionNPCSpawnManagerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBehaviorTreeStarted OnBehaviorTreeStarted;
    
    UAsyncActionNPCSpawnManagerBehaviourTree();
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyBehaviorTreeStarted(ATBLAIController* Controller);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncActionNPCSpawnManagerBehaviourTree* AsyncWaitForBehaviourTree(UObject* WorldContextObject, ANPCSpawnManagerBase* NPCSpawnManager);
    
};

