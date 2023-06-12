#include "TBLGameSession.h"

bool ATBLGameSession::StartServerListQuickMatch(const FServerFilterSetting& Filters) {
    return false;
}

bool ATBLGameSession::StartMatchmaking(const TArray<FMatchmakingQueue>& Queues) {
    return false;
}

void ATBLGameSession::OnServerListRefreshComplete(bool bSuccess, EServerListType SearchType) {
}

bool ATBLGameSession::IsMatchmaking() {
    return false;
}

bool ATBLGameSession::IsBusy() const {
    return false;
}

void ATBLGameSession::HandleMatchmakingComplete(FName MatchmadeSessionName, bool bSuccess) {
}

void ATBLGameSession::HandleMatchmakingCancelled(FName MatchmadeSessionName, bool bSuccess) {
}

bool ATBLGameSession::CanStartMatchmaking(bool bIsBackfill) const {
    return false;
}

bool ATBLGameSession::CancelMatchmaking() {
    return false;
}

bool ATBLGameSession::CanCancelMatchMaking() const {
    return false;
}

ATBLGameSession::ATBLGameSession() {
    this->bIsCancellingMatchmaking = false;
    this->MaxNumExtraAdmins = 5;
}

