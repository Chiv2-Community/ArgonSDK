#include "KickVotingInstance.h"
#include "Net/UnrealNetwork.h"

ATBLPlayerState* UKickVotingInstance::GetKickTarget() const {
    return NULL;
}

void UKickVotingInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UKickVotingInstance, KickTarget);
    DOREPLIFETIME(UKickVotingInstance, KickTargetFaction);
}

UKickVotingInstance::UKickVotingInstance() {
    this->YesOption = TEXT("Yes");
    this->NoOption = TEXT("No");
    this->VoteKickType = EVoteKickType::TeamVoting;
    this->VoteKickBanTime = 600.00f;
    this->VoteKickMaxPercentageRequired = 75;
    this->VoteKickMinPercentageRequired = 55;
    this->VoteKickCooldown = 180.00f;
    this->VoteKickMinimumPlayers = 2;
    this->VoteKickUnanimousPlayerThreshold = 5;
}

