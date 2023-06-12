#include "CampaignImpl.h"
#include "Net/UnrealNetwork.h"

void UCampaignImpl::ServerPushRevisionXp_Implementation(int32 ClientRevisionXp) {
}
bool UCampaignImpl::ServerPushRevisionXp_Validate(int32 ClientRevisionXp) {
    return true;
}

void UCampaignImpl::ServerMakeInactive_Implementation() {
}
bool UCampaignImpl::ServerMakeInactive_Validate() {
    return true;
}

void UCampaignImpl::ServerMakeActive_Implementation() {
}
bool UCampaignImpl::ServerMakeActive_Validate() {
    return true;
}

void UCampaignImpl::OnStatChanged(EOnlineStat Stat, int32 OldValue, int32 NewValue) {
}

void UCampaignImpl::OnRep_BackendId(const FString& PreviousBackendId) {
}

void UCampaignImpl::OnRep_AttachedPlayerState(const ATBLPlayerState* PreviousAttachedPlayerState) {
}

void UCampaignImpl::OnRep_AccumulatedXp(int32 PreviousAccumulatedXp) {
}

void UCampaignImpl::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCampaignImpl, RevisionXp);
    DOREPLIFETIME(UCampaignImpl, AttachedPlayerState);
    DOREPLIFETIME(UCampaignImpl, BackendId);
    DOREPLIFETIME(UCampaignImpl, AccumulatedXp);
}

UCampaignImpl::UCampaignImpl() {
    this->bUploadToBackend = true;
    this->Difficulty = EQuestDifficulty::Normal;
    this->Xp = 0;
    this->RevisionXp = 0;
    this->bIsPurchased = false;
    this->AttachedPlayerState = NULL;
    this->AccumulatedXp = 0;
    this->OwningCampaignList = NULL;
    this->Levels.AddDefaulted(1);
}

