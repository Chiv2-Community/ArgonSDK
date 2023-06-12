#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/OnlineReplStructs.h"
#include "CustomizationConstraintsQuery.h"
#include "CustomizationPreset.h"
#include "DamageTakenEvent.h"
#include "DeadCharacter.h"
#include "DeathRecap.h"
#include "DeathRecapEntry.h"
#include "DeathsChangedSignatureDelegate.h"
#include "EAudioClassType.h"
#include "EAudioPersonalityType.h"
#include "EFaction.h"
#include "EHardwarePlatform.h"
#include "InstigatedVote.h"
#include "KillsChangedSignatureDelegate.h"
#include "LevelUpResult.h"
#include "Loadout.h"
#include "NextSpawnTeamChangedSignatureDelegate.h"
#include "OnlineInventoryRefreshedDelegate.h"
#include "OnlineStatsGlobalRankChangedDelegate.h"
#include "OnlineStatsLevelUpDelegate.h"
#include "OnlineStatsLoginDelegate.h"
#include "OnlineStatsStatValueChangedDelegate.h"
#include "OnlineStatsUpdatedSignatureDelegate.h"
#include "OnlineStoreOnCurrencyChangedDelegate.h"
#include "PlatformChangedSignatureDelegate.h"
#include "ReplCustomizationPresetMapping.h"
#include "RespawnSpecialItem.h"
#include "ScoreChangedSignatureDelegate.h"
#include "ScoreEventByName.h"
#include "ScoreEventSignatureDelegate.h"
#include "ScoreEventStruct.h"
#include "StatEntry.h"
#include "TBLOnlineAccount.h"
#include "TBLOnlineStats.h"
#include "TBLPlayerStateInterface.h"
#include "TakedownsChangedSignatureDelegate.h"
#include "TeamChangedSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "TimeStampedDamageTakenEvent.h"
#include "TBLPlayerState.generated.h"

class AActor;
class AInventoryItem;
class ATBLCharacter;
class ATBLPlayerState;
class ATBLTeam;
class USkeletalMesh;

UCLASS(Blueprintable)
class ATBLPlayerState : public APlayerState, public ITBLPlayerStateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnlineStats, meta=(AllowPrivateAccess=true))
    FTBLOnlineStats OnlineStats;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineStatsUpdatedSignature OnlineStatsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineStatsLogin OnlineStatsLogin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineStatsLevelUp OnlineStatsLevelUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineStatsStatValueChanged OnlineStatsStatValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineStatsStatValueChanged OnlineStatsOriginalValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineStoreOnCurrencyChanged OnlineStoreOnCurrencyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineInventoryRefreshed OnlineInventoryRefreshed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelUpResult> CurrentMatchLevelUpResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnlineAccount, meta=(AllowPrivateAccess=true))
    FTBLOnlineAccount OnlineAccount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatEntry> RespawnStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRespawnSpecialItem RespawnSpecialItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RespawnConstructableActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATBLTeam* TeamBeforeBecameInactive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNextSpawnTeamChangedSignature OnNextSpawnTeamChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttachToProjectile, meta=(AllowPrivateAccess=true))
    AInventoryItem* AttachToProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* WaitForAttachToProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayFabOSSUniqueId, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayFabOSSUniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlatformOSSUniqueId, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlatformOSSUniqueId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Kills, meta=(AllowPrivateAccess=true))
    int32 Kills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Deaths, meta=(AllowPrivateAccess=true))
    int32 Deaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Assists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Takedowns, meta=(AllowPrivateAccess=true))
    int32 Takedowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GlobalRank, meta=(AllowPrivateAccess=true))
    int32 GlobalRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerScore, meta=(AllowPrivateAccess=true))
    int32 PlayerScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProjectilesFired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineStatsGlobalRankChanged OnGlobalRankChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTakedownsChangedSignature OnTakedownsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NextSpawnPawnSubclass, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATBLCharacter> NextSpawnPawnSubclass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPrimaryAssetId, EFaction> WhitelistAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString PartyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumInParty;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKillsChangedSignature OnKillsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDeathsChangedSignature OnDeathsChanged;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ATBLPlayerState>> DownCausingPlayers;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScoreChangedSignature ScoreChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FScoreEventSignature OnScoreEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATBLCharacter> CachedMeshClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction CachedMeshFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* CachedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> CachedMeshMorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> CachedGoreHeadMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsOnlineLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicateOnlineAccount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioClassType::Type> BotSelectedAssetsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCustomizationConstraintsQuery BotCustomizationQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameSparksUserId;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTeamChangedSignature OnTeamChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HasBeenAutoBalanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDeathRecap DeathRecap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCustomizationUploaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint8, FDeadCharacter> DeadCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 DeadCharacterId;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlatformChangedSignature OnPlatformChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeAutoBalanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsVIP: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PersonalityType, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioPersonalityType::Type> EquippedPersonalityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScoreEventByName> PlayerScoreEventsByText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTimeStampedDamageTakenEvent> DamageTakenEvents;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATBLCharacter> LastDeathRecapCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActualStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InactiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CustomizationNickName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowLoadoutDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastOutOfCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutOfCombatTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NextSpawnTeam, meta=(AllowPrivateAccess=true))
    ATBLTeam* NextSpawnTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Team, meta=(AllowPrivateAccess=true))
    ATBLTeam* Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsPlayerCustomizedBot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterClass, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATBLCharacter> CharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ATBLCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText LocalizablePlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Presets, meta=(AllowPrivateAccess=true))
    FReplCustomizationPresetMapping Presets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bMustSetLoadout, meta=(AllowPrivateAccess=true))
    bool bMustSetLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor AgathaDisplayColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor MasonDisplayColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor TenosiaDisplayColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor SpectatorDisplayColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FLoadout NextSpawnLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsNextSpawnLoadoutOverridden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TotalTeamDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TotalIdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FInstigatedVote> InstigatedVotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LastVotedOnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ClientPlatform, meta=(AllowPrivateAccess=true))
    EHardwarePlatform ClientPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATBLPlayerState*> FriendsList;
    
public:
    ATBLPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UploadPing();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerAutoBalanceEligibility(bool NewCanBeAutoBalanced);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDeadCharacters();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SyncScoreEvents(const TArray<FScoreEventByName>& ScoreEvents);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FScoreEventStruct> StatsGetPlayerScoreEvents();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerVIPStatus(bool IsVIP);
    
    UFUNCTION(BlueprintCallable)
    void SetPartyId(const FString& InPartyId);
    
    UFUNCTION(BlueprintCallable)
    void SetNumInParty(int32 inNumInParty);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFriend(bool IsFriend);
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerUploadPing(uint8 NewPing);
    
public:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerUpdateFriendStatus(ATBLPlayerState* MyFriend, bool IsFriend);
    
    UFUNCTION(BlueprintCallable)
    TArray<ATBLPlayerState*> ReturnListOfFriends(TArray<ATBLPlayerState*> PlayerStates);
    
    UFUNCTION(BlueprintCallable)
    void ResetPartyId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Team();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Takedowns();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Presets();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayFabOSSUniqueId();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerScore();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlatformOSSUniqueId();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PersonalityType();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_OnlineStats();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OnlineAccount();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_NextSpawnTeam();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_NextSpawnPawnSubclass();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Kills();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GlobalRank();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Deaths();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ClientPlatform();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterClass();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bMustSetLoadout();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachToProjectile();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnDamaged(const FDamageTakenEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void LocalPlayerPartyLeft(const bool Result);
    
    UFUNCTION(BlueprintCallable)
    void LocalPlayerPartyInviteAccepted(const FString& NewPartyId);
    
    UFUNCTION(BlueprintCallable)
    void LocalPlayerPartyDisbanded();
    
    UFUNCTION(BlueprintCallable)
    void LocalPlayerPartyCreated(const bool Result, const FString& NewPartyId);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsInParty();
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerVIPStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EAudioPersonalityType::Type> GetPersonalityType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPartyId() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumInParty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFriend() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    FLinearColor GetDisplayColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDeathRecapEntryForTakeDowner(FDeathRecapEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDeathRecapEntryForKiller(FDeathRecapEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDeathRecapEntry> GetDeathRecapEntries();
    
    UFUNCTION(BlueprintCallable)
    ATBLCharacter* GetDeadCharacter(uint8 ID);
    
    UFUNCTION(BlueprintCallable)
    EHardwarePlatform GetClientHardwarePlatform();
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<ATBLCharacter> GetCharacterClass(bool& IsDead, bool& IsSpectating);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void GetAllPresetsAsArray(TArray<FCustomizationPreset>& OutPresets);
    
    UFUNCTION(Client, Reliable)
    void ClientScoreOverrideEvent(FName RowName, int32 ScoreAmount, ATBLPlayerState* Killed, int16 NoveltyScoreRowIndex);
    
    UFUNCTION(Client, Reliable)
    void ClientScoreEvent(FName RowName, int32 ScoreAmount, ATBLPlayerState* Killed, int32 Bonuses, int16 NoveltyScoreRowIndex);
    
    UFUNCTION(Client, Reliable)
    void ClientScoreCurveEvent(FName RowName, int32 ScoreCurveAmount, int32 ScoreAmount, ATBLPlayerState* Killed, int16 NoveltyScoreRowIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientForceReplicate();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBlockInput(bool BlockInput);
    
    UFUNCTION(BlueprintCallable)
    bool CanBeAutoBalanced();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastStatsLevelUp(TArray<FLevelUpResult> NewLevelUpResults);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastPauseRagdolls(bool bPaused);
    
    UFUNCTION(BlueprintCallable)
    void AddDeadCharacter(uint8 ID, ATBLCharacter* InCharacter, bool bSpawnedHead);
    
    
    // Fix for true pure virtual functions not being implemented
};

