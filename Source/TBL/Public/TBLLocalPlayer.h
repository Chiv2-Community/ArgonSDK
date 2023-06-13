#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "Engine/PlatformInterfaceBase.h"
#include "BlueprintOnlineUser.h"
#include "ESlateInputMode.h"
#include "OnAcceptPartyInviteDelegate.h"
#include "OnEpicAccountLinkingCompleteDelegate.h"
#include "OnFriendCodeUpdatedDelegate.h"
#include "OnFriendInviteSentDelegate.h"
#include "OnFriendInvitesReceivedDelegate.h"
#include "OnFriendStatusUpdatedDelegate.h"
#include "OnFriendsListsUpdatedDelegate.h"
#include "OnFriendsUpdatedDelegate.h"
#include "OnLocalPlayerPartyInvitesChangedDelegate.h"
#include "OnPartyCreatedDelegate.h"
#include "OnPartyDisbandDelegate.h"
#include "OnPartyInviteAcceptDelegate.h"
#include "OnPartyInviteSendResultDelegate.h"
#include "OnPartyInviteSentDelegate.h"
#include "OnPartyInvitesReceivedDelegate.h"
#include "OnPartyJoinedQueue_DynamicDelegate.h"
#include "OnPartyLeaderChangeDelegate.h"
#include "OnPartyLeaveDelegate.h"
#include "OnPartyLeftQueue_DynamicDelegate.h"
#include "OnPartyMemberJoinDelegate.h"
#include "OnPartyMemberKickDelegate.h"
#include "OnPartyMemberLeaveDelegate.h"
#include "OnPartyMemberRemoveDelegate.h"
#include "OnPartyMembersUpdatedDelegate.h"
#include "OnTitleBroadcastReceivedDelegate.h"
#include "OnnLocalPlayerPartyInviteResponseReceivedDelegate.h"
#include "TBLLocalPlayer.generated.h"

class UCloudBlockRecentPlayers;
class UTBLScreenManager;
class UUserWidget;

UCLASS(Blueprintable, NonTransient)
class UTBLLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCloudBlockRecentPlayers* CloudBlockRecentPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MostRecentServerPassword;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFriendsListsUpdated OnFriendsListsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyMembersUpdated OnPartyMembersUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFriendsUpdated OnFriendsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTitleBroadcastReceived OnTitleBroadcastReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFriendStatusUpdated OnFriendStatusUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyInvitesReceived OnPartyInvitesReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalPlayerPartyInvitesChanged OnPartyInvitesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyInviteSent OnPartyInviteSent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyInviteAccept OnPartyInviteAccept;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAcceptPartyInvite OnAcceptPartyInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnnLocalPlayerPartyInviteResponseReceived OnPartyInviteResponseReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyJoinedQueue_Dynamic OnPartyJoinedQueue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyLeftQueue_Dynamic OnPartyLeftQueue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyMemberJoin OnPartyMemberJoin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyMemberLeave OnPartyMemberLeave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyMemberKick OnPartyMemberKick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyMemberRemove OnPartyMemberRemove;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyLeaderChange OnPartyLeaderChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyDisband OnPartyDisband;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyLeave OnPartyLeave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyInviteSendResult OnPartyInviteSendResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyCreated OnPartyCreatedResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFriendInvitesReceived OnFriendInvitesReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFriendCodeUpdated OnFriendCodeUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTBLScreenManager* ActiveScreenManager;
    
public:
    UTBLLocalPlayer();
private:
    UFUNCTION(BlueprintCallable)
    void YesPartyCrossplayJoinListGame();
    
    UFUNCTION(BlueprintCallable)
    void YesPartyCrossplayJoin();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void WhatBuild();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePendingInvites();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SendPartyInvitationToPlayerIdExec(const FString& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SendPartyInvitationToPlayerId(const FString& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SendFriendInvitationByInviteCode(const FString& PlayerInviteCode, FOnFriendInviteSent OnFriendInviteSent);
    
    UFUNCTION(BlueprintCallable)
    FString RetrieveInviteCode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveFriend(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveBlock(const FString& PlayerId, const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RejectPartyInvitationFromPlayer(const FString& PlayerId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RejectFriendInvitationFromPlayer(const FString& PlayerId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RegenerateFriendInviteCode();
    
    UFUNCTION(BlueprintCallable)
    void ReadFriendsLists();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PartyKickExec(const FString& PlayerId);
    
    UFUNCTION()
    void OnReadUserFileComplete(const FPlatformInterfaceDelegateResult& Result);
    
    UFUNCTION()
    void OnEnumerateCloudFilesComplete(const FPlatformInterfaceDelegateResult& Result);
    
private:
    UFUNCTION(BlueprintCallable)
    void NoPartyCrossplayJoin();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void ListRecents() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListPartyInvitationsExec();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListBlocks() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void LinkEpicAccount(int32 LocalUserNum, FOnEpicAccountLinkingComplete OnAccountLinkingComplete);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LeavePartyExec();
    
    UFUNCTION(BlueprintCallable, Exec)
    void JoinPartyExec(const FString& PartyId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartyLeader();
    
    UFUNCTION(BlueprintCallable)
    bool IsInParty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Exec)
    bool IsEpicAccountLinked(int32 LocalUserNum) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsBlocked(const FString& PlayerId, const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable)
    TArray<FBlueprintOnlineUser> GetPendingPartyMembers();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPartyMemberCount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetPartyLeaderExec();
    
    UFUNCTION(BlueprintCallable)
    FBlueprintOnlineUser GetOnlineUser(const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetNickname() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsPartyInMatchmakingQueue();
    
    UFUNCTION(BlueprintCallable)
    TArray<FBlueprintOnlineUser> GetFriendList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateInputMode GetCurrentSlateInputMode() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FBlueprintOnlineUser> GetBPPartyMembers();
    
private:
    UFUNCTION(BlueprintCallable)
    void FocusAccountLinkingWidget(UUserWidget* Widget);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void CopyInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLinkEpicAccount(int32 LocalUserNum) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddRecent(const FString& PlayerId, const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddBlock(const FString& PlayerId, const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AcceptPartyInvitationFromPlayerExec(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AcceptFriendInvitationFromPlayerExec(const FString& PlayerId);
    
};

