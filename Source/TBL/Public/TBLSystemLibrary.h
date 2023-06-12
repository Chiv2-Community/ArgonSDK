#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/Canvas.h"
#include "Engine/EngineBaseTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/PlayerInput.h"
#include "Engine/LatentActionManager.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "Engine/NetSerialization.h"
#include "ActorSortDelegateDelegate.h"
#include "BlueprintNonResettingTimeExpiredDelegate.h"
#include "BlueprintOnlineUser.h"
#include "CharacterDisplayInfo.h"
#include "CustomPersonalityEmotesTableRow.h"
#include "DamageTakenEvent.h"
#include "DeathDamageTakenEvent.h"
#include "DropItemParams.h"
#include "EAlwaysOnMusicState.h"
#include "EAudioClassType.h"
#include "EAudioPersonalityType.h"
#include "EBuildFinality.h"
#include "ECharacterClass.h"
#include "EClosedCaptionType.h"
#include "ECrowdControlDirection.h"
#include "EEquippedState.h"
#include "EFaction.h"
#include "EGameModeType.h"
#include "EHardwarePlatform.h"
#include "EHeadGoreAction.h"
#include "EInterpolateOverTimeAction.h"
#include "EInventoryItemSlot.h"
#include "EInventorySlot.h"
#include "ELimbGoreAction.h"
#include "ENameType.h"
#include "EObjectivePointCategory.h"
#include "EOnlineItemUnlockType.h"
#include "EOnlineStat.h"
#include "ETBLWorldType.h"
#include "EWeaponTag.h"
#include "GameModeMessage.h"
#include "GameModeMessageTable.h"
#include "GoreEvent.h"
#include "InterpolatorFloatUpdatedDelegate.h"
#include "InterpolatorVectorUpdatedDelegate.h"
#include "PersonalityEmoteTableRow.h"
#include "ProfilerStat.h"
#include "ReplicatedDateTime.h"
#include "SoundRTPCEntry.h"
#include "SoundStateEntry.h"
#include "SoundSwitchEntry.h"
#include "TeamDisplayInfo.h"
#include "Templates/SubclassOf.h"
#include "actionNumbers.h"
#include "TBLSystemLibrary.generated.h"

class AActor;
class AAlwaysOnMusicManager;
class ACharacter;
class AController;
class AInventoryItem;
class ALevelScriptActor;
class APawn;
class APlayerController;
class APlayerState;
class ASiegeEngine;
class ATBLCharacter;
class ATBLGameMode;
class ATBLGameState;
class ATBLLevelScriptActor;
class ATBLPlayerState;
class ATBLTeam;
class AVolume;
class IReplicatedSubobjectInterface;
class UReplicatedSubobjectInterface;
class IStageInterface;
class UStageInterface;
class UAbilitiesComponent;
class UAbilityConfig;
class UAbilitySpec;
class UActorComponent;
class UAkAudioEvent;
class UAkComponent;
class UConditionsComponent;
class UContextVOManager;
class UCurveFloat;
class UCustomizationComponent;
class UDamageSource;
class UDataTable;
class UFont;
class ULoadoutSelection;
class UMaterialInstanceDynamic;
class UMovementComponent;
class UMovementModifierComponent;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
class UStaticMeshComponent;
class UStatsComponent;
class UTBLDialogManager;
class UTBLGameUserSettings;
class UTBLMapSummary;
class UTBLScreenWidget;
class UTexture;
class UTexture2D;
class UWorld;

UCLASS(Blueprintable, MinimalAPI)
class UTBLSystemLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTBLSystemLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool WasRecentlyRenderedOnScreen(AActor* InActor, float InTolerance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateActorsTags(AActor* Actor, TArray<FName> Tags, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void TBLSetEquippedItemsOnFire(AActor* Actor, float Amount, UDamageSource* DamageSource);
    
    UFUNCTION(BlueprintCallable)
    static void TBLApplyDamage(AActor* DamagedActor, float Amount, UDamageSource* DamageSource, AActor* DamageCauser, AInventoryItem* InventoryItem, bool bOverrideImpactPoint, FVector ImpactPointOverride, AActor* DamageInstigator, bool CheckForValidDamageSource);
    
    UFUNCTION(BlueprintCallable)
    static void StopSoundById(int32 PlayingID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AInventoryItem* SpawnAndDropInventoryItem(UObject* WorldContextObject, TSubclassOf<AInventoryItem> InventoryItemClass, FTransform SpawnTransform, FDropItemParams DropParams, FVector Impulse);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ATBLTeam*> SortTeamArrayByTickets(TArray<ATBLTeam*> Teams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ATBLTeam*> SortTeamArrayByScore(TArray<ATBLTeam*> Teams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ATBLPlayerState*> SortPlayerStateArrayByRecentlyJoined(TArray<ATBLPlayerState*> PlayerStates);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ATBLPlayerState*> SortPlayerStateArrayByPlayerScoreNoMatchBonus(TArray<ATBLPlayerState*> PlayerStates);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ATBLPlayerState*> SortPlayerStateArrayByPlayerScore(TArray<ATBLPlayerState*> PlayerStates);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ATBLPlayerState*> SortPlayerStateArrayByPlayerKills(TArray<ATBLPlayerState*> PlayerStates);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FGameModeMessage> SortGameModeMessagesByPriority(TArray<FGameModeMessage> GameModeMessages);
    
    UFUNCTION(BlueprintCallable)
    static void SortActorArray(TArray<AActor*> InActors, FActorSortDelegate SortDelegate, UObject* BoolContainer, FName BoolPropertyName, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ShouldUsePIEJoinGameFlow(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ShouldUseOpenLoadout(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ShouldUseLegacyFXSoundFunction(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldBuildShowWIP();
    
    UFUNCTION(BlueprintCallable)
    static void SetupCubeBrushInConstructionScript(AVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    static void SetupBlueprintVolumeSubclassBrushInConstructionScript(AVolume* Volume);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetShowBigNotification(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FTimerHandle SetNonResettingTimer(UObject* WorldContextObject, float Time, bool Looping, FBlueprintNonResettingTimeExpired Event);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetNDASigned(bool NDASigned, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetComponentsEnabled(AActor* Actor, int32 ComponentFlags, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAlwaysOnMusicManagerState(UObject* WorldContextObject, EAlwaysOnMusicState NewState);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorComponentCanAffectNavigation(UActorComponent* Component, bool bCanAffectNavigation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FReplicatedDateTime ReplicatedDateTime(const FDateTime& ReplDateTime);
    
    UFUNCTION(BlueprintCallable)
    static void RenameComponentToStableName(UActorComponent* Component, const FString& NamePrefix, int32 ComponentId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveTagFromAllActors(FName Tag, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveTagFromActor(AActor* Actor, FName Tag, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void RemovePlayersWhoAreDeadFromPlayerStateArray(TArray<ATBLPlayerState*>& PlayerStates);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void RemovePlayersInPartiesFromPlayerStateArray(TArray<ATBLPlayerState*>& PlayerStates);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString RemovePiePrefixFromMapName(const FString& MapNameString);
    
    UFUNCTION(BlueprintCallable)
    static UAkComponent* PlaySoundOnActorWithParams(UAkAudioEvent* SoundEvent, AActor* Actor, FName AttachSocket, const TArray<FSoundSwitchEntry>& Switches, const TArray<FSoundRTPCEntry>& RtpcValues, bool bPrintEvents);
    
    UFUNCTION(BlueprintCallable)
    static UAkComponent* PlaySoundOnActor(UAkAudioEvent* SoundEvent, AActor* Actor, FName AttachSocket, bool bPrintEvents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 PlaySoundAtLocationWithParams(UAkAudioEvent* SoundEvent, const FVector& Location, const FRotator& Rotation, const TArray<FSoundStateEntry>& States, const TArray<FSoundRTPCEntry>& RtpcValues, UObject* WorldContextObject, bool bPrintEvents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 PlaySoundAtLocation(UAkAudioEvent* SoundEvent, const FVector& Location, const FRotator& Rotation, UObject* WorldContextObject, bool bPrintEvents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayDemo(const FString& DemoName, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void MarkReplicationDirty(const TScriptInterface<IReplicatedSubobjectInterface>& ReplicatedSubobject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGoreEvent MakeGoreEvent(FName InBoneName, EHeadGoreAction InHeadGoreAction, ELimbGoreAction InLimbGoreAction, FVector InImpulse, bool bInSpawnedItem, bool bKillingBlow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDamageTakenEvent MakeDamageTakenEvent(float InDamage, UDamageSource* InDamageSource, AActor* InDamageCauser, AActor* InDamageTaker, AActor* InDamageInstigator, bool InbKillingBlow, bool InbSuicide, bool InbEnteredKillVolume, FHitResult InHitResult, UAbilitySpec* InAbilitySpec, FVector_NetQuantizeNormal InHitDirection, FName InDamageTakerCombatState, AInventoryItem* InInventoryItem, AActor* InProjectile, FName InAttackName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UObject* LoadSoftObjectSynchronously(TSoftObjectPtr<UObject> SoftObjectRef, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UClass* LoadSoftClassSynchronously(TSoftClassPtr<UObject> SoftClassRef, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TScriptInterface<IStageInterface> LevelBlueprintGetFirstStage(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LevelBlueprintEvent(UObject* WorldContextObject, FName EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWindowsOSSInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidUser(const FBlueprintOnlineUser& InUser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsValidHorseServer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidClassID(const TSoftClassPtr<UTBLScreenWidget>& ClassID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsTutorial(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsThrownImpactSoundDebugEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSteamInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSpecificTeamFaction(EFaction Faction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSoundEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSimulatingInEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsRunningAutomatedTesting(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRangedWeapon(AInventoryItem* Weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRangedOrThrownAttack(FName AttackName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPartOfFaction(EFaction Target, EFaction Other);
    
    UFUNCTION(BlueprintCallable)
    static bool IsOfficialServer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNonSpecificTeamFaction(EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMergedMesh(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMergedMaterial(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFirstMainMenuLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDemoMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDefendingFaction(const UObject* WorldContextObject, EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDamageExemptFromTeamDamage(AActor* DamageCauser, UDamageSource* DamageSource);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsControllerMounted(AController* Controller, TSubclassOf<ASiegeEngine> SiegeEngineClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBot(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutomationTesting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAttackingFaction(const UObject* WorldContextObject, EFaction Faction);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void InterpolateVectorOverTime(UObject* WorldContextObject, FVector StartValue, FVector EndValue, float Duration, bool bEaseOut, bool bEaseIn, float EasingExp, UCurveFloat* Curve, FInterpolatorVectorUpdated UpdateDelegate, TEnumAsByte<EInterpolateOverTimeAction::Type> InterpolateAction, FLatentActionInfo LatentInfo, bool bCallUpdatesParams);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void InterpolateFloatOverTime(UObject* WorldContextObject, float StartValue, float EndValue, float Duration, bool bEaseOut, bool bEaseIn, float EasingExp, UCurveFloat* Curve, FInterpolatorFloatUpdated UpdateDelegate, TEnumAsByte<EInterpolateOverTimeAction::Type> InterpolateAction, FLatentActionInfo LatentInfo, bool bCallUpdatesParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasRole(AActor* Actor, int32 Role);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasActorBegunPlay(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TEnumAsByte<ETBLWorldType::Type> GetWorldType(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetUnlocalizedGameModeFromMapString(const FString& MapNameString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetTotalPlayerCount(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFont* GetTinyFont();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTimeSeconds(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static FText GetTextFromNamespace(const FString& Namespace, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ATBLTeam*> GetTeamsFromFactions(UObject* WorldContextObject, TArray<EFaction> Factions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ATBLTeam* GetTeamFromFaction(UObject* WorldContextObject, EFaction Faction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ATBLLevelScriptActor* GetTBLLevelScriptActor(UObject* WorldContextObject, bool& bIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTBLGameUserSettings* GetTBLGameUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ATBLGameState* GetTBLGameState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ATBLGameMode* GetTBLGameMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ATBLCharacter* GetTBLCharacterFromController(const AController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ATBLCharacter* GetTBLCharacter(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UStatsComponent* GetStatsComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UStaticMeshComponent* GetStaticMeshComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFont* GetSmallFont();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetShowBigNotification(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetServerTimeoutTime(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetScreenPositionForLocation(APlayerController* PlayerController, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetScreenPositionForActor(APlayerController* PlayerController, AActor* Actor, const FVector& RelativeLocation, bool bUseActorBoundsOrigin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FGameModeMessageTable> GetScoredStageGameModeMessageRows(UDataTable* GameModeMessageDataTable, int32 StageNum, int32 NewScore, int32 LastScore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetPossessorActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ATBLPlayerState*> GetPlayerStatesFromFaction(UObject* WorldContextObject, EFaction Faction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ATBLPlayerState*> GetPlayerStates(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ATBLPlayerState* GetPlayerStateFromUniqueNetId(UObject* WorldContextObject, const FUniqueNetIdRepl& UniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AController*> GetPlayersFromFactions(UObject* WorldContextObject, TArray<EFaction> Factions, bool AllowBots, bool AllowNPCs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlayerDebugName(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FactionNumbers GetPlayerCountsFromFaction(UObject* WorldContextObject, EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FPersonalityEmoteTableRow> GetPersonalityEmotes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ATBLTeam* GetOppositeTeam(UObject* WorldContextObject, ATBLTeam* Team);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EFaction GetOppositeFaction(const UObject* WorldContextObject, EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetOnlineStatWeaponTakedowns(ATBLPlayerState* State, EWeaponTag WeaponTag);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetOnlineStatWeaponKills(ATBLPlayerState* PlayerState, EWeaponTag Weapon);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetOnlineStatWeaponDeaths(ATBLPlayerState* PlayerState, EWeaponTag Weapon);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetOnlineStatSubClassTakedowns(ATBLPlayerState* PlayerState, ECharacterClass CharacterClass);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetOnlineStatSubClassPlaytime(ATBLPlayerState* PlayerState, ECharacterClass CharacterClass);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetOnlineStatSubClassKills(ATBLPlayerState* PlayerState, ECharacterClass CharacterClass);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetOnlineStatSubClassDeaths(ATBLPlayerState* PlayerState, ECharacterClass CharacterClass);
    
    UFUNCTION(BlueprintCallable)
    static EOnlineStat GetOnlineStatFromWeaponTag(EWeaponTag WeaponTag);
    
    UFUNCTION(BlueprintCallable)
    static EOnlineStat GetOnlineStatFromCharacterClass(ECharacterClass CharacterClass);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetOnlineStatCommendations(ATBLPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetOnlineStatBattlecries(ATBLPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static FText GetObjectiveScoreTextFromEnum(TEnumAsByte<EObjectivePointCategory::Type> ObjPointCat);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumPlayers(UObject* WorldContextObject, bool IncludeBots, bool IncludeNPCs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FTeamDisplayInfo GetNeutralTeamDisplayInfo(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetNegativeMaxFloatVector();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetNegativeMaxFloat();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetNDASigned(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetNameFromCharacterClass(TSubclassOf<ATBLCharacter> CharacterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMovementModifierComponent* GetMovementModifierComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMovementComponent* GetMovementComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetMaxPlayersForServer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMaxFloat();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UTBLMapSummary* GetMapSummary(UObject* WorldContextObject, const FString& MapFileNameWithOptions, bool bCheckGameInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetMapNameString(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FText GetLocalizedWeaponTagText(EWeaponTag WeaponTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetLocalizedTextFromItemUnlock(TEnumAsByte<EOnlineItemUnlockType::Type> ItemUnlockType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetLocalizedMapName(const FString& MapNameString, FString& MapNameKey);
    
    UFUNCTION(BlueprintCallable)
    static FText GetLocalizedItemLevelTypeText(EOnlineStat ItemLevelType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetLocalizedGameModeTypeText(TEnumAsByte<EGameModeType::Type> GamemodeType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetLocalizedGameModeFromMapString(const FString& MapNameString, FText& LongForm, FText& ShortForm);
    
    UFUNCTION(BlueprintCallable)
    static FText GetLocalizedCharacterClassText(ECharacterClass CharacterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULoadoutSelection* GetLoadoutSelectionDefaultObj(TSubclassOf<ULoadoutSelection> LoadoutSelectionClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ALevelScriptActor* GetLevelScriptActor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetLastServerReceivePacketTime(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetKilledActor(const FDeathDamageTakenEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    static FText GetInventorySlotTextFromEnum(EInventorySlot InventorySlotType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetIconFromCharacterClass(TSubclassOf<ATBLCharacter> CharacterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetHitDirectionName(AActor* HitActor, FVector HitDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetGameModeNameString(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FGameModeMessageTable> GetGameModeMessageRows(UDataTable* GameModeMessageDataTable, TArray<FString> EventTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetFullBuildVersionString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetFriendUserId(const FBlueprintOnlineUser& InFriend);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetFriendDisplayName(const FBlueprintOnlineUser& InFriend);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDisplayInfoFromCharacterClass(TSubclassOf<ATBLCharacter> CharacterClass, FCharacterDisplayInfo& DisplayInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTBLDialogManager* GetDialogManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetDemoTeam(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetDemoServer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetDemoPlayerName(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EFaction GetDefendingFaction(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetDefaultObjectFromStringReference(const FSoftObjectPath& StringReference);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AInventoryItem* GetDefaultInventoryItemObject(TSubclassOf<AInventoryItem> InventoryItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ATBLCharacter* GetDefaultCharacterFromCharacterClass(TSubclassOf<ATBLCharacter> CharacterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetDateTime(const FReplicatedDateTime& ReplDateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetDamageSourceName(const UDamageSource* DamageSource);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture* GetDamageSourceIconTexture(const UDamageSource* DamageSource);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetDamageSourceDisplayName(const UDamageSource* DamageSource);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FCustomPersonalityEmotesTableRow> GetCustomPersonalityEmotes();
    
    UFUNCTION(BlueprintCallable)
    static bool GetCustomPersonalityEmoteOverride(FPersonalityEmoteTableRow Emote, TEnumAsByte<EAudioPersonalityType::Type> PersonalityType, FPersonalityEmoteTableRow& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCustomizationComponent* GetCustomizationComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetCurrentServerNameString(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCurrencyIdReal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCurrencyIdGold();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCurrencyIdCrowns();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ECrowdControlDirection GetCrowdControlDirection(FName Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AController*> GetControllersFromFaction(UObject* WorldContextObject, EFaction Faction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UContextVOManager* GetContextVoObject(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UConditionsComponent* GetConditionsComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetClassPathName(const UClass* InClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<ATBLCharacter> GetCharacterSubclassForPrimaryWeapon(TSubclassOf<ATBLCharacter> CharacterClass, TSubclassOf<AInventoryItem> PrimaryWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<TSubclassOf<ATBLCharacter>> GetCharacterSubclasses(TSubclassOf<ATBLCharacter> ParentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ATBLCharacter*> GetCharactersFromFactions(UObject* WorldContextObject, TArray<EFaction> Factions, bool AllowBots, bool AllowNPCs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EAudioClassType::Type> GetCharacterClassType(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<ATBLCharacter> GetCharacterClassFromSubclass(TSubclassOf<ATBLCharacter> Subclass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBuildNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EBuildFinality GetBuildFinality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EFaction GetAttackingFaction(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AActor*> GetAttachedActors(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AAlwaysOnMusicManager* GetAlwaysOnMusicManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetAllTeamsPlayersWithExclusion(UObject* WorldContextObject, TArray<EFaction> ExcludeFactions, TArray<ATBLTeam*>& IncludedTeams, TArray<AController*>& IncludedPlayers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetAllNames(ENameType NameType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllMapNames_EditorOnly(TArray<FString>& MapNames);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAllFrontendMovieURLs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UActorComponent*> GetAllComponentsFromClass(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ATBLCharacter*> GetAllCharactersFromFaction(UObject* WorldContextObject, EFaction Faction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllActorsWithTag(const UObject* WorldContextObject, FName Tag, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AActor*> GetAllActorsWithComponentsWithExclusions(const TArray<TSubclassOf<UActorComponent>>& ComponentClasses, const TArray<TSubclassOf<UActorComponent>>& ExcludeComponentClasses, const TArray<TSubclassOf<AActor>>& OptionalActorClasses, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AActor*> GetAllActorsWithComponents(const TArray<TSubclassOf<UActorComponent>>& ComponentClasses, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ATBLTeam* GetActorTeam(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetActorsWithTagClassSpecifier(FName Tag, TSubclassOf<AActor> ActorClass, const UObject* WorldContextObject, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AActor*> GetActorsWithTag(const FName& Tag, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetActorMaterials(AActor* Actor, TArray<UPrimitiveComponent*>& OutComponents, TArray<UMaterialInstanceDynamic*>& OutMaterials);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFaction GetActorFaction(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AInventoryItem* GetActorEquippedWeaponByState(const AActor* Actor, EEquippedState EquippedState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AInventoryItem* GetActorEquippedWeapon(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* GetActorComponentWithTag(AActor* Actor, FName Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* GetActorComponent(AActor* Actor, TSubclassOf<UActorComponent> Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AInventoryItem* GetActorAttackingWeapon(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetActionBindingTextForInventorySlot(EInventoryItemSlot InventoryItemSlot, UObject* WorldContextObject, FInputActionKeyMapping& ActionMapping);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetAbilityConfigLoaded(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAbilityConfig* GetAbilityConfig(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAbilitiesComponent* GetAbilitiesComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GenerateRandomName(ENameType NameType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GenerateHashName(const FString& StringToHash, ENameType NameType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GammaCorrectLinearColor(FLinearColor LinCol, float Gamma);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void FrameDelay(UObject* WorldContextObject, int32 NumFramesToDelay, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameModeMessage> FormatGameModeMessages(TArray<FGameModeMessageTable> Messages);
    
    UFUNCTION(BlueprintCallable)
    static void ForceUpdateChildTransforms(USceneComponent* Component);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ForcePlayersDropCarryable(UObject* WorldContextObject, EFaction Faction, TSubclassOf<AInventoryItem> InventoryType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ForcePlayerDropCarryable(ATBLCharacter* Character, TSubclassOf<AInventoryItem> InventoryType);
    
    UFUNCTION(BlueprintCallable)
    static UClass* FindBlueprintClass(const FString& BlueprintName, UClass* ParentClass);
    
    UFUNCTION(BlueprintCallable)
    static void EndProfilerStat(const FProfilerStat& ProfilerStat);
    
    UFUNCTION(BlueprintCallable)
    static void DumpPlayers(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static void DoKeyEvent(AActor* Actor, FName ActionName, TEnumAsByte<EInputEvent> KeyEvent);
    
    UFUNCTION(BlueprintCallable)
    static void DoKeyAxis(AActor* Actor, FName ActionName, float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesActorHaveInventoryItem(AActor* Actor, TSubclassOf<AInventoryItem> InventoryItem, bool bCanBeChildOf);
    
    UFUNCTION(BlueprintCallable)
    static void DisableComponentsOnServer(AActor* Actor, int32 DisableFlags);
    
    UFUNCTION(BlueprintCallable)
    static void DisableComponentsOnBotClient(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyActorComponent(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static UStatsComponent* CreateStatsComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static AActor* CreateSoundActor(AActor* ReferenceActor, FVector OffsetLocation);
    
    UFUNCTION(BlueprintCallable)
    static void ClearCharacterRuntimeAssetCache();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanCharacterSubclassUsePrimaryWeapon(TSubclassOf<ATBLCharacter> CharacterSubclass, TSubclassOf<AInventoryItem> PrimaryWeapon);
    
    UFUNCTION(BlueprintCallable)
    static void CancelAllLatentActionsForObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakCanvasIcon(FCanvasIcon Icon, UTexture*& Texture, float& U, float& V, float& UL, float& VL);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BlueprintOnlineUserEquals(const FBlueprintOnlineUser& A, const FBlueprintOnlineUser& B);
    
    UFUNCTION(BlueprintCallable)
    static void BeginProfilerStat(const FProfilerStat& ProfilerStat);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AwardScoreToPlayers(UObject* WorldContextObject, TArray<ATBLPlayerState*> PlayerStates, FName RowName, EOnlineStat Stat);
    
    UFUNCTION(BlueprintCallable)
    static void AwardOverrideScoreToPlayer(FName RowName, int32 Score, ATBLPlayerState* Player, ATBLPlayerState* OtherPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USceneComponent* AttachComponentFromSCS(UClass* Class, AActor* TargetActor, USceneComponent* TargetComponent, FName ComponentName);
    
    UFUNCTION(BlueprintCallable)
    static void AtlasCharacterTextures(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreHardwarePlatformsFromTheSameFirstParty(EHardwarePlatform A, EHardwarePlatform B);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AddTagsToActor(AActor* Actor, TArray<FName> Tags, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddClosedCaptionLine(FText OriginString, FText ChatString, AActor* OriginatingActor, EClosedCaptionType Type, UObject* WorldContextObject, bool IgnoreDistance);
    
};

