#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AKAudioStartStopStruct.h"
#include "CinematicGameStateChangedDelegate.h"
#include "CinematicPlayingStateBegunDelegate.h"
#include "ClassLimitStruct.h"
#include "DeathDamageTakenEvent.h"
#include "DeathEvent.h"
#include "ECinematicGameState.h"
#include "EFaction.h"
#include "EGameModeType.h"
#include "EObjectivePointCategory.h"
#include "EpicEndGameState.h"
#include "GameModeMessage.h"
#include "GameStatePlayerKilledDelegate.h"
#include "MatchEndedSignatureDelegate.h"
#include "MatchStartedSignatureDelegate.h"
#include "MatchStateChangedDelegate.h"
#include "MatchWonBySignatureDelegate.h"
#include "NewCharacterSpawnedDelegate.h"
#include "NewObjecitveContextMessageDelegate.h"
#include "ObjectiveContextMessage.h"
#include "ObjectivePointEntry.h"
#include "PS5MatchIdUpdatedDelegate.h"
#include "PlayerStateAddedDelegate.h"
#include "PlayerStateArray.h"
#include "PlayerStateKillsUpdatedDelegate.h"
#include "PlayerStateRemovedDelegate.h"
#include "PlayerStateUniqueIdReplicatedDelegate.h"
#include "PostMatchEndTimeChangedDelegate.h"
#include "ReplSequenceBinding.h"
#include "ReplicatedSubobjectInterface.h"
#include "RespawnStinger.h"
#include "ServerTornOffItem.h"
#include "StageActorProgress.h"
#include "StartEpicEndGameEventSignatureDelegate.h"
#include "TeamScoreEvent.h"
#include "Templates/SubclassOf.h"
#include "TBLGameState.generated.h"

class AActor;
class AController;
class AInventoryItem;
class ALevelSequenceActor;
class AOutOfCombatZoneAuthority;
class ASpawner;
class ATBLCharacter;
class ATBLPlayerController;
class ATBLPlayerState;
class ATBLTeam;
class IStageInterface;
class UStageInterface;
class UDamageSource;
class UDataTable;
class ULocalMessage;
class UObject;
class UUserWidget;
class UVotingManagerComponent;

UCLASS(Blueprintable)
class ATBLGameState : public AGameState, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<ATBLTeam*> Teams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLTeam* FFATeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATBLTeam> NeutralTeamClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GameModeType, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGameModeType::Type> GamemodeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GameModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText ServerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Victor, meta=(AllowPrivateAccess=true))
    EFaction Victor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ATBLPlayerState* PlayerVictor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float FinalMatchDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString NextMapName;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMatchStartedSignature OnMatchStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMatchEndedSignature OnMatchEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMatchWonBySignature OnMatchWonBy;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCinematicPlayingStateBegun OnPlayingStateBegun;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameStatePlayerKilled OnPlayerKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlayerStateAdded OnPlayerStateAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlayerStateRemoved OnPlayerStateRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlayerStateUniqueIdReplicated OnPlayerStateUniqueIdReplicated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlayerStateKillsUpdated OnPlayerStateKillsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNewCharacterSpawned OnCharacterSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FStartEpicEndGameEventSignature OnEpicEndGameEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEpicEndGameState EpicEndGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float StageEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float StageStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FStageActorProgress> StageProgressList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ServerTimeDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bDisablePlayerNamePlates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bOnlyShowNamesOnTeammates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsGameModeFFA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bDisableTeamSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bHideHudImportantMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MinRespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 PlayersNeededToStartEarly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MinPlayersToStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ULocalMessage> GameplayEventMessageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bClientSideWeaponTracers: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBadNetworkPerformance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBadFrameTimePerformance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bServerBadFrameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUseOpenLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ProgressBarPrimaryTeamIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ClassLimits, meta=(AllowPrivateAccess=true))
    TArray<FClassLimitStruct> ClassLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GameScoringDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UDataTable* TeamScoreFormatDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NoveltyScoreDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRespawnStinger FirstSpawnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRespawnStinger RespawnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FObjectivePointEntry> ObjectivePointArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamScoreEvent MostRecentTeamScoreEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bUsingNewSpawnSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CinematicState, meta=(AllowPrivateAccess=true))
    ECinematicGameState CinematicState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCinematicGameStateChanged OnCinematicGameStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* DefenderCinematicSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* AttackerCinematicSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SequenceBindings, meta=(AllowPrivateAccess=true))
    TArray<FReplSequenceBinding> ReplicatedSequenceBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ServerCinematicStartTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMatchStateChanged OnMatchStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FGameModeMessage> StagePersistentGameModeMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StageEndingMusic, meta=(AllowPrivateAccess=true))
    FAKAudioStartStopStruct StageEndingMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FactionContextObjectiveMessage, meta=(AllowPrivateAccess=true))
    FObjectiveContextMessage ContextObjectiveMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewObjecitveContextMessage OnNewObjectiveContextMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVotingManagerComponent* VotingManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSpawningBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostMatchEndTimeChanged OnPostMatchEndTimeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PS5MatchId, meta=(AllowPrivateAccess=true))
    FString PS5MatchId;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPS5MatchIdUpdated OnPS5MatchIdUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PS5MatchResponsiblePlayer, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PS5MatchResponsiblePlayer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float WarmupEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float PreparingMatchEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PostMatchEndTime, meta=(AllowPrivateAccess=true))
    float PostMatchEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float PostMatchMatchmakingStartTimeServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bBlockVoteKicking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasNotifiedAboutWaitingToStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDelayGarbageCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOutOfCombatZoneAuthority*> ZoneAuthorities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, AInventoryItem*> TornOffItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FServerTornOffItem> ServerTornOffItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FPlayerStateArray> CurrentPlayersInParties;
    
public:
    ATBLGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowLoadoutOnPreparingMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowLoadoutOnFirstDeath();
    
    UFUNCTION(BlueprintCallable)
    void SetStageTimeRemaining(float TimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetStageEndingMusic(FAKAudioStartStopStruct Music);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveContextText(FObjectiveContextMessage NewContextObjectiveMessage);
    
    UFUNCTION(BlueprintCallable)
    void SetGameModeType(TEnumAsByte<EGameModeType::Type> InGameModeType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCinematicMode(ECinematicGameState State, ALevelSequenceActor* DefenderSequence, ALevelSequenceActor* AttackerSequence);
    
    UFUNCTION(BlueprintCallable)
    void ResetStagePersistentGameModeMessages();
    
    UFUNCTION(BlueprintCallable)
    void RemoteStageEndingMusic();
    
    UFUNCTION(BlueprintCallable)
    void PlayerKilled(AController* Killer, AController* Killed, UDamageSource* DamageSource, FDeathEvent DeathEvent, const FDeathDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlayCinematicsWithBinding(ALevelSequenceActor* DefenderSequence, ALevelSequenceActor* AttackerSequence, TMap<ASpawner*, FString> InSpawnerPrefixes);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Victor();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StageEndingMusic();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SequenceBindings();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PS5MatchResponsiblePlayer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PS5MatchId();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PostMatchEndTime();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_GameModeType();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FactionContextObjectiveMessage();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ClassLimits();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CinematicState();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void NotifyCinematicStartedPlayingTryBinding();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitingForMinPlayersToStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitingForAdminToStart();
    
    UFUNCTION(BlueprintCallable)
    bool IsServerBadFrameTime();
    
    UFUNCTION(BlueprintCallable)
    bool IsPostMatch();
    
    UFUNCTION(BlueprintCallable)
    bool IsMatchWaitingToStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentStage(AActor* Stage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWarmupTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATBLTeam* GetTeamWithFaction(EFaction Faction) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    int32 GetSubClassMaxCount(UObject* WorldContextObject, TSubclassOf<ATBLCharacter> CharacterClass, EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSubClassCount(TSubclassOf<ATBLCharacter> CharacterClass);
    
    UFUNCTION(BlueprintCallable)
    float GetStageTimeRemaining();
    
    UFUNCTION(BlueprintCallable)
    TArray<EFaction> GetSpawnableTeams(ATBLPlayerState* LocalPlayerState);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<ATBLCharacter>> GetSpawnableClasses(ATBLPlayerState* LocalPlayer, EFaction Faction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetServerTimeDifference();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPreparingMatchTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable)
    float GetPostMatchTimeRemaining();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumObjectivePointsByCategory(EFaction Faction, TEnumAsByte<EObjectivePointCategory::Type> Category);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLocalPostMatchMatchmakingStartTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UUserWidget> GetGameModeWidgetClass() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameModeEpilogueDuration() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TScriptInterface<IStageInterface> GetCurrentStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCinematicPlaybackTime();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    int32 GetArchetypeMaxCount(UObject* WorldContextObject, TSubclassOf<ATBLCharacter> CharacterClass, EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    int32 GetArchetypeCount(TSubclassOf<ATBLCharacter> CharacterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ConvertServerTimeToLocalTime(float ServerTime);
    
    UFUNCTION(BlueprintCallable)
    int32 CalculateEndOfMatchCommodity(ATBLPlayerController* Player, const FString& Key);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void BroadcastSetEpicEndGameState(const FEpicEndGameState& InEpicEndGameState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastPlayerKilled(FDeathEvent DeathEvent);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastLastTeamScoreEvent(FTeamScoreEvent TeamScoreEvent);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastDestroyTornOffItem(FName TornOffName);
    
    UFUNCTION(BlueprintCallable)
    void AddStagePersistentGameModeMessages(TArray<FGameModeMessage> NewMessages);
    
    UFUNCTION(BlueprintCallable)
    void AddObjectivePointEvent(EFaction Faction, int32 PointValue, TEnumAsByte<EObjectivePointCategory::Type> Category);
    
    
    // Fix for true pure virtual functions not being implemented
};

