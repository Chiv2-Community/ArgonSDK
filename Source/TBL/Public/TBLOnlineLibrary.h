#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FindSessionsCallbackProxy.h"
#include "BlueprintOnlineUser.h"
#include "EChatType.h"
#include "EFaction.h"
#include "EOnlineStat.h"
#include "ESteamAvatarSize.h"
#include "GameModeMessageTable.h"
#include "ObjectiveMessage.h"
#include "TBLOnlineLibrary.generated.h"

class APlayerController;
class APlayerState;
class ATBLGameSession;
class ATBLPlayerController;
class ATBLPlayerState;
class UObject;
class UTBLGameInstance;
class UTBLLocalPlayer;
class UTexture;

UCLASS(Blueprintable, MinimalAPI)
class UTBLOnlineLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTBLOnlineLibrary();
    UFUNCTION(BlueprintCallable)
    static void ViewProfileFromBlueprintOnlineUser(const FBlueprintOnlineUser& User);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TBLJoinGameSession(const FBlueprintSessionResult& SessionResult, const FString& Password, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetMuteStateForRemotePlayer(bool VoiceChatEnabled, ATBLPlayerController* LocalController, ATBLPlayerState* NewPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SessionInfoToDebugString(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveFriendFromBlueprintOnlineUser(ATBLPlayerController* InController, const FBlueprintOnlineUser& User);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveBlockFromBlueprintOnlineUser(UTBLLocalPlayer* InPlayer, const FBlueprintOnlineUser& User);
    
    UFUNCTION(BlueprintCallable)
    static void OpenPartyInviteDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LocalUserHasLicenseToApp(int32 AppId);
    
    UFUNCTION(BlueprintCallable)
    static void LeaveParty(UTBLLocalPlayer* InPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void KickPlayer(UTBLLocalPlayer* InPlayer, const FBlueprintOnlineUser& User);
    
    UFUNCTION(BlueprintCallable)
    static void JoinGame(const FBlueprintOnlineUser& User, ATBLPlayerController* LocalController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUserMyself(const FBlueprintOnlineUser& User);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTutorialServer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerTalking(const FString& PlayerId, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPasswordProtectedServerBySessionResult(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPartyLeader(const FBlueprintOnlineUser& User);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOfficialServerBySessionResult(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLocalPlayerPartyLeader();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInMyParty(UTBLLocalPlayer* InPlayer, const FBlueprintOnlineUser& User);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static bool IsInMatchmadeGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInAParty(const FBlueprintOnlineUser& User);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGameJoinable();
    
    UFUNCTION(BlueprintCallable)
    static bool IsAppOwnershipTemporary();
    
    UFUNCTION(BlueprintCallable)
    static bool IsAdminBP(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static void InviteUserToParty(UTBLLocalPlayer* InPlayer, const FBlueprintOnlineUser& User);
    
    UFUNCTION(BlueprintCallable)
    static void InviteUserToGame(const FBlueprintOnlineUser& User);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ATBLGameSession* GetTBLGameSession(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTBLGameInstance* GetTBLGameInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetTalkingPlayers(TArray<ATBLPlayerState*>& OutPlayerStates, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetStatRangeIntFromLevel(int32 InLevel, EOnlineStat OnlineStat, int32& Start, int32& End);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetStatRangeIntFromExperience(int32 InExperience, EOnlineStat OnlineStat, int32& Level, int32& PreviousLevelExperience, int32& NextLevelExperience);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetStatRangeInt(ATBLPlayerController* InController, EOnlineStat OnlineStat, int32& Level, int32& PreviousLevelExperience, int32& NextLevelExperience);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetStatRangeFromPlayerState(ATBLPlayerState* PlayerState, EOnlineStat OnlineStat, int32& Level, int32& PreviousLevelExperience, int32& NextLevelExperience);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetStatOriginalInt(ATBLPlayerController* InController, EOnlineStat Stat, int32& returnVal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetStatOriginalFloat(ATBLPlayerController* InController, EOnlineStat Stat, float& returnVal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetStatInt(ATBLPlayerController* InController, EOnlineStat Stat, int32& returnVal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetStatFloat(ATBLPlayerController* InController, EOnlineStat Stat, float& returnVal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSessionSettingsValue(const FBlueprintSessionResult& Result, FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSessionSettingsKeys(const FBlueprintSessionResult& Result, TArray<FName>& OutSettingKeys);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSessionSettingsAsStrings(FName SessionName, TArray<FString>& Keys, TArray<FString>& Values);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPartyMembers(TArray<FBlueprintOnlineUser>& OutPartyMembers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPartyMemberCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumBots(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMapName(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLocalPlayerId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetListOfCurrentSessions(TArray<FName>& CurrentSessions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFriendById(const FString& FriendId, FBlueprintOnlineUser& OutBlueprintUser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDebugStringForSessionSettingsKey(FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture* GetAvatarImageFromPlayerState(APlayerState* PlayerState, ESteamAvatarSize Size);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture* GetAvatarImageFromOnlineUser(const FBlueprintOnlineUser& User, ESteamAvatarSize Size);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckAppOwnership();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanSendPartyInvites();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanJoinGame(const FBlueprintOnlineUser& User);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BroadcastLocalizedObjectiveMessage(const FObjectiveMessage& ObjectiveMessage, EFaction ReceivingFaction, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BroadcastLocalizedChat(FText Msg, TEnumAsByte<EChatType::Type> Type, EFaction ReceivingFaction, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BroadcastGameModeMessages(TArray<FGameModeMessageTable> GameModeMessages, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreWePartyHost();
    
    UFUNCTION(BlueprintCallable)
    static void AddFriendFromBlueprintOnlineUser(ATBLPlayerController* InController, const FBlueprintOnlineUser& User);
    
    UFUNCTION(BlueprintCallable)
    static void AddBlockFromBlueprintOnlineUser(UTBLLocalPlayer* InPlayer, const FBlueprintOnlineUser& User);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ActivateGameOverlayToWebPage(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    static void AcceptPartyInviteFromPlayerName(UTBLLocalPlayer* InPlayer, const FString& InviteeName);
    
    UFUNCTION(BlueprintCallable)
    static void AcceptPartyInviteFromPlayer(UTBLLocalPlayer* InPlayer, const FBlueprintOnlineUser& User);
    
};

