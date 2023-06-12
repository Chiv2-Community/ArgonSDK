#include "TBLOnlineLibrary.h"

void UTBLOnlineLibrary::ViewProfileFromBlueprintOnlineUser(const FBlueprintOnlineUser& User) {
}

void UTBLOnlineLibrary::TBLJoinGameSession(const FBlueprintSessionResult& SessionResult, const FString& Password, UObject* WorldContextObject) {
}

void UTBLOnlineLibrary::SetMuteStateForRemotePlayer(bool VoiceChatEnabled, ATBLPlayerController* LocalController, ATBLPlayerState* NewPlayer) {
}

FString UTBLOnlineLibrary::SessionInfoToDebugString(const FBlueprintSessionResult& Result) {
    return TEXT("");
}

void UTBLOnlineLibrary::RemoveFriendFromBlueprintOnlineUser(ATBLPlayerController* InController, const FBlueprintOnlineUser& User) {
}

void UTBLOnlineLibrary::RemoveBlockFromBlueprintOnlineUser(UTBLLocalPlayer* InPlayer, const FBlueprintOnlineUser& User) {
}

void UTBLOnlineLibrary::OpenPartyInviteDialog() {
}

bool UTBLOnlineLibrary::LocalUserHasLicenseToApp(int32 AppId) {
    return false;
}

void UTBLOnlineLibrary::LeaveParty(UTBLLocalPlayer* InPlayer) {
}

void UTBLOnlineLibrary::KickPlayer(UTBLLocalPlayer* InPlayer, const FBlueprintOnlineUser& User) {
}

void UTBLOnlineLibrary::JoinGame(const FBlueprintOnlineUser& User, ATBLPlayerController* LocalController) {
}

bool UTBLOnlineLibrary::IsUserMyself(const FBlueprintOnlineUser& User) {
    return false;
}

bool UTBLOnlineLibrary::IsTutorialServer() {
    return false;
}

bool UTBLOnlineLibrary::IsPlayerTalking(const FString& PlayerId, UObject* WorldContextObject) {
    return false;
}

bool UTBLOnlineLibrary::IsPasswordProtectedServerBySessionResult(const FBlueprintSessionResult& Result) {
    return false;
}

bool UTBLOnlineLibrary::IsPartyLeader(const FBlueprintOnlineUser& User) {
    return false;
}

bool UTBLOnlineLibrary::IsOfficialServerBySessionResult(const FBlueprintSessionResult& Result) {
    return false;
}

bool UTBLOnlineLibrary::IsLocalPlayerPartyLeader() {
    return false;
}

bool UTBLOnlineLibrary::IsInMyParty(UTBLLocalPlayer* InPlayer, const FBlueprintOnlineUser& User) {
    return false;
}

bool UTBLOnlineLibrary::IsInMatchmadeGame() {
    return false;
}

bool UTBLOnlineLibrary::IsInAParty(const FBlueprintOnlineUser& User) {
    return false;
}

bool UTBLOnlineLibrary::IsGameJoinable() {
    return false;
}

bool UTBLOnlineLibrary::IsAppOwnershipTemporary() {
    return false;
}

bool UTBLOnlineLibrary::IsAdminBP(APlayerController* Controller) {
    return false;
}

void UTBLOnlineLibrary::InviteUserToParty(UTBLLocalPlayer* InPlayer, const FBlueprintOnlineUser& User) {
}

void UTBLOnlineLibrary::InviteUserToGame(const FBlueprintOnlineUser& User) {
}

ATBLGameSession* UTBLOnlineLibrary::GetTBLGameSession(UObject* WorldContextObject) {
    return NULL;
}

UTBLGameInstance* UTBLOnlineLibrary::GetTBLGameInstance(const UObject* WorldContextObject) {
    return NULL;
}

void UTBLOnlineLibrary::GetTalkingPlayers(TArray<ATBLPlayerState*>& OutPlayerStates, UObject* WorldContextObject) {
}

bool UTBLOnlineLibrary::GetStatRangeIntFromLevel(int32 InLevel, EOnlineStat OnlineStat, int32& Start, int32& End) {
    return false;
}

bool UTBLOnlineLibrary::GetStatRangeIntFromExperience(int32 InExperience, EOnlineStat OnlineStat, int32& Level, int32& PreviousLevelExperience, int32& NextLevelExperience) {
    return false;
}

bool UTBLOnlineLibrary::GetStatRangeInt(ATBLPlayerController* InController, EOnlineStat OnlineStat, int32& Level, int32& PreviousLevelExperience, int32& NextLevelExperience) {
    return false;
}

bool UTBLOnlineLibrary::GetStatRangeFromPlayerState(ATBLPlayerState* PlayerState, EOnlineStat OnlineStat, int32& Level, int32& PreviousLevelExperience, int32& NextLevelExperience) {
    return false;
}

bool UTBLOnlineLibrary::GetStatOriginalInt(ATBLPlayerController* InController, EOnlineStat Stat, int32& returnVal) {
    return false;
}

bool UTBLOnlineLibrary::GetStatOriginalFloat(ATBLPlayerController* InController, EOnlineStat Stat, float& returnVal) {
    return false;
}

bool UTBLOnlineLibrary::GetStatInt(ATBLPlayerController* InController, EOnlineStat Stat, int32& returnVal) {
    return false;
}

bool UTBLOnlineLibrary::GetStatFloat(ATBLPlayerController* InController, EOnlineStat Stat, float& returnVal) {
    return false;
}

FString UTBLOnlineLibrary::GetSessionSettingsValue(const FBlueprintSessionResult& Result, FName Key) {
    return TEXT("");
}

void UTBLOnlineLibrary::GetSessionSettingsKeys(const FBlueprintSessionResult& Result, TArray<FName>& OutSettingKeys) {
}

void UTBLOnlineLibrary::GetSessionSettingsAsStrings(FName SessionName, TArray<FString>& Keys, TArray<FString>& Values) {
}

void UTBLOnlineLibrary::GetPartyMembers(TArray<FBlueprintOnlineUser>& OutPartyMembers) {
}

int32 UTBLOnlineLibrary::GetPartyMemberCount() {
    return 0;
}

int32 UTBLOnlineLibrary::GetNumBots(const FBlueprintSessionResult& Result) {
    return 0;
}

FString UTBLOnlineLibrary::GetMapName(const FBlueprintSessionResult& Result) {
    return TEXT("");
}

FString UTBLOnlineLibrary::GetLocalPlayerId() {
    return TEXT("");
}

void UTBLOnlineLibrary::GetListOfCurrentSessions(TArray<FName>& CurrentSessions) {
}

bool UTBLOnlineLibrary::GetFriendById(const FString& FriendId, FBlueprintOnlineUser& OutBlueprintUser) {
    return false;
}

FString UTBLOnlineLibrary::GetDebugStringForSessionSettingsKey(FName Key) {
    return TEXT("");
}

UTexture* UTBLOnlineLibrary::GetAvatarImageFromPlayerState(APlayerState* PlayerState, ESteamAvatarSize Size) {
    return NULL;
}

UTexture* UTBLOnlineLibrary::GetAvatarImageFromOnlineUser(const FBlueprintOnlineUser& User, ESteamAvatarSize Size) {
    return NULL;
}

bool UTBLOnlineLibrary::CheckAppOwnership() {
    return false;
}

bool UTBLOnlineLibrary::CanSendPartyInvites() {
    return false;
}

bool UTBLOnlineLibrary::CanJoinGame(const FBlueprintOnlineUser& User) {
    return false;
}

void UTBLOnlineLibrary::BroadcastLocalizedObjectiveMessage(const FObjectiveMessage& ObjectiveMessage, EFaction ReceivingFaction, UObject* WorldContextObject) {
}

void UTBLOnlineLibrary::BroadcastLocalizedChat(FText Msg, TEnumAsByte<EChatType::Type> Type, EFaction ReceivingFaction, UObject* WorldContextObject) {
}

void UTBLOnlineLibrary::BroadcastGameModeMessages(TArray<FGameModeMessageTable> GameModeMessages, UObject* WorldContextObject) {
}

bool UTBLOnlineLibrary::AreWePartyHost() {
    return false;
}

void UTBLOnlineLibrary::AddFriendFromBlueprintOnlineUser(ATBLPlayerController* InController, const FBlueprintOnlineUser& User) {
}

void UTBLOnlineLibrary::AddBlockFromBlueprintOnlineUser(UTBLLocalPlayer* InPlayer, const FBlueprintOnlineUser& User) {
}

void UTBLOnlineLibrary::ActivateGameOverlayToWebPage(const FString& URL) {
}

void UTBLOnlineLibrary::AcceptPartyInviteFromPlayerName(UTBLLocalPlayer* InPlayer, const FString& InviteeName) {
}

void UTBLOnlineLibrary::AcceptPartyInviteFromPlayer(UTBLLocalPlayer* InPlayer, const FBlueprintOnlineUser& User) {
}

UTBLOnlineLibrary::UTBLOnlineLibrary() {
}

