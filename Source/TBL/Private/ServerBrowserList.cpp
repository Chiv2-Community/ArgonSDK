#include "ServerBrowserList.h"

void UServerBrowserList::UseSavedSort() {
}

void UServerBrowserList::SortServersByServerType(bool Descending) {
}

void UServerBrowserList::SortServersByServerName(bool Descending) {
}

void UServerBrowserList::SortServersByPlayerNumbers(bool Descending) {
}

void UServerBrowserList::SortServersByPing(bool Descending) {
}

void UServerBrowserList::SortServersByMapName(bool Descending) {
}

void UServerBrowserList::SortServersByGameMode(bool Descending) {
}

void UServerBrowserList::SelectWidget(const FBlueprintSessionResult& Item) {
}

void UServerBrowserList::SelectFirstWidget() {
}

void UServerBrowserList::RefreshServerList(EServerListType ListType) {
}

void UServerBrowserList::RefreshServerEntry(FBlueprintSessionResult SessionResult) {
}

void UServerBrowserList::OnRefreshCompleted(bool bSuccess, EServerListType ListType) {
}

void UServerBrowserList::OnQueryCompleted(bool bSuccess, EServerListType ListType) {
}

void UServerBrowserList::OnPingServerComplete(FBlueprintSessionResult PingedSession) {
}

UWidget* UServerBrowserList::GetSelectedWidget() {
    return NULL;
}

void UServerBrowserList::GetSelectedSession(FBlueprintSessionResult& Out) {
}

int32 UServerBrowserList::GetCurrentFilteredItemsCount() {
    return 0;
}

void UServerBrowserList::FetchFilteredList() {
}

void UServerBrowserList::CreateFakeServers(int32 NumberOfServers, TArray<FString> ServerNames, TArray<FString> MapNamesAndGameModes, TArray<int32> ListOfPossibleMaxPlayers) {
}

UServerBrowserList::UServerBrowserList() {
    this->ItemHeight = 16.00f;
    this->SelectionMode = ESelectionMode::Single;
    this->ScrollBarStyle = NULL;
}

