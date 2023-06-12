#include "PartyList.h"

void UPartyList::OnVOIPTick() {
}

void UPartyList::OnPostLoadMap(UWorld* LoadedWorld) {
}

void UPartyList::OnFriendsUpdated(const TSet<FString>& ChangedUsers) {
}


void UPartyList::InitPartyWidget() {
}

UPartyList::UPartyList() {
    this->InviteButtonOverlay = NULL;
    this->PartyWidgetContainer = NULL;
    this->PartyList = NULL;
    this->PartyListEntryClass = NULL;
    this->SelfPartyEntry = NULL;
    this->MaxPartySize = 4;
}

