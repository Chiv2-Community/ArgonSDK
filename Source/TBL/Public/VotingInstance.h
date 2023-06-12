#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AfterVoteTimerSignatureDelegate.h"
#include "ReplicatedArray_FVotingOption.h"
#include "ReplicatedSubobjectInterface.h"
#include "Replicated_ATBLPayerState.h"
#include "Replicated_FName.h"
#include "Replicated_Float.h"
#include "Replicated_UInt8.h"
#include "VoteConcludedSignatureDelegate.h"
#include "VotesReplicatedDelegate.h"
#include "VotingOption.h"
#include "VotingInstance.generated.h"

class ATBLPlayerController;
class ATBLPlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UVotingInstance : public UActorComponent, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_ATBLPayerState InstigatorPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_Float StartTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVotesReplicated OnVotesReplicated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoteConcludedSignature OnVoteConcluded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAfterVoteTimerSignature OnAfterVoteTimerFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VoteOptions, meta=(AllowPrivateAccess=true))
    FReplicatedArray_FVotingOption VoteOptions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoteTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AfterVoteWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_FName CurrentWinningOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_UInt8 bIsVoteFinished;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVotesHaveMinimumTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumVoteTime;
    
public:
    UVotingInstance();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_VoteOptions();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidForVoter(ATBLPlayerState* Voter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVotesNeededToPass();
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FVotingOption> GetVoteOptions();
    
public:
    UFUNCTION(BlueprintCallable)
    float GetTimeLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStartTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPlayerVote(ATBLPlayerState* Voter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumVotesForOption(FName VoteOption);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfVotes();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsVoteFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATBLPlayerState* GetInstigator() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentWinningOption();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanVoteOccur(ATBLPlayerController* InstigatingControlle, FName VoteOption) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayerVote(ATBLPlayerState* Voter, FName VoteOption) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayerBeParticipant(ATBLPlayerState* Voter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHaveMoreThanOneValid();
    
    
    // Fix for true pure virtual functions not being implemented
};

