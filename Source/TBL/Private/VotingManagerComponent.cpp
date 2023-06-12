#include "VotingManagerComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void UVotingManagerComponent::VoteFinished(const FName& VoteResult) {
}

void UVotingManagerComponent::RemoveInstance(UVotingInstance* VotingInstance) {
}

int32 UVotingManagerComponent::GetNumVoteInstancesForClass(TSubclassOf<UVotingInstance> VoteClass) {
    return 0;
}

int32 UVotingManagerComponent::GetNumValidInstancesForClass(TSubclassOf<UVotingInstance> VoteClass, ATBLPlayerController* VotingController) {
    return 0;
}

bool UVotingManagerComponent::CanVoteStart(ATBLPlayerController* VotingController, FName VoteOption, UVotingInstance* VotingInstance) {
    return false;
}

void UVotingManagerComponent::BroadcastVoteFinished_Implementation(const FVotingResults& VoteResults) {
}

void UVotingManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UVotingManagerComponent, VotingInstances);
}

UVotingManagerComponent::UVotingManagerComponent() {
}

