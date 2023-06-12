#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/InputComponent.h"
#include "Engine/PlatformInterfaceBase.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/OnlineReplStructs.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "GameplayTaskOwnerInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystem -ObjectName=OnlineStoreOffer -FallbackName=OnlineStoreOffer
#include "AcknowledgeTeamRequestSignatureDelegate.h"
#include "AllowedCharactersChangedDelegate.h"
#include "AutoBalanceNotificationReceivedDelegate.h"
#include "BlockedAttackSignatureDelegate.h"
#include "CameraTargetParams.h"
#include "CausedDamageSignatureDelegate.h"
#include "ClientPostMatchInfo.h"
#include "CounteredAttackSignatureDelegate.h"
#include "CustomizationEntry.h"
#include "CustomizationMap.h"
#include "DamageTakenEvent.h"
#include "DamageTakenEventCompressed.h"
#include "DeathDamageTakenEvent.h"
#include "DeathEvent.h"
#include "DeathRecap.h"
#include "DeathRecapReplicatedSignatureDelegate.h"
#include "DebugProjectileHit.h"
#include "DebugReliableRPC.h"
#include "DebugSpectatorCamera.h"
#include "EAudioClassType.h"
#include "EAudioPersonalityType.h"
#include "EChatType.h"
#include "EDefenderBlockedPolicy.h"
#include "EFaction.h"
#include "EGlobalGameNotificationCategory.h"
#include "EHardwarePlatform.h"
#include "EInventoryItemSlot.h"
#include "EInventorySlot.h"
#include "EOnlineStat.h"
#include "EPlayerReportCategory.h"
#include "EVOType.h"
#include "EWeaponTag.h"
#include "GameModeMessage.h"
#include "GameModeMessageReceivedDelegate.h"
#include "GameViewportLostFocusDelegate.h"
#include "GameViewportReceivedFocusDelegate.h"
#include "GlobalGameNotificationDelegate.h"
#include "GotKeybindKeyDelegate.h"
#include "JoinWaveResponseDelegate.h"
#include "JoinableSpawnWavesUpdatedDelegate.h"
#include "Loadout.h"
#include "MatchSessionComplete.h"
#include "NextSpawnWaveDelegate.h"
#include "ObjectiveContextMessage.h"
#include "ObjectiveMessage.h"
#include "OfflineAnalyticsEvent.h"
#include "OnClearPlayerMessageRequestDelegate.h"
#include "OnClientPreTravelDelegate.h"
#include "OnEnteredLeftLoadoutVolumeSignatureDelegate.h"
#include "OnHealingAppliedToCharacterDelegate.h"
#include "OnLookInputUpdatedSignatureDelegate.h"
#include "OnLookRateInputUpdatedSignatureDelegate.h"
#include "OnObjectiveZonesVisiblityChangedDelegate.h"
#include "OnPlayerCausedFallDamageDelegate.h"
#include "OnPlayerCustomizationsLoadedDelegate.h"
#include "OnPlayerEnteredOutOfCombatAreaDelegate.h"
#include "OnPlayerExitedOutOfCombatAreaDelegate.h"
#include "OnPlayerKickedDelegate.h"
#include "OnPlayerRevivedDelegate.h"
#include "OnPlayerUsedItemDelegate.h"
#include "OnPossessedAutoVo.h"
#include "OnProcessPlayerInputDelegate.h"
#include "OnProfileDataLoadedDelegate.h"
#include "OnPromptPlayerMessageReplyDelegate.h"
#include "OnPromptPlayerMessageRequestDelegate.h"
#include "OnReceivedLocalMessageDelegate.h"
#include "OnReceivedPendingSpawnDelegate.h"
#include "OnRepAutomaticallyChooseSpawnWaveDelegate.h"
#include "OnRepPlayerStateDelegate.h"
#include "OnSpectatorPawnDestroyedDelegate.h"
#include "OnToggleCameraDelegate.h"
#include "OnToggleControlMapDelegate.h"
#include "OnVotingStartedSignatureDelegate.h"
#include "OnZoomDisabledDelegate.h"
#include "OnZoomEnabledDelegate.h"
#include "OwnershipResponse.h"
#include "PerMinuteBucket.h"
#include "PlayerControllerPostProcessInputSignatureDelegate.h"
#include "PossessedPawnSignatureDelegate.h"
#include "PurchaseItemCompletedDelegate.h"
#include "ReplicatedSubobjectInterface.h"
#include "ReplicationPredictionState.h"
#include "SavedClassUnavailableDelegate.h"
#include "SavedLoadout.h"
#include "SavedSubclass.h"
#include "SelfCameraProperties.h"
#include "ServerApprovedLoadoutSignatureDelegate.h"
#include "SoundSwitchEntry.h"
#include "SpawningAtSpawnerDelegate.h"
#include "SpectatorSwitchSignatureDelegate.h"
#include "StoreOfferItem.h"
#include "SwatchSelection.h"
#include "TBLOnlineStats.h"
#include "TBLPlayerControllerInterface.h"
#include "TBLQualityLevels.h"
#include "TakenBlockDamageSignatureDelegate.h"
#include "TakenDamageSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "TBLPlayerController.generated.h"

class AAbilityInvocation;
class AActor;
class AForwardSpawnWave;
class AInventoryItem;
class APawn;
class APlayerState;
class ASpawnWave;
class ASpawner;
class ATBLCharacter;
class ATBLPlayerState;
class ATBLTeam;
class UAkAudioEvent;
class UAkComponent;
class UCTBase;
class UCampaignList;
class UCineCameraComponent;
class UCinematicsComponent;
class UCloudMutedPlayers;
class UCloudViewedItems;
class UCurveFloat;
class UDataTable;
class UDefaultWeaponCustomization;
class UFlavorStats;
class UGameplayTasksComponent;
class UInputComponent;
class UInputReplayComponent;
class UItemPreVisualizationInterfaceHelper;
class ULoadoutSelection;
class UMovementDebugger;
class UObject;
class UQuestPool;
class UTBLCampaignsCachedData;
class UTBLPS5BlockingHaptics;
class UTBLPS5DamageHaptics;
class UTBLPS5GeneralHaptics;
class UTBLPS5RangedWeaponHaptics;
class UTBLPS5SiegeEngineHaptics;
class UTBLPlayerInput;
class UTBLQuestsCachedData;
class UTBLScreenManager;
class UVotingInstance;

UCLASS(Blueprintable)
class ATBLPlayerController : public APlayerController, public IGameplayTaskOwnerInterface, public ITBLPlayerControllerInterface, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTasksComponent* GameplayTasksComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplicationPredictionState PredictionState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnRepPlayerState OnPlayerStateReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayingPrologue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPossessedPawnSignature OnPossessedPawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPossessedPawnSignature OnClientPossessedPawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNextSpawnWave NextSpawnWaveReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadout NextSpawnLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShuffleLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartedForceRespawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCausedDamageSignature OnCausedDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTakenDamageSignature OnTakenDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBlockedAttackSignature OnBlockedAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCounteredAttackSignature OnCounteredAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTakenBlockDamageSignature OnBlockDamageTaken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float TeamDamage30SecThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float TeamDamage2MinThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float BotTeamDamageScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 TeamDamageWarningLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FServerApprovedLoadoutSignature OnServerApprovedLoadout;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSavedClassUnavailable OnSavedClassUnavailable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnProcessPlayerInput OnProcessPlayerInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZoomEnabled OnZoomEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZoomDisabled OnZoomDisabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedLocalMessage OnReceivedLocalMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPurchaseItemCompleted OnPurchaseCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAcknowledgeTeamRequestSignature OnAcknowledgedTeamRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATBLCharacter> DefaultClassChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATBLCharacter> SavedClassChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedSubclass> SavedSubclassChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedLoadout> LoadoutPerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReceivedInitialLoadouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAwaitingInitialRequestedPlayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> UncheckedLevelUpItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShufflingLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bAutoSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bAltAttackWithMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bAccessAllItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bShowPlayerListOnStartupInOverview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerHasAcceptedNDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerHasPlayedTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerHasAcceptedPurchaseDisclaimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastReadDeveloperMessageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bPlayerOpenedTutorial;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LoginTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastPingTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameModeMessageReceived GameModeMessageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAutoBalanceNotificationReceived AutoBalanceNotificationReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggleCamera OnToggleCamera;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggleControlMap OnToggleControlMap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDeathRecapReplicatedSignature OnDeathRecapReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceRotationInputWasNonZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlayerControllerPostProcessInputSignature OnPlayerControllerPostProcessInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnLookInputUpdatedSignature OnLookInputUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnLookRateInputUpdatedSignature OnLookRateInputUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMyParryBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowOtherParryBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraTargetParams DeathCameraTargetParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventoryItem* DecapHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSpeaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* SelfCameraInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerIsWaitingToEnterSpectatorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerSelectedSpectatorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstTimeSpectating;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpectatorSwitchSignature OnPlayerSelectedSpectatorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoadoutScreenOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsHeadlessClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputReplayComponent* InputReplayComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnEnteredLeftLoadoutVolumeSignature OnEnteredLeftLoadoutVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SavedFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastVFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTravelling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bIdleWarned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTBSDevMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVotingStartedSignature OnVotingStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayDebugScrollY;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNextSpawnWave RequestedToJoinSpawnWave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoinWaveResponse OnReceivedSpawnWaveJoinResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bAutomaticallyChooseSpawnWave, meta=(AllowPrivateAccess=true))
    uint8 bAutomaticallyChooseSpawnWave: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRepAutomaticallyChooseSpawnWave AutomaticallyChooseSpawnWaveReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* LastPossessedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CheatsEnabled, meta=(AllowPrivateAccess=true))
    uint8 bCheatsEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpawner* NextSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpawner* ClientSpawnerStartAllowingControl_PendingSpawner;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSpawningAtSpawner OnGoingToSpawnAtSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpawner* CurrentPendingSpawner;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnReceivedPendingSpawn OnReceivedPendingSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCinematicsComponent* CinematicsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTBLPS5BlockingHaptics> PS5BlockingHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTBLPS5DamageHaptics> PS5PlayerDamageTakenHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTBLPS5RangedWeaponHaptics> PS5PlayerRangedWeaponHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTBLPS5GeneralHaptics> PS5PlayerGeneralHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTBLPS5SiegeEngineHaptics> PS5PlayerSiegeEngineHaptic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameViewportLostFocus OnGameViewportLostFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameViewportReceivedFocus OnGameViewportReceivedFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FSoundSwitchEntry> HighPriorityAKSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FSoundSwitchEntry> PlayerExertionAKSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FSoundSwitchEntry> LowPriorityAKSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FSoundSwitchEntry> WeaponAkSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FString> WeaponNameStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FString> ArmourTypeStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FString> WeaponActionNameStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FString> CombatStateStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* CharacterSoundDummy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventoryItem* WeaponSoundDummy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerEnteredOutOfCombatArea OnLocalPlayerEnteredOutOfCombatArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerExitedOutOfCombatArea OnLocalPlayerExitedOutOfCombatArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveZonesVisiblityChanged OnObjectiveZonesVisiblityChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetType VOBankAssetType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGotKeybindKey OnGotKeybindingKey;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoinableSpawnWavesUpdated OnJoinableSpawnWavesUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NextSpawnWave, meta=(AllowPrivateAccess=true))
    ASpawnWave* NextSpawnWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MinimumSpawnDelayOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableHUDPostProcess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPromptPlayerMessageRequest OnPromptPlayerMessageRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClearPlayerMessageRequest OnClearPlayerMessageRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPromptPlayerMessageReply OnPromptPlayerMessageReply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugReliableRPC> DebugReliableRPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* WaitingForSpawnGoreHead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerUsedItem OnPlayerUsedItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerRevived OnPlayerRevived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerCausedFallDamage OnPlayerCausedFallDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerRevived OnRevivedOtherPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPostMatchMatchmaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsReadyToPostMatchMatchmakingTravel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PostMatchMatchmakingConnectString;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGlobalGameNotification OnReceivedGlobalGameNotification;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealingAppliedToCharacter OnHealingAppliedToCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemPreVisualizationInterfaceHelper* ItemPreVisualizationHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLPlayerState* PlayerToCommendOrForgive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LastClientSetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugProjectileHit DebugProjectileHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugProjectileHit DebugFakeProjectileHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerCustomizationsLoaded OnCustomizationsLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProfileDataLoaded OnProfileDataLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientPreTravel OnClientPreTravel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerKicked OnPlayerKicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpectatorPawnDestroyed OnSpectatorPawnDestroyed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplaySwingThroughInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugTracers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawClientDebugTracers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugTracerCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugTracerDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugWeaponTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugParryHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugTracersClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugMeleeHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugVisibilityCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugFacingCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugBackSwingCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugHorseImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugRangedInaccuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DrawDebugSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bDrawDebugSpectatorCamera: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FDebugSpectatorCamera> DebugSpectatorCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugIgnoreAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMatchSessionComplete MatchSessionComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextSpawnTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSelfCameraProperties SelfCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAkComponent*> DebugAkComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float SpamCheckPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 SpamCheckPeriodMaxMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float SpamMuteDurationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float SpamMuteDurationIncreasePerMute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float SpamMuteDurationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SpamMutedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SpamMutedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> SpamCheckPreviousMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SpamCheckIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* CustomizationCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThirdPersonFOVCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastInputTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LastControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* LastReplicatedPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCineCameraComponent> CinematicSpectatorCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayDebugScrollDir;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestPool* QuestPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCampaignList* CampaignList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTBLQuestsCachedData* QuestsCachedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTBLCampaignsCachedData* CampaignsCachedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOfLastDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAllowedCharactersChanged AllowedCharactersChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATBLCharacter>> PreviousAllowedCharacterClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* PossesedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator ControlRotationBeforePossession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPossessionInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultWeaponIdsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAkComponent*> ThisWorldListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float DisableAimedAtSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float MaxDistanceToHearSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LongBowAimCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATBLCharacter* TargetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizationMap> PlayerSavedCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ViewedGameUpdateVersions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDefaultWeaponCustomization* DefaultWeaponsCustomizationsAg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDefaultWeaponCustomization* DefaultWeaponsCustomizationsMa;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDefaultWeaponCustomization* DefaultWeaponsCustomizationsTe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* AimAssistTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistPreviousTargetBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayerCustomizationReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> OnlineInventoryCommodities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> CommoditiesEarnedInMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCloudViewedItems* CloudViewedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFlavorStats* FlavorStatsPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCloudMutedPlayers* CloudMutedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOnPossessedAutoVo> OnPossessedAutoVoList;
    
public:
    ATBLPlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void VoteStarted(UVotingInstance* VotingInstance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void VOIPSetRemoteVolumeExec(float Volume);
    
    UFUNCTION(BlueprintCallable, Exec)
    void VOIPMuteLocalExec(bool Mute);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> VOIPGetTalkingNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> VOIPGetTalkingIds();
    
    UFUNCTION(BlueprintCallable, Exec)
    void VOIPGetTalkingExec();
    
public:
    UFUNCTION(BlueprintCallable)
    void VerifyCustomizationOnlineOwnership(bool bOnOnlineStatsLoaded);
    
    UFUNCTION(BlueprintCallable)
    void UpdateVoiceStateForAllPlayers();
    
    UFUNCTION(BlueprintCallable)
    void UpdateUncheckedItems();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSelfCamera();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void UnPrepareAllVOEVents();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnloadBank(const FString& BankName);
    
    UFUNCTION(BlueprintCallable)
    void ToggleIgnoreAI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleHud();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGhostCameraMode();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleGhost();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleFriendlyMarkers();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleCameraKeyReleased();
    
    UFUNCTION(BlueprintCallable)
    void ToggleCameraKeyPressed();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ToggleAutospawn(bool bEnabled, bool bLeaveCurrentWave);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void TestBadTravel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToMe();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void TeamSay(FString& Msg);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TeamAppliedToPlayer(ATBLTeam* Team);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void TBLClientSetControlRotation(FRotator ClientRotation);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void SyntheticInput_Movement(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SyntheticInput_AI(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SyntheticInput_Actions(bool bEnable);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SwitchToSpectator();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SwitchToSelfCamera();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SwitchTeam(int32 RequestedTeamIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SwitchClass(int32 RequestedClassIndex, int32 RequestedSubclassIndex);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void Suicide();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopSoundAllSounds(UAkAudioEvent* Sound);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void StopCameraShake(FName CameraShakeName);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void StopAnalytics();
    
    UFUNCTION(BlueprintCallable)
    void StartTeamSayChat();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartRangedWeaponWarning(float DrawStrength, AInventoryItem* DrawnWeapon, FName AttackName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartLastChannelChat();
    
    UFUNCTION(BlueprintCallable)
    void StartAllSayChat();
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnWaveNoLongerJoinable(ASpawnWave* Wave);
    
    UFUNCTION(BlueprintCallable)
    UMovementDebugger* SpawnMovementDebugger();
    
    UFUNCTION(BlueprintCallable)
    void ShuffleLoadout(bool bShouldShuffle);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowOtherParryBoxes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowMyParryBox();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowMessageDialog(FText Message);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowIngameMenu();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDrawVisibilityCheck() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDrawFacingCheck() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDrawDebugWeaponTip() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDrawDebugTracers() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDrawDebugTracerDirection() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDrawDebugTracerCache() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDrawDebugShield() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDrawDebugRangedInaccuracy() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDrawDebugProjectile() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDrawDebugParryHit() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDrawDebugMeleeHit() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDrawDebugHorseImpact() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDrawClientDebugTracers() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDrawCamera() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDrawBackSwingCheck() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDisplaySwingThroughInfo() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDisplayNDA();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldClearDebugTracers() const;
    
    UFUNCTION(BlueprintCallable)
    void SetupCameraTargetOnDeath(APawn* P, FName AttachSocketName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetStatOriginal(const FString& StatType, int32 StatValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetStatFloat(const FString& StatName, float StatValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetStat(const FString& StatName, int32 StatValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSpectatorCamera();
    
    UFUNCTION(BlueprintCallable)
    void SetShowPlayerListOnStartupInOverview(bool bShow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetRegionPingExec(const FString& Region, int32 Ping);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomLoadout(FLoadout& Loadout);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayingPrologue(bool bInPlayingPrologue);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerHasPlayedTutorial();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerHasAcceptedPurchaseDisclaimer();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerHasAcceptedNDA();
    
    UFUNCTION(BlueprintCallable)
    void SetNewCustomizationForPawn(const TArray<FSwatchSelection>& Swatches, APawn* Char, EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    void SetNewCustomizationForCurrentPawn(const TArray<FSwatchSelection>& Swatches);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimumSpawnDelayOverride(float InMinimumSpawnDelayOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadout(TSubclassOf<ATBLCharacter> RequestedSubclass, FLoadout RequestedLoadout);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetListenerEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetLastReadDeveloperMessageTime(FDateTime ReadDeveloperMessageTime);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetHudVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCameraShakeProperty(FName CameraShakeName, FName PropertyName, const FString& Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCameraRotation(float Pitch, float Yaw, float Roll);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCameraProperty(FName PropertyName, const FString& Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCameraOffset(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAutoSprint(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAltAttackWithMovement(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllRegionPingExec(int32 Ping);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void SetAimedAtSoundEnabled(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAimedAtMaxDistance(float Distance);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdateAimedAtCharacters(const TArray<TWeakObjectPtr<ATBLCharacter>>& Characters);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleAutospawn(bool bEnabled, bool bLeaveCurrentWave);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTeleportPawnsToMe(ATBLCharacter* pTargetCharacter);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTBSActivateDevMode(bool bActivate);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSwitchToSpectator();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSuicide();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitVote(UVotingInstance* VotingInstance, FName Vote);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitPlayerPostGameFeedback(int32 StarRating);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopAnalytics();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnGoreHead(ATBLPlayerState* InPlayerState, uint8 DeadCharacterId, const FVector_NetQuantize& Location, const FVector_NetQuantize& Rotation, const FVector_NetQuantize& Impulse);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerShowDebugCapture(bool bActive, FName Category);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetSyntheticInputMovement(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetSyntheticInputAI(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetSyntheticInputActions(bool bEnable);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetSpectatorCamera();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPS5MatchId(const FString& NewPS5MatchId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerCustomization(const TArray<FCustomizationMap>& PlayerCustomization, ATBLPlayerState* PS);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPlatformOSSUniqueId(const FUniqueNetIdRepl& UniqueIdRepl);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPartyId(const FString& PartyId);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetLoadout(TSubclassOf<ATBLCharacter> RequestedSubclass, FLoadout RequestedLoadout);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetInitialLoadouts(const TArray<FSavedLoadout>& Loadouts);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetHardwarePlatform(EHardwarePlatform Platform);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetForFFAPlayer();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAimAssistTarget(AActor* NewAimAssistTarget, int32 NewAimAssistTargetBoneIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAimAssistCorrectionParams(int32 NewAimAssistCorrectionMaxPredictionOffset, int32 NewAimAssistCorrectionMaxAngle, int32 NewAimAssistCorrectionMaxOffset);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendPostMatchInfo(FClientPostMatchInfo PostMatchInfo, const TArray<FPerMinuteBucket>& PerMinuteBuckets);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendOfflineAnalyticsEvent(FOfflineAnalyticsEvent LocalAnalyticsEvent);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendMatchProfile(const FString& Nickname, const FString& MachineId, const FString& MachineName, const FString& OperatingSystemId, const FString& CommandLine, FTBLQualityLevels ScalabilitySettings);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendEquippedPersonality(TEnumAsByte<EAudioPersonalityType::Type> PersonalityType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ServerSay(FString& Msg);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerResetPartyId();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerResetIdleTime();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestNextSpawnTeam(EFaction RequestedFaction, bool bImmediatelySwitch);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestExit();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestAnalyticsStop();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestAnalyticsStart(const FString& DataName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReportPlayer(APlayerState* ReportedPlayer, const EPlayerReportCategory ReportCategory, const FString& ReportDescription);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReliableSetPlayingPrologue(bool bInPlayingPrologue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRejectSpawnWave(ASpawnWave* Wave);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRegisterAsHeadlessClient();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPropertyDebugger();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPromptPlayerMessageReply(int32 MessageId, bool Response);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void ServerPrintAllDefaultCustomizationItems();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOverrideSwatchIndex(EInventorySlot Slot, int32 SwatchOverrideIndex);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnLoadoutScreenState(bool DidOpen);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyDoneTravelling();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMovementDebuggerLoadFile(FName Filename);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMovementDebugger();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLeaveSpawnWave(ASpawnWave* Wave);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerJoinSpawnWave(ASpawnWave* Wave, bool bFromAutoSpawn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerForgivePlayer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerForceSelfAutobalance();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerForceImmediateSpawn();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDrawWeaponTip(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDrawVisibilityCheck(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDrawTracers(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDrawTracerDirection(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDrawSpectatorCamera(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDrawShield(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDrawProjectile(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDrawParryHit(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDrawHorseImpact(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDrawFacingCheck(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDrawBackSwingCheck(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDrawAllTracers(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDisplaySwingThroughInfo(bool bEnable);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCommendPlayer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClosePropertyDebugger();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCloseMovementDebugger();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerClearPS5MatchId();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheatObj(FName CheatCommand, UObject* Param);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheat(FName CheatCommand, FName Param);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBroadcastDebugMessage(const FString& Message, FColor TextColor, float Duration, bool bToAll, bool bTeamOnly);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBroadcast(const FString& Msg, TEnumAsByte<EChatType::Type> ChatType, FColor OverrideColor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBPCheat(const FString& CheatAndParams);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAdminCmd(const FString& Cmd);
    
public:
    UFUNCTION(BlueprintCallable)
    void SendPromptPlayerMessageRequest(FGameplayTag MessageTag, int32& SentMessageId);
    
    UFUNCTION(BlueprintCallable)
    void SendPromptPlayerMessageReply(int32 MessageId, bool Response);
    
    UFUNCTION(BlueprintCallable)
    void SendCancelPlayerMessageRequest(int32 MessageId);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void SelfSyntheticInput(bool bEnable);
    
public:
    UFUNCTION(BlueprintCallable)
    void SayChatType(const FString& Msg, TEnumAsByte<EChatType::Type> ChatType, FColor OverrideColor);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Say(FString& Msg);
    
    UFUNCTION(BlueprintCallable)
    void SaveLoadout(TSubclassOf<ATBLCharacter> RequestedSubclass, TSubclassOf<ULoadoutSelection> LoadoutSelection, FLoadout RequestedLoadout);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SaveCloudFilesIfDirty();
    
    UFUNCTION(BlueprintCallable)
    void SaveAutoInputRecord();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetSelfCamera();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void ResetNativeAchievements();
    
    UFUNCTION(BlueprintCallable)
    void RequestSwitchTeam(EFaction RequestedFaction);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RequestRejectSpawnWave(ASpawnWave* Wave);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RequestLeaveSpawnWave(ASpawnWave* Wave);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RequestJoinSpawnWave(ASpawnWave* Wave, bool bFromAutoSpawn);
    
    UFUNCTION(BlueprintCallable)
    void ReportPlayer(APlayerState* ReportedPlayer, const EPlayerReportCategory ReportCategory, const FString& ReportDescription);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveViewedItem(const FPrimaryAssetId& ItemId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLoadingScreenPanel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveFriendById(const FString& UniqueId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveCurrencyExec(const FString& Currency, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveAllViewedItems();
    
    UFUNCTION(BlueprintCallable)
    void ReleasedMenuButton();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RefreshRegionPingExec();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReadFriendList();
    
    UFUNCTION(BlueprintCallable)
    void PurchaseOffer(const FStoreOfferItem& Offer);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PurchaseItemExec(const FString& ItemId, const FString& Currency);
    
    UFUNCTION(BlueprintCallable)
    void PurchaseItemByString(const FString& ItemId, const FString& Currency);
    
    UFUNCTION(BlueprintCallable)
    void PurchaseItem(const FPrimaryAssetId& ItemId, const FString& Currency);
    
    UFUNCTION(BlueprintCallable)
    void PS4TouchpadPressed();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PropertyDebuggerAdd(const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PropertyDebugger();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintWeaponActionEvents();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PrintDebugMessage(const FString& Message, FColor TextColor, float Duration);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void PrintCameraShakeProperties(FName CameraShakeName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintCameraProperties();
    
    UFUNCTION(BlueprintCallable)
    void PressedMenuButton();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrepareEvent(const FString& EventName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrepareBank(const FString& BankName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlaySound(UAkAudioEvent* Sound);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 PlayGlobalVOEmote(UCTBase* CTPersonality, FName EmoteName, EFaction Faction, TEnumAsByte<EAudioClassType::Type> Class, EVOType VoType);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerViewUnlockedLoadoutItem(const TSubclassOf<ATBLCharacter>& CharacterSubclass, const TSubclassOf<AInventoryItem>& Item);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerViewedUnlockedSubclass(const TSubclassOf<ATBLCharacter>& CharacterSubclass);
    
    UFUNCTION(BlueprintCallable)
    void PlayerSubmitVote(UVotingInstance* VotingInstance, FName Vote);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayerStateUniqueIdReplicated(ATBLPlayerState* PS);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayerStateMissingOnClientStart(APlayerState* NewPlayerState);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayerPostGameFeedback(int32 StarRating);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayerKilled(FDeathEvent DeathEvent);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayerIsBeingKicked();
    
    UFUNCTION(BlueprintCallable)
    void PlayerCallKickVote(APlayerState* KickTarget);
    
    UFUNCTION(BlueprintCallable)
    void PlayDelayedCrossbowHapticsForPS5();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayCameraShake(FName CameraShakeName, bool bLoop);
    
    UFUNCTION(BlueprintCallable)
    void PendingSpawnExpired(ASpawner* PendingSpawner);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PartySay(FString& Msg);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OwningTeamChanged(ATBLTeam* NewOwningTeam);
    
private:
    UFUNCTION(BlueprintCallable)
    void OpenBlueprintDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NextSpawnWave(ASpawnWave* PreviousSpawnWave);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_CheatsEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bAutomaticallyChooseSpawnWave();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReceivedFocus();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnReadUserFileComplete(const FPlatformInterfaceDelegateResult& Result);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPostGameMatchFound(FName MatchmadeSessionName, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnPostGameMatchCancelled(FName MatchmadeSessionName, bool bSuccess);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMatchMakingChanged(bool bIsMatchmaking);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLostFocus();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLoadoutScreenState(bool DidOpen);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnlineStatsReplicated(FTBLOnlineStats OnlineStats);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInputExitDeathCam();
    
    UFUNCTION(BlueprintCallable)
    void OnEnumerateCloudFilesComplete(const FPlatformInterfaceDelegateResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityInitiated(AAbilityInvocation* Invocation);
    
    UFUNCTION(BlueprintCallable)
    void NotifyEnteredLeftLoadoutVolume(UObject* LoadoutVolume, bool bInLoadoutVolume);
    
    UFUNCTION(BlueprintCallable)
    void NotifyCausedDamage(const FDamageTakenEvent& Event);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MuteClient(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MovementDebuggerLoadFile(FName Filename);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MovementDebugger();
    
    UFUNCTION(BlueprintCallable)
    void LoadVOASync(TEnumAsByte<EAudioPersonalityType::Type> PersonalityType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadBank(const FString& BankName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListViewedItems() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListPlayers();
    
    UFUNCTION(BlueprintCallable)
    bool IsVOBankLoaded(TEnumAsByte<EAudioPersonalityType::Type> PersonalityType);
    
    UFUNCTION(BlueprintCallable)
    bool IsViewportFocused();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsViewedItem(const FPrimaryAssetId& ItemId);
    
    UFUNCTION(BlueprintCallable)
    bool IsUsingGamepad();
    
    UFUNCTION(BlueprintCallable)
    bool IsStatsLoaded();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsSelfCamera() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPlayingCinematics();
    
    UFUNCTION(BlueprintCallable)
    void IsPlayerStateMuted(ATBLPlayerState* InPlayerState, bool& OutIsMuted);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerChatMuted(APlayerState* MutedPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPrimaryAssetId IsLoadoutItemRecentlyUnlocked(const TSubclassOf<ATBLCharacter>& CharacterSubclass, const TSubclassOf<AInventoryItem>& Item);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadoutEqualToSavedLoadout(TSubclassOf<ATBLCharacter> RequestedSubclass, FLoadout Loadout);
    
    UFUNCTION(BlueprintCallable)
    bool IsHeadlessClient();
    
    UFUNCTION(BlueprintCallable)
    bool IsGhostCameraMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPrimaryAssetId IsCharacterRecentlyUnlocked(const TSubclassOf<ATBLCharacter>& CharacterSubclass);
    
    UFUNCTION(BlueprintCallable)
    bool IsActionKeyDown(FName ActionName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InputStop();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InputRec(FName ReplayName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InputPlay(FName ReplayName);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void InpStop();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InpRec(const FString& RecName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InpPlay(const FString& RecName);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void GrantFlavorEntitlementExec(const FString& Entitlement);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GrantCurrencyExec(const FString& Currency, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveWeapon(FName WeaponName);
    
    UFUNCTION(BlueprintCallable)
    TMap<FPrimaryAssetId, bool> GetUnlocksAtLevel(int32 Level, EOnlineStat Stat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPrimaryAssetId> GetUnlockedItemsBySubclass(const TSubclassOf<ATBLCharacter>& CharacterSubclass);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalTimesKilled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetToggleCameraGamepadInputHoldTimeThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeUntilRespawn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTimesKilledKilledByPlayer(ATBLPlayerState* OtherPlayer, int32& OutTimesKilled, int32& OutTimesKilledBy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTeamDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTBLPlayerInput* GetTBLPlayerInput();
    
    UFUNCTION(BlueprintCallable, Exec)
    float GetStatFloatExec(const FString& StatName);
    
    UFUNCTION(BlueprintCallable)
    float GetStatFloat(const FString& StatName);
    
    UFUNCTION(BlueprintCallable, Exec)
    int32 GetStatExec(const FString& StatName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStat(EOnlineStat Stat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetSpectatorPawnSpawnTransform();
    
    UFUNCTION(BlueprintCallable)
    void GetSavedLoadout(TSubclassOf<ATBLCharacter> RequestedSubclass, FLoadout& Loadout);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<ATBLCharacter> GetSavedCharacterSubclass(TSubclassOf<ATBLCharacter> ParentClass);
    
    UFUNCTION(BlueprintCallable)
    bool GetRespawnTime(float& TimeRemaining);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<AInventoryItem> GetRandomUnlockedLoadoutItemForSlot(ULoadoutSelection* LoadoutSelection, EInventoryItemSlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTBLQuestsCachedData* GetQuestsCachedData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestPool* GetQuestPool();
    
    UFUNCTION(BlueprintCallable)
    FOwnershipResponse GetOwnership(const FPrimaryAssetId& AssetIdToCheck, bool BaseOnly);
    
    UFUNCTION(BlueprintCallable)
    TArray<FCustomizationEntry> GetOwnerCustomizationWeaponItems(EWeaponTag WeaponTag, EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    TArray<FCustomizationEntry> GetOwnerCustomizationItems(TEnumAsByte<EAudioClassType::Type> CharacterType, EFaction Faction, FName AssetsTypeName, bool bPresetCompatible, bool bSort);
    
    UFUNCTION(BlueprintCallable)
    int32 GetOnlineCommodity(const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASpawnWave* GetNextSpawnWave();
    
    UFUNCTION(BlueprintCallable, Exec)
    int32 GetLevelExec(const FString& Stat);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLevel(EOnlineStat Stat);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsProfileDataLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInputAnalogStickStateRaw(TEnumAsByte<EControllerAnalogStick::Type> WhichStick, float& StickX, float& StickY) const;
    
    UFUNCTION(BlueprintCallable)
    FPrimaryAssetId GetEquippedCustomizationWeaponAsset(EWeaponTag WeaponTag, EFaction Faction, TEnumAsByte<EAudioClassType::Type> CharacterType);
    
    UFUNCTION(BlueprintCallable)
    TArray<FOnlineStoreOffer> GetCatalogInLevelRange(bool LevelAccessible, int32 MinLevel, int32 MaxLevel, EOnlineStat Stat);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetCatalogExec(bool LevelAccessible, int32 LevelsAbove);
    
    UFUNCTION(BlueprintCallable)
    TArray<FOnlineStoreOffer> GetCatalog(bool LevelAccessible, int32 LevelsAbove, EOnlineStat Stat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTBLCampaignsCachedData* GetCampaignsCachedData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCampaignList* GetCampaignList() const;
    
    UFUNCTION(BlueprintCallable)
    UAkComponent* GetAudioComponent();
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<ULoadoutSelection> GetAllowedLoadoutSelection(TSubclassOf<ATBLCharacter> RequestedSubclass);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<ATBLCharacter>> GetAllowedCharacterClasses();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    UTBLScreenManager* GetActiveScreenManager();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GenerateStoreJSON();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSelfAutobalance();
    
    UFUNCTION(BlueprintCallable)
    void ForceImmediateRespawn();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EchoPlayFabId();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpStatsExec(int32 Threshold);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void DumpPartyInfo();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void DumpOwnership();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpMovementMetrics();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpFriendList();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void DrawWeaponTip(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawVisibilityCheck(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawTracersClear(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawTracers(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawTracerDirection(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawTracerCache(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawSpectatorCamera(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawSocket(FName SocketName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawShield(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawRangedInaccuracy(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawProjectile(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawParryHit(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawMeleeHit(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawHorseImpact(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawFacingCheck(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawClientTracers(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawCamera(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawBackSwingCheck(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawAllTracers(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisplaySwingThroughInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void DisplayDebugScrollUp();
    
    UFUNCTION(BlueprintCallable)
    void DisplayDebugScrollReleased();
    
    UFUNCTION(BlueprintCallable)
    void DisplayDebugScrollDown();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void DisableCameraOffset();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DevMode(bool bActivate);
    
    UFUNCTION(BlueprintCallable)
    void DestroyInputReplayComponent();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetPartySetting(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void CreateInputReplayComponent();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClosePropertyDebugger();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CloseMovementDebugger();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateVoiceStateForPlayer(ATBLPlayerState* NewPlayer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSwitchToSpectator();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartOnlineGame();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSpawnerStartAllowingControl(ASpawner* InSpawner, ATBLCharacter* Char);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowTeamSelectScreen();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowLoadoutScreen();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowHudMarkerPointEvent(FName HudMarkerTag, float TicketsModified, int32 TeamIndex);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetVisibilityOfAllObjectiveZones(bool IsVisible);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetSyntheticInputMovement(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetSyntheticInputAI(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetSyntheticInputActions(bool bEnable);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetSpectatorLocation(FVector InLocation, FRotator InRotation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRequestPostMatchInfo();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveObjectiveContextMessage(const FObjectiveContextMessage ObjectiveContextMessage);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveLocalizedObjectiveMessage(const FObjectiveMessage& ObjectiveMessage);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveLocalizedChat(const FText& FormatText, TEnumAsByte<EChatType::Type> Type);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveGameModeMessages(const TArray<FGameModeMessage>& GameModeMessages);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveGameModeMessage(const FGameModeMessage& GameModeMessage);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveDecapHead(AInventoryItem* InDecapHead);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveDeathRecap(FDeathRecap DeathRecap);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceivedAutoBalanceNotification(EFaction NewFaction);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveChat(ATBLPlayerState* SenderPlayerState, const FString& S, TEnumAsByte<EChatType::Type> Type, bool IsSenderDev, FColor OverrideColor);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPushCmd(const FString& Cmd);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientPromptPlayerMessageRequest(FGameplayTag MessageTag, int32 MessageId);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPrintCustomizationItems(const TArray<FPrimaryAssetId>& Items);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPostGameStartMatchmaking(bool bAlways);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPostGameMigrateToNewMatchmakingServer(const FString& ConnectString);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPostAKSoundsOnActor(AActor* SoundActor, const TArray<UAkAudioEvent*>& Sounds);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPostAKSoundOnActor(AActor* SoundActor, UAkAudioEvent* Sound);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPostAKSoundAtLocation(FVector_NetQuantize Location, UAkAudioEvent* Sound);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPostAkSound(UAkAudioEvent* Sound);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientPlayEmote(FName EmoteName);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlayAimedAtSound();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnRevivedOtherPlayer(APawn* RevivedPawn);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnPlayerRevived(APawn* RevivingPawn);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnCounteredAttack(const EDefenderBlockedPolicy BlockPolicy, ATBLCharacter* AttackingCharacter);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnBlockedAttack(const EDefenderBlockedPolicy BlockPolicy, ATBLCharacter* AttackingCharacter, const bool bWasProjectile);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyWaveJoinResponse(ASpawnWave* Wave, bool bJoinedWaveSuccess);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyPendingSpawn(ASpawner* PendingSpawner, float ServerSpawnTimeSeconds);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyForwardSpawnAwaitingCombatTimer(AForwardSpawnWave* ForwardWave);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyCausedDamage(const FDamageTakenEventCompressed Event);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientKicked(const FText& KickReason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientHandleGlobalGameNotification(EGlobalGameNotificationCategory Category, const FText& Title, const FText& Body, FName Subcategory, UObject* Data);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientGoingToSpawnAtSpawner(ASpawner* InSpawner);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientFadeOut(const float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientFadeIn(const float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEndOnlineGame();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDrawDebugTracerSphere(FVector Center, float Radius, int32 Segments, FColor Color);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDrawDebugTracerBox(FVector Center, FVector Extent, FQuat Rotation, FColor Color);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientConfirmExit();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientClearPostMatchInfo();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCausedFallDeath(const FDeathDamageTakenEvent FallDamage);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientCancelPlayerMessageRequest(int32 MessageId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBroadcastDebugMessage(const FString& Message, FColor TextColor, float Duration, bool bToAll, bool bTeamOnly);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientApprovedLoadout(bool IsLoadoutApproved, TSubclassOf<ATBLCharacter> RequestedSubclass, FLoadout RequestedLoadout);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAcknowledgeTeamRequest(bool bSuccess, EFaction Faction);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAckDoneTravelling();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void ClearServerHistoryList();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void ClearSeenGameUpdates();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearPlayerHasAcceptedNDA();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearMovementMetrics();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearLoadedSoundBanks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearFlavorStats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CinematicSpectatorCamera();
    
    UFUNCTION(BlueprintCallable)
    bool CheckPersonalityOwnership(TEnumAsByte<EAudioPersonalityType::Type> InPersonality, TEnumAsByte<EAudioClassType::Type> CharacterType, EFaction InFaction);
    
    UFUNCTION(BlueprintCallable)
    void ChatUnmutePlayer(APlayerState* Unmuted);
    
    UFUNCTION(BlueprintCallable)
    void ChatMutePlayer(APlayerState* Muted);
    
    UFUNCTION(BlueprintCallable)
    FOwnershipResponse CanUseLoadoutItem(const TSubclassOf<ULoadoutSelection>& LoadoutSelection, const TSubclassOf<AInventoryItem>& Item);
    
    UFUNCTION(BlueprintCallable)
    FOwnershipResponse CanUseLoadout(const TSubclassOf<ULoadoutSelection>& LoadoutSelection);
    
    UFUNCTION(BlueprintCallable)
    FOwnershipResponse CanUseCharacter(const TSubclassOf<ATBLCharacter>& CharacterSubclass);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CanSwitchCamera() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool CanPlayerCallKickVote(APlayerState* KickTarget);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BugAnimation();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastDebugMessage(const FString& Message, FColor TextColor, float Duration, bool bToAll, bool bTeamOnly);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void Benchmark(int32 Workscale);
    
public:
    UFUNCTION(BlueprintCallable)
    void AutoInputRecord();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AttachCameraToWeapon(FName WeaponName, bool bUseWeaponRotation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AttachCameraToProjectile(bool bUseProjectileRotation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AttachCameraToHorse(FName BoneName, bool bUseBoneRotation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AttachCameraToBone(FName BoneName, bool bUseBoneRotation);
    
    UFUNCTION(BlueprintCallable)
    bool AreCompoundActionKeysDown(FName CompoundAction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AnalyticsQuery(const FString& Map, const FString& BuildId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AdminSay(FString& Msg);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Admin(const FString& Cmd);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddViewedItem(const FPrimaryAssetId& ItemId);
    
    UFUNCTION(BlueprintCallable)
    void AddUncheckedLevelUpResult(const FPrimaryAssetId& NewLevelUpItem);
    
    UFUNCTION(BlueprintCallable)
    void AddOnPossessedAutoVo(FOnPossessedAutoVo OnPossessedAutoVo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddFriendById(const FString& UniqueId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddAllViewedItems(TEnumAsByte<EAudioClassType::Type> CharacterType, EFaction Faction, FName AssetsTypeName);
    
    
    // Fix for true pure virtual functions not being implemented
};

