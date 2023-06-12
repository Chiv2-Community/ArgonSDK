#include "FriendsAndPartyList.h"

void UFriendsAndPartyList::SetPartyInviteSettings(bool bAllowInvites, bool bJoinViaPresence, bool bJoinViaPresenceFriendsOnly) {
}

void UFriendsAndPartyList::RefreshItemsList() {
}

void UFriendsAndPartyList::RefreshFriendsList(bool ShouldRead) {
}

void UFriendsAndPartyList::OnUsersChanged(const TSet<FString>& ChangedUsers) {
}

void UFriendsAndPartyList::BP_NavigateToItem(const FBlueprintOnlineUser& Item) {
}

UFriendsAndPartyList::UFriendsAndPartyList() {
    this->ListType = EFriendsListType::Friends_All;
    this->ScrollBarStyle = NULL;
    this->Orientation = Orient_Vertical;
    this->SelectionMode = ESelectionMode::Single;
    this->ConsumeMouseWheel = EConsumeMouseWheel::WhenScrollingPossible;
    this->bClearSelectionOnClick = false;
    this->bIsFocusable = true;
    this->EntrySpacing = 0.00f;
    this->bReturnFocusToSelection = false;
    this->NumberOfDummyItems = 6;
    this->NumberOfDummyGroups = 2;
    this->NumberOfMaxItemsDisplayed = 64;
    this->SeparatorEntryWidgetClass = NULL;
}

