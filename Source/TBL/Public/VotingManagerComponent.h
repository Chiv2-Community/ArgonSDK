#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ReplicatedArray_UVotingInstances.h"
#include "ReplicatedSubobjectInterface.h"
#include "Templates/SubclassOf.h"
#include "VoteFinishedSignatureDelegate.h"
#include "VotingResults.h"
#include "VotingManagerComponent.generated.h"

class ATBLPlayerController;
class UVotingInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVotingManagerComponent : public UActorComponent, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicatedArray_UVotingInstances VotingInstances;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoteFinishedSignature OnVoteFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UVotingInstance>> ValidInstances;
    
public:
    UVotingManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void VoteFinished(const FName& VoteResult);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInstance(UVotingInstance* VotingInstance);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumVoteInstancesForClass(TSubclassOf<UVotingInstance> VoteClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumValidInstancesForClass(TSubclassOf<UVotingInstance> VoteClass, ATBLPlayerController* VotingController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanVoteStart(ATBLPlayerController* VotingController, FName VoteOption, UVotingInstance* VotingInstance);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastVoteFinished(const FVotingResults& VoteResults);
    
    
    // Fix for true pure virtual functions not being implemented
};

