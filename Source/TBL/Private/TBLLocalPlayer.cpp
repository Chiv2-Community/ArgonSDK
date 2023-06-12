#include "TBLLocalPlayer.h"
#include "CloudBlockRecentPlayers.h"

void UTBLLocalPlayer::YesPartyCrossplayJoinListGame() {
}

void UTBLLocalPlayer::YesPartyCrossplayJoin() {
}

void UTBLLocalPlayer::WhatBuild() {
}

void UTBLLocalPlayer::UpdatePendingInvites() {
}

void UTBLLocalPlayer::SendPartyInvitationToPlayerIdExec(const FString& PlayerId) {
}

void UTBLLocalPlayer::SendPartyInvitationToPlayerId(const FString& PlayerId) {
}

void UTBLLocalPlayer::SendFriendInvitationByInviteCode(const FString& PlayerInviteCode, FOnFriendInviteSent OnFriendInviteSent) {
}

FString UTBLLocalPlayer::RetrieveInviteCode() {
    return TEXT("");
}

void UTBLLocalPlayer::RemoveFriend(const FString& PlayerName) {
}

void UTBLLocalPlayer::RemoveBlock(const FString& PlayerId, const FString& PlayerName) {
}

void UTBLLocalPlayer::RejectPartyInvitationFromPlayer(const FString& PlayerId) {
}

void UTBLLocalPlayer::RejectFriendInvitationFromPlayer(const FString& PlayerId) {
}

void UTBLLocalPlayer::RegenerateFriendInviteCode() {
}

void UTBLLocalPlayer::ReadFriendsLists() {
}

void UTBLLocalPlayer::PartyKickExec(const FString& PlayerId) {
}

void UTBLLocalPlayer::OnReadUserFileComplete(const FPlatformInterfaceDelegateResult& Result) {
}

void UTBLLocalPlayer::OnEnumerateCloudFilesComplete(const FPlatformInterfaceDelegateResult& Result) {
}

void UTBLLocalPlayer::NoPartyCrossplayJoin() {
}

void UTBLLocalPlayer::ListRecents() const {
}

void UTBLLocalPlayer::ListPartyInvitationsExec() {
}

void UTBLLocalPlayer::ListBlocks() const {
}

void UTBLLocalPlayer::LinkEpicAccount(int32 LocalUserNum, FOnEpicAccountLinkingComplete OnAccountLinkingComplete) {
}

void UTBLLocalPlayer::LeavePartyExec() {
}

void UTBLLocalPlayer::JoinPartyExec(const FString& PartyId) {
}

bool UTBLLocalPlayer::IsPartyLeader() {
    return false;
}

bool UTBLLocalPlayer::IsInParty() {
    return false;
}

bool UTBLLocalPlayer::IsEpicAccountLinked(int32 LocalUserNum) const {
    return false;
}

bool UTBLLocalPlayer::IsBlocked(const FString& PlayerId, const FString& PlayerName) {
    return false;
}

TArray<FBlueprintOnlineUser> UTBLLocalPlayer::GetPendingPartyMembers() {
    return TArray<FBlueprintOnlineUser>();
}

int32 UTBLLocalPlayer::GetPartyMemberCount() {
    return 0;
}

void UTBLLocalPlayer::GetPartyLeaderExec() {
}

FBlueprintOnlineUser UTBLLocalPlayer::GetOnlineUser(const FString& ID) {
    return FBlueprintOnlineUser{};
}

FString UTBLLocalPlayer::GetNickname() const {
    return TEXT("");
}

bool UTBLLocalPlayer::GetIsPartyInMatchmakingQueue() {
    return false;
}

TArray<FBlueprintOnlineUser> UTBLLocalPlayer::GetFriendList() {
    return TArray<FBlueprintOnlineUser>();
}

ESlateInputMode UTBLLocalPlayer::GetCurrentSlateInputMode() const {
    return ESlateInputMode::GameOnly;
}

TArray<FBlueprintOnlineUser> UTBLLocalPlayer::GetBPPartyMembers() {
    return TArray<FBlueprintOnlineUser>();
}

void UTBLLocalPlayer::FocusAccountLinkingWidget(UUserWidget* Widget) {
}

void UTBLLocalPlayer::CopyInfo() {
}

bool UTBLLocalPlayer::CanLinkEpicAccount(int32 LocalUserNum) const {
    return false;
}

void UTBLLocalPlayer::AddRecent(const FString& PlayerId, const FString& PlayerName) {
}

void UTBLLocalPlayer::AddBlock(const FString& PlayerId, const FString& PlayerName) {
}

void UTBLLocalPlayer::AcceptPartyInvitationFromPlayerExec(const FString& PlayerName) {
}

void UTBLLocalPlayer::AcceptFriendInvitationFromPlayerExec(const FString& PlayerId) {
}

UTBLLocalPlayer::UTBLLocalPlayer() {
    this->CloudBlockRecentPlayers = CreateDefaultSubobject<UCloudBlockRecentPlayers>(TEXT("CloudBlockRecentPlayers"));
    this->ActiveScreenManager = NULL;
}

