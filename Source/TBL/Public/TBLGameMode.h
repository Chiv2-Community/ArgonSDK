#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameMode.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AutoBalancePlayerSwappingPriorityConfig.h"
#include "ClassLimitStruct.h"
#include "CleanupAbilityActorsDelegate.h"
#include "ControllerLogoutDelegate.h"
#include "EChatType.h"
#include "EFaction.h"
#include "EGameModeType.h"
#include "EPostMatchMatchmakingMode.h"
#include "HorseKilledDelegate.h"
#include "MatchComplete.h"
#include "OccupiedPlayerStart.h"
#include "PawnDownedDelegate.h"
#include "PawnRevivedDelegate.h"
#include "PendingSpawn.h"
#include "PlayerKilledDelegate.h"
#include "PlayerPossessedDelegate.h"
#include "RespawnStinger.h"
#include "ServerPerformanceHistory.h"
#include "SessionBannedPlayer.h"
#include "StageActorProgress.h"
#include "TeamBalanceConfig.h"
#include "TeamImbalanceTracker.h"
#include "Templates/SubclassOf.h"
#include "TBLGameMode.generated.h"

class AActor;
class AController;
class AGameModeModifier;
class AGameServerQuery;
class AHorse;
class APawn;
class APlayerController;
class ASpawnWave;
class ASpawner;
class ATBLAIController;
class ATBLActor;
class ATBLCharacter;
class ATBLGameScoringInfo;
class ATBLPlayerController;
class ATBLPlayerState;
class ATBLTeam;
class UBehaviorTree;
class UBlueprintDebugMenuComponent;
class UContextVOManager;
class UCurveFloat;
class UObject;
class USpawnQueuer;
class UTBLGameModeSettings;
class UUserWidget;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class ATBLGameMode : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTBLGameModeSettings> GameModeSettingsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATBLTeam>> Teams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATBLTeam> FFATeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction AttackingFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction DefendingFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHorse> DefaultHorseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBlueprintDebugMenuComponent> BlueprintDebugMenuComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeamlessTravelEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGameModeType::Type> GamemodeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGameModeType::Type> CreateGameModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstBotMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATBLGameScoringInfo> GameScoringClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATBLGameScoringInfo* GameScoringInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATBLActor* AlwaysOnMusicManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UContextVOManager* ContextVOManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USpawnQueuer>> SpawnQueuerClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USpawnQueuer*> SpawnQueuers;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlayerKilled OnPlayerKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHorseKilled OnHorseKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPawnRevived OnPawnRevived;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPawnDowned OnPawnDowned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlayerPossessed OnPlayerPossessed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCleanupAbilityActors CleanupAbilityActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPerfomedDeferredSpawnThisFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePlayerNamePlates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyShowNamesOnTeammates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFFAGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostGameSlomo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideHudImportantMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenLoadoutVolumeUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePrioritySpawnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseProximitySpawnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreClassLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SecondsBetweenWavesPlayerCountBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATBLAIController> AIControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* AIBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRespawnStinger FirstSpawnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRespawnStinger RespawnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MatchID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAnalyticsShutdown: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSessionBannedPlayer> SessionBannedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool BotBackfillEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 BotBackfillLowPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 BotBackfillLowBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 BotBackfillHighPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 BotBackfillHighBots;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleKickTimerSpectate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleKickTimerDisconnect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bHorseCompatibleServer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOpenLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespawnImmediately;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoggingAbilityEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OverrideAIObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchComplete MatchCompleteEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FServerPerformanceHistory ServerPerformanceHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGameModeModifier*> GameModeModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATBLPlayerController*> DebugDrawAllTracers;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerLogout OnControllerLogout;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerLogout OnControllerLogin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float AutoBalanceGracePeriodSeconds;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAutoDemoRecording;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAITestMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FString> Maplist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bUseMaplist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PostMatchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString ServerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString ServerIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 MapListIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FClassLimitStruct> ClassLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool AutoBalancePlayersByTeamNumbers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool AutoBalancePlayersByKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 TimeBetweenTeamKillBalanceChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 TimeBetweenPlayerNumBalanceChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 StartOfMatchGracePeriodForAutoBalance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 StartOfMatchGracePeriodForTeamSwitching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float MinimumKillsModifierForAutoBalance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float AutoBalanceKillRelevancyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float AutoBalanceKillThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 AutoBalanceTimeUntilForcedRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bSpectatorsCannotSendToAllChat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClientSideWeaponTracers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeEnteredWaitingToStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 MinPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float DesiredPlayersToStartPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float MinTimeBeforeStartingMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float MaxTimeBeforeStartingMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bManuallyStartMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePrepareMatchTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrepareMatchDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle PrepareMatchTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> GameModeWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EpilogueDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bUseStrictTeamBalanceEnforcement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FTeamBalanceConfig> TeamBalanceOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FTeamBalanceConfig> AutoBalanceOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FAutoBalancePlayerSwappingPriorityConfig> AutoBalancePlayerPriorityConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamImbalanceTracker TeamImbalanceTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool BlockVoteKicking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Victor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPendingSpawn> PendingPlayerSpawnQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastPlayerSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOccupiedPlayerStart> OccupiedPlayerStarts;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConfigWarmupTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* OverrideAIBehaviorTree;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> GoldAwardByTeamPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoldAwardTimePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> GoldMultiplierByDailyHour;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GoldMultiplierByDailyHourTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoldAwardByTimePeriodAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoldMaxFromPlaytimePerGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpMaxFromPlaytimePerGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpAwardTimePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> XpMultiplierByDailyHour;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double XpMultiplierByDailyHourTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpAwardByTimePeriodAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameModeXPMultiplier;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPostMatchMatchmakingMode PostMatchMatchmakingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PostMatchTravelString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadyToPostMatchTravel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameServerQuery* GameServerQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ATBLPlayerState*, EFaction> FriendsByFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool AutoBalanceWithFriendsBlocked;
    
public:
    ATBLGameMode();
    UFUNCTION(BlueprintCallable, Exec)
    void UpdatePS5MatchResponsibility(APlayerController* ExcludePlayer);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UpdateBotBackfill(int32 NewNumPlayers);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TBSSkipStage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TBSSetUseMapList(bool UseMapList);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TBSModifyTeamScore(int32 TeamId, int32 Score);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TBSManuallyStartGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TBSEndWarmup();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TBSEndGame(int32 WinningTeam);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TBSAddStageTime(float TimeMinutes);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Slomo(float T);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPS5MatchResponsiblePlayer(ATBLPlayerState* NewPlayerState);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPS5MatchId(const FString& NewPS5MatchId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSessionBan(FSessionBannedPlayer BannedPlayer);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveBots(bool bRemoveLevelBots, bool bRemoveBackfillBots);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerRequestNewTeam(AController* Controller, ATBLTeam* Team, bool bImmediatelySwitch);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerRequestBeginSpectating(AController* Controller);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayerReadyToSpawn(USpawnQueuer* SpawnQueuer, AController* Player, ASpawner* Spawner);
    
public:
    UFUNCTION(BlueprintCallable)
    void PerformDeferredSpawnRequest(FPendingSpawn DeferredSpawn);
    
private:
    UFUNCTION(BlueprintCallable)
    void PerformAutoBalancePriorToGameStart();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void OverrideAIBehavior(const FString& BehaviorTreeName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPCPossessedPawn(APawn* APawn);
    
private:
    UFUNCTION(BlueprintCallable)
    void NotifyStageStart(const FString& StageName, float TimeRemaining);
    
    UFUNCTION(BlueprintCallable)
    void NotifyStageEnd(EFaction WinningFaction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyRoundTimeOut();
    
public:
    UFUNCTION(BlueprintCallable)
    void KickByNetIdWithTimer(const FUniqueNetIdRepl& UniqueId, const FString& Reason, float BanTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KickByName(const FString& PlayerName, const FString& Reason, int32 BanTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KickById(const FString& PlayerId, const FString& Reason, float Time);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KickAllPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_HandleSkipStage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_HandlePrepareMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_HandleMatchIsWaitingToStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_HandleMatchHasStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UObject* K2_GetCurrentStage() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsValidHorseCompatibleServer();
    
    UFUNCTION(BlueprintCallable)
    bool IsSpawnWaveInQueue(const ASpawnWave* SpawnWave) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsAutoBalanceBlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitTeams();
    
    UFUNCTION(BlueprintCallable)
    void InitSpawnQueuers();
    
    UFUNCTION(BlueprintCallable)
    void HandleAIPossessedPawn(ATBLAIController* AIC, APawn* APawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetServerIdentifier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetServerDisplayName();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetNumberOfPlayersOnFaction(EFaction Faction, bool bRequirePlayerState) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UUserWidget> GetGameModeWidgetClass() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    float GetEpilogueDuration() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharacterPerformanceTestInfo(bool& IsRunningTest, int32& TestIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetAIObjectiveActors(ATBLCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USpawnQueuer* FindSpawnQueue(FName SpawnQueueName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableSpawningBots();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddMainMenuMessage(const FText& Message);
    
    UFUNCTION(BlueprintCallable)
    void ClearStageProgress(FStageActorProgress Progress);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearPS5MatchResponsiblePlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearPS5MatchId();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearAllObjectiveAITags();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastLocalizedChatForFaction(EFaction ReceivingFaction, const FText& Msg, TEnumAsByte<EChatType::Type> Type);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastLocalizedChat(const FText& Msg, TEnumAsByte<EChatType::Type> Type);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastChat(AActor* Sender, const FString& Msg, TEnumAsByte<EChatType::Type> Type, FColor OverrideColor);
    
    UFUNCTION(BlueprintCallable)
    void BeginEpilogue();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BanByName(const FString& PlayerName, int32 Hours, const FString& Reason);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BanById(const FString& PlayerId, int32 Hours, const FString& Reason);
    
    UFUNCTION(BlueprintCallable)
    void AwardVictory(EFaction InVictor, ATBLPlayerState* InPlayerVictor);
    
    UFUNCTION(BlueprintCallable)
    void AwardFFAVictory(ATBLPlayerState* InPlayerVictor);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AutoBalanceByPlayerKills();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AutoBalanceByNumPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddStageTime(float TimeMinutes);
    
    UFUNCTION(BlueprintCallable)
    void AddStageProgress(FStageActorProgress Progress);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddPlayerNullBots(int32 InNumBots);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddPlayerDummyBots(int32 InNumBots);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddPlayerBotsWhitelist(int32 InNumBots, const FString& WhiteListName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddPlayerBotsTrailerDefault(int32 InNumBots);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddPlayerBotsEx(int32 InNumBots, int32 Team, int32 Class, const FString& WhiteListName, TArray<FString> ExcludeCategories);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddPlayerBots(int32 InNumBots, TArray<FString> ExcludeCategories);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddNullBots(int32 InNumBots);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddDummyBots(int32 InNumBots);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddBotsEx(int32 InNumBots, int32 Team, int32 Class);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddBots(int32 InNumBots);
    
    UFUNCTION(BlueprintCallable)
    void ActuallyLeaveMap();
    
};

