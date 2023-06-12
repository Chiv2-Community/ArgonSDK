#include "VotingInstance.h"
#include "Net/UnrealNetwork.h"

void UVotingInstance::OnRep_VoteOptions() {
}

bool UVotingInstance::IsValidForVoter(ATBLPlayerState* Voter) {
    return false;
}

int32 UVotingInstance::GetVotesNeededToPass() {
    return 0;
}

TArray<FVotingOption> UVotingInstance::GetVoteOptions() {
    return TArray<FVotingOption>();
}

float UVotingInstance::GetTimeLeft() {
    return 0.0f;
}

float UVotingInstance::GetStartTime() const {
    return 0.0f;
}

FName UVotingInstance::GetPlayerVote(ATBLPlayerState* Voter) const {
    return NAME_None;
}

int32 UVotingInstance::GetNumVotesForOption(FName VoteOption) {
    return 0;
}

int32 UVotingInstance::GetNumberOfVotes() {
    return 0;
}

bool UVotingInstance::GetIsVoteFinished() {
    return false;
}

ATBLPlayerState* UVotingInstance::GetInstigator() const {
    return NULL;
}

FName UVotingInstance::GetCurrentWinningOption() {
    return NAME_None;
}

bool UVotingInstance::CanVoteOccur(ATBLPlayerController* InstigatingControlle, FName VoteOption) const {
    return false;
}

bool UVotingInstance::CanPlayerVote(ATBLPlayerState* Voter, FName VoteOption) const {
    return false;
}

bool UVotingInstance::CanPlayerBeParticipant(ATBLPlayerState* Voter) const {
    return false;
}

bool UVotingInstance::CanHaveMoreThanOneValid() {
    return false;
}

void UVotingInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UVotingInstance, InstigatorPlayer);
    DOREPLIFETIME(UVotingInstance, StartTime);
    DOREPLIFETIME(UVotingInstance, VoteOptions);
    DOREPLIFETIME(UVotingInstance, CurrentWinningOption);
    DOREPLIFETIME(UVotingInstance, bIsVoteFinished);
}

UVotingInstance::UVotingInstance() {
    this->VoteTime = 30.00f;
    this->AfterVoteWaitTime = 3.00f;
    this->bVotesHaveMinimumTime = false;
    this->MinimumVoteTime = 0.00f;
}

