#include "TBLSystemLibrary.h"
#include "Templates/SubclassOf.h"

bool UTBLSystemLibrary::WasRecentlyRenderedOnScreen(AActor* InActor, float InTolerance) {
    return false;
}

void UTBLSystemLibrary::UpdateActorsTags(AActor* Actor, TArray<FName> Tags, UObject* WorldContextObject) {
}

void UTBLSystemLibrary::TBLSetEquippedItemsOnFire(AActor* Actor, float Amount, UDamageSource* DamageSource) {
}

void UTBLSystemLibrary::TBLApplyDamage(AActor* DamagedActor, float Amount, UDamageSource* DamageSource, AActor* DamageCauser, AInventoryItem* InventoryItem, bool bOverrideImpactPoint, FVector ImpactPointOverride, AActor* DamageInstigator, bool CheckForValidDamageSource) {
}

void UTBLSystemLibrary::StopSoundById(int32 PlayingID) {
}

AInventoryItem* UTBLSystemLibrary::SpawnAndDropInventoryItem(UObject* WorldContextObject, TSubclassOf<AInventoryItem> InventoryItemClass, FTransform SpawnTransform, FDropItemParams DropParams, FVector Impulse) {
    return NULL;
}

TArray<ATBLTeam*> UTBLSystemLibrary::SortTeamArrayByTickets(TArray<ATBLTeam*> Teams) {
    return TArray<ATBLTeam*>();
}

TArray<ATBLTeam*> UTBLSystemLibrary::SortTeamArrayByScore(TArray<ATBLTeam*> Teams) {
    return TArray<ATBLTeam*>();
}

TArray<ATBLPlayerState*> UTBLSystemLibrary::SortPlayerStateArrayByRecentlyJoined(TArray<ATBLPlayerState*> PlayerStates) {
    return TArray<ATBLPlayerState*>();
}

TArray<ATBLPlayerState*> UTBLSystemLibrary::SortPlayerStateArrayByPlayerScoreNoMatchBonus(TArray<ATBLPlayerState*> PlayerStates) {
    return TArray<ATBLPlayerState*>();
}

TArray<ATBLPlayerState*> UTBLSystemLibrary::SortPlayerStateArrayByPlayerScore(TArray<ATBLPlayerState*> PlayerStates) {
    return TArray<ATBLPlayerState*>();
}

TArray<ATBLPlayerState*> UTBLSystemLibrary::SortPlayerStateArrayByPlayerKills(TArray<ATBLPlayerState*> PlayerStates) {
    return TArray<ATBLPlayerState*>();
}

TArray<FGameModeMessage> UTBLSystemLibrary::SortGameModeMessagesByPriority(TArray<FGameModeMessage> GameModeMessages) {
    return TArray<FGameModeMessage>();
}

void UTBLSystemLibrary::SortActorArray(TArray<AActor*> InActors, FActorSortDelegate SortDelegate, UObject* BoolContainer, FName BoolPropertyName, TArray<AActor*>& OutActors) {
}

bool UTBLSystemLibrary::ShouldUsePIEJoinGameFlow(UObject* WorldContextObject) {
    return false;
}

bool UTBLSystemLibrary::ShouldUseOpenLoadout(UObject* WorldContextObject) {
    return false;
}

bool UTBLSystemLibrary::ShouldUseLegacyFXSoundFunction(UObject* WorldContextObject) {
    return false;
}

bool UTBLSystemLibrary::ShouldBuildShowWIP() {
    return false;
}

void UTBLSystemLibrary::SetupCubeBrushInConstructionScript(AVolume* Volume) {
}

void UTBLSystemLibrary::SetupBlueprintVolumeSubclassBrushInConstructionScript(AVolume* Volume) {
}

void UTBLSystemLibrary::SetShowBigNotification(UObject* WorldContextObject) {
}

FTimerHandle UTBLSystemLibrary::SetNonResettingTimer(UObject* WorldContextObject, float Time, bool Looping, FBlueprintNonResettingTimeExpired Event) {
    return FTimerHandle{};
}

void UTBLSystemLibrary::SetNDASigned(bool NDASigned, UObject* WorldContextObject) {
}

void UTBLSystemLibrary::SetComponentsEnabled(AActor* Actor, int32 ComponentFlags, bool bEnabled) {
}

void UTBLSystemLibrary::SetAlwaysOnMusicManagerState(UObject* WorldContextObject, EAlwaysOnMusicState NewState) {
}

void UTBLSystemLibrary::SetActorComponentCanAffectNavigation(UActorComponent* Component, bool bCanAffectNavigation) {
}

FReplicatedDateTime UTBLSystemLibrary::ReplicatedDateTime(const FDateTime& ReplDateTime) {
    return FReplicatedDateTime{};
}

void UTBLSystemLibrary::RenameComponentToStableName(UActorComponent* Component, const FString& NamePrefix, int32 ComponentId) {
}

void UTBLSystemLibrary::RemoveTagFromAllActors(FName Tag, UObject* WorldContextObject) {
}

void UTBLSystemLibrary::RemoveTagFromActor(AActor* Actor, FName Tag, UObject* WorldContextObject) {
}

void UTBLSystemLibrary::RemovePlayersWhoAreDeadFromPlayerStateArray(TArray<ATBLPlayerState*>& PlayerStates) {
}

void UTBLSystemLibrary::RemovePlayersInPartiesFromPlayerStateArray(TArray<ATBLPlayerState*>& PlayerStates) {
}

FString UTBLSystemLibrary::RemovePiePrefixFromMapName(const FString& MapNameString) {
    return TEXT("");
}

UAkComponent* UTBLSystemLibrary::PlaySoundOnActorWithParams(UAkAudioEvent* SoundEvent, AActor* Actor, FName AttachSocket, const TArray<FSoundSwitchEntry>& Switches, const TArray<FSoundRTPCEntry>& RtpcValues, bool bPrintEvents) {
    return NULL;
}

UAkComponent* UTBLSystemLibrary::PlaySoundOnActor(UAkAudioEvent* SoundEvent, AActor* Actor, FName AttachSocket, bool bPrintEvents) {
    return NULL;
}

int32 UTBLSystemLibrary::PlaySoundAtLocationWithParams(UAkAudioEvent* SoundEvent, const FVector& Location, const FRotator& Rotation, const TArray<FSoundStateEntry>& States, const TArray<FSoundRTPCEntry>& RtpcValues, UObject* WorldContextObject, bool bPrintEvents) {
    return 0;
}

int32 UTBLSystemLibrary::PlaySoundAtLocation(UAkAudioEvent* SoundEvent, const FVector& Location, const FRotator& Rotation, UObject* WorldContextObject, bool bPrintEvents) {
    return 0;
}

void UTBLSystemLibrary::PlayDemo(const FString& DemoName, UObject* WorldContextObject) {
}

void UTBLSystemLibrary::MarkReplicationDirty(const TScriptInterface<IReplicatedSubobjectInterface>& ReplicatedSubobject) {
}

FGoreEvent UTBLSystemLibrary::MakeGoreEvent(FName InBoneName, EHeadGoreAction InHeadGoreAction, ELimbGoreAction InLimbGoreAction, FVector InImpulse, bool bInSpawnedItem, bool bKillingBlow) {
    return FGoreEvent{};
}

FDamageTakenEvent UTBLSystemLibrary::MakeDamageTakenEvent(float InDamage, UDamageSource* InDamageSource, AActor* InDamageCauser, AActor* InDamageTaker, AActor* InDamageInstigator, bool InbKillingBlow, bool InbSuicide, bool InbEnteredKillVolume, FHitResult InHitResult, UAbilitySpec* InAbilitySpec, FVector_NetQuantizeNormal InHitDirection, FName InDamageTakerCombatState, AInventoryItem* InInventoryItem, AActor* InProjectile, FName InAttackName) {
    return FDamageTakenEvent{};
}

UObject* UTBLSystemLibrary::LoadSoftObjectSynchronously(TSoftObjectPtr<UObject> SoftObjectRef, UObject* WorldContextObject) {
    return NULL;
}

UClass* UTBLSystemLibrary::LoadSoftClassSynchronously(TSoftClassPtr<UObject> SoftClassRef, UObject* WorldContextObject) {
    return NULL;
}

TScriptInterface<IStageInterface> UTBLSystemLibrary::LevelBlueprintGetFirstStage(UObject* WorldContextObject) {
    return NULL;
}

void UTBLSystemLibrary::LevelBlueprintEvent(UObject* WorldContextObject, FName EventName) {
}

bool UTBLSystemLibrary::IsWindowsOSSInitialized() {
    return false;
}

bool UTBLSystemLibrary::IsValidUser(const FBlueprintOnlineUser& InUser) {
    return false;
}

bool UTBLSystemLibrary::IsValidHorseServer(UObject* WorldContextObject) {
    return false;
}

bool UTBLSystemLibrary::IsValidClassID(const TSoftClassPtr<UTBLScreenWidget>& ClassID) {
    return false;
}

bool UTBLSystemLibrary::IsTutorial(UObject* WorldContextObject) {
    return false;
}

bool UTBLSystemLibrary::IsThrownImpactSoundDebugEnabled(UObject* WorldContextObject) {
    return false;
}

bool UTBLSystemLibrary::IsSteamInitialized() {
    return false;
}

bool UTBLSystemLibrary::IsSpecificTeamFaction(EFaction Faction) {
    return false;
}

bool UTBLSystemLibrary::IsSoundEnabled(UObject* WorldContextObject) {
    return false;
}

bool UTBLSystemLibrary::IsSimulatingInEditor() {
    return false;
}

bool UTBLSystemLibrary::IsRunningAutomatedTesting(UObject* WorldContextObject) {
    return false;
}

bool UTBLSystemLibrary::IsRangedWeapon(AInventoryItem* Weapon) {
    return false;
}

bool UTBLSystemLibrary::IsRangedOrThrownAttack(FName AttackName) {
    return false;
}

bool UTBLSystemLibrary::IsPartOfFaction(EFaction Target, EFaction Other) {
    return false;
}

bool UTBLSystemLibrary::IsOfficialServer() {
    return false;
}

bool UTBLSystemLibrary::IsNonSpecificTeamFaction(EFaction Faction) {
    return false;
}

bool UTBLSystemLibrary::IsMergedMesh(ACharacter* Character) {
    return false;
}

bool UTBLSystemLibrary::IsMergedMaterial(ACharacter* Character) {
    return false;
}

bool UTBLSystemLibrary::IsFirstMainMenuLoad() {
    return false;
}

bool UTBLSystemLibrary::IsDemoMode(const UObject* WorldContextObject) {
    return false;
}

bool UTBLSystemLibrary::IsDefendingFaction(const UObject* WorldContextObject, EFaction Faction) {
    return false;
}

bool UTBLSystemLibrary::IsDamageExemptFromTeamDamage(AActor* DamageCauser, UDamageSource* DamageSource) {
    return false;
}

bool UTBLSystemLibrary::IsControllerMounted(AController* Controller, TSubclassOf<ASiegeEngine> SiegeEngineClass) {
    return false;
}

bool UTBLSystemLibrary::IsBot(AActor* Actor) {
    return false;
}

bool UTBLSystemLibrary::IsAutomationTesting() {
    return false;
}

bool UTBLSystemLibrary::IsAttackingFaction(const UObject* WorldContextObject, EFaction Faction) {
    return false;
}

void UTBLSystemLibrary::InterpolateVectorOverTime(UObject* WorldContextObject, FVector StartValue, FVector EndValue, float Duration, bool bEaseOut, bool bEaseIn, float EasingExp, UCurveFloat* Curve, FInterpolatorVectorUpdated UpdateDelegate, TEnumAsByte<EInterpolateOverTimeAction::Type> InterpolateAction, FLatentActionInfo LatentInfo, bool bCallUpdatesParams) {
}

void UTBLSystemLibrary::InterpolateFloatOverTime(UObject* WorldContextObject, float StartValue, float EndValue, float Duration, bool bEaseOut, bool bEaseIn, float EasingExp, UCurveFloat* Curve, FInterpolatorFloatUpdated UpdateDelegate, TEnumAsByte<EInterpolateOverTimeAction::Type> InterpolateAction, FLatentActionInfo LatentInfo, bool bCallUpdatesParams) {
}

bool UTBLSystemLibrary::HasRole(AActor* Actor, int32 Role) {
    return false;
}

bool UTBLSystemLibrary::HasActorBegunPlay(AActor* Actor) {
    return false;
}

TEnumAsByte<ETBLWorldType::Type> UTBLSystemLibrary::GetWorldType(UObject* WorldContextObject) {
    return ETBLWorldType::None;
}

FString UTBLSystemLibrary::GetUnlocalizedGameModeFromMapString(const FString& MapNameString) {
    return TEXT("");
}

int32 UTBLSystemLibrary::GetTotalPlayerCount(UObject* WorldContextObject) {
    return 0;
}

UFont* UTBLSystemLibrary::GetTinyFont() {
    return NULL;
}

float UTBLSystemLibrary::GetTimeSeconds(AActor* Actor) {
    return 0.0f;
}

FText UTBLSystemLibrary::GetTextFromNamespace(const FString& Namespace, const FString& Key) {
    return FText::GetEmpty();
}

TArray<ATBLTeam*> UTBLSystemLibrary::GetTeamsFromFactions(UObject* WorldContextObject, TArray<EFaction> Factions) {
    return TArray<ATBLTeam*>();
}

ATBLTeam* UTBLSystemLibrary::GetTeamFromFaction(UObject* WorldContextObject, EFaction Faction) {
    return NULL;
}

ATBLLevelScriptActor* UTBLSystemLibrary::GetTBLLevelScriptActor(UObject* WorldContextObject, bool& bIsValid) {
    return NULL;
}

UTBLGameUserSettings* UTBLSystemLibrary::GetTBLGameUserSettings() {
    return NULL;
}

ATBLGameState* UTBLSystemLibrary::GetTBLGameState(UObject* WorldContextObject) {
    return NULL;
}

ATBLGameMode* UTBLSystemLibrary::GetTBLGameMode(UObject* WorldContextObject) {
    return NULL;
}

ATBLCharacter* UTBLSystemLibrary::GetTBLCharacterFromController(const AController* Controller) {
    return NULL;
}

ATBLCharacter* UTBLSystemLibrary::GetTBLCharacter(APawn* Pawn) {
    return NULL;
}

UStatsComponent* UTBLSystemLibrary::GetStatsComponent(AActor* Actor) {
    return NULL;
}

UStaticMeshComponent* UTBLSystemLibrary::GetStaticMeshComponent(AActor* Actor) {
    return NULL;
}

UFont* UTBLSystemLibrary::GetSmallFont() {
    return NULL;
}

bool UTBLSystemLibrary::GetShowBigNotification(UObject* WorldContextObject) {
    return false;
}

float UTBLSystemLibrary::GetServerTimeoutTime(UObject* WorldContextObject) {
    return 0.0f;
}

FVector UTBLSystemLibrary::GetScreenPositionForLocation(APlayerController* PlayerController, const FVector& Location) {
    return FVector{};
}

FVector UTBLSystemLibrary::GetScreenPositionForActor(APlayerController* PlayerController, AActor* Actor, const FVector& RelativeLocation, bool bUseActorBoundsOrigin) {
    return FVector{};
}

TArray<FGameModeMessageTable> UTBLSystemLibrary::GetScoredStageGameModeMessageRows(UDataTable* GameModeMessageDataTable, int32 StageNum, int32 NewScore, int32 LastScore) {
    return TArray<FGameModeMessageTable>();
}

AActor* UTBLSystemLibrary::GetPossessorActor(AActor* Actor) {
    return NULL;
}

TArray<ATBLPlayerState*> UTBLSystemLibrary::GetPlayerStatesFromFaction(UObject* WorldContextObject, EFaction Faction) {
    return TArray<ATBLPlayerState*>();
}

TArray<ATBLPlayerState*> UTBLSystemLibrary::GetPlayerStates(UObject* WorldContextObject) {
    return TArray<ATBLPlayerState*>();
}

ATBLPlayerState* UTBLSystemLibrary::GetPlayerStateFromUniqueNetId(UObject* WorldContextObject, const FUniqueNetIdRepl& UniqueId) {
    return NULL;
}

TArray<AController*> UTBLSystemLibrary::GetPlayersFromFactions(UObject* WorldContextObject, TArray<EFaction> Factions, bool AllowBots, bool AllowNPCs) {
    return TArray<AController*>();
}

FString UTBLSystemLibrary::GetPlayerDebugName(APlayerState* PlayerState) {
    return TEXT("");
}

FactionNumbers UTBLSystemLibrary::GetPlayerCountsFromFaction(UObject* WorldContextObject, EFaction Faction) {
    return FactionNumbers{};
}

TArray<FPersonalityEmoteTableRow> UTBLSystemLibrary::GetPersonalityEmotes() {
    return TArray<FPersonalityEmoteTableRow>();
}

ATBLTeam* UTBLSystemLibrary::GetOppositeTeam(UObject* WorldContextObject, ATBLTeam* Team) {
    return NULL;
}

EFaction UTBLSystemLibrary::GetOppositeFaction(const UObject* WorldContextObject, EFaction Faction) {
    return EFaction::Agatha;
}

int32 UTBLSystemLibrary::GetOnlineStatWeaponTakedowns(ATBLPlayerState* State, EWeaponTag WeaponTag) {
    return 0;
}

int32 UTBLSystemLibrary::GetOnlineStatWeaponKills(ATBLPlayerState* PlayerState, EWeaponTag Weapon) {
    return 0;
}

int32 UTBLSystemLibrary::GetOnlineStatWeaponDeaths(ATBLPlayerState* PlayerState, EWeaponTag Weapon) {
    return 0;
}

int32 UTBLSystemLibrary::GetOnlineStatSubClassTakedowns(ATBLPlayerState* PlayerState, ECharacterClass CharacterClass) {
    return 0;
}

int32 UTBLSystemLibrary::GetOnlineStatSubClassPlaytime(ATBLPlayerState* PlayerState, ECharacterClass CharacterClass) {
    return 0;
}

int32 UTBLSystemLibrary::GetOnlineStatSubClassKills(ATBLPlayerState* PlayerState, ECharacterClass CharacterClass) {
    return 0;
}

int32 UTBLSystemLibrary::GetOnlineStatSubClassDeaths(ATBLPlayerState* PlayerState, ECharacterClass CharacterClass) {
    return 0;
}

EOnlineStat UTBLSystemLibrary::GetOnlineStatFromWeaponTag(EWeaponTag WeaponTag) {
    return EOnlineStat::Invalid;
}

EOnlineStat UTBLSystemLibrary::GetOnlineStatFromCharacterClass(ECharacterClass CharacterClass) {
    return EOnlineStat::Invalid;
}

int32 UTBLSystemLibrary::GetOnlineStatCommendations(ATBLPlayerState* PlayerState) {
    return 0;
}

int32 UTBLSystemLibrary::GetOnlineStatBattlecries(ATBLPlayerState* PlayerState) {
    return 0;
}

FText UTBLSystemLibrary::GetObjectiveScoreTextFromEnum(TEnumAsByte<EObjectivePointCategory::Type> ObjPointCat) {
    return FText::GetEmpty();
}

int32 UTBLSystemLibrary::GetNumPlayers(UObject* WorldContextObject, bool IncludeBots, bool IncludeNPCs) {
    return 0;
}

FTeamDisplayInfo UTBLSystemLibrary::GetNeutralTeamDisplayInfo(UObject* WorldContextObject) {
    return FTeamDisplayInfo{};
}

FVector UTBLSystemLibrary::GetNegativeMaxFloatVector() {
    return FVector{};
}

float UTBLSystemLibrary::GetNegativeMaxFloat() {
    return 0.0f;
}

bool UTBLSystemLibrary::GetNDASigned(UObject* WorldContextObject) {
    return false;
}

FText UTBLSystemLibrary::GetNameFromCharacterClass(TSubclassOf<ATBLCharacter> CharacterClass) {
    return FText::GetEmpty();
}

UMovementModifierComponent* UTBLSystemLibrary::GetMovementModifierComponent(AActor* Actor) {
    return NULL;
}

UMovementComponent* UTBLSystemLibrary::GetMovementComponent(AActor* Actor) {
    return NULL;
}

int32 UTBLSystemLibrary::GetMaxPlayersForServer(UObject* WorldContextObject) {
    return 0;
}

float UTBLSystemLibrary::GetMaxFloat() {
    return 0.0f;
}

UTBLMapSummary* UTBLSystemLibrary::GetMapSummary(UObject* WorldContextObject, const FString& MapFileNameWithOptions, bool bCheckGameInstance) {
    return NULL;
}

FString UTBLSystemLibrary::GetMapNameString(UObject* WorldContextObject) {
    return TEXT("");
}

FText UTBLSystemLibrary::GetLocalizedWeaponTagText(EWeaponTag WeaponTag) {
    return FText::GetEmpty();
}

FText UTBLSystemLibrary::GetLocalizedTextFromItemUnlock(TEnumAsByte<EOnlineItemUnlockType::Type> ItemUnlockType) {
    return FText::GetEmpty();
}

FText UTBLSystemLibrary::GetLocalizedMapName(const FString& MapNameString, FString& MapNameKey) {
    return FText::GetEmpty();
}

FText UTBLSystemLibrary::GetLocalizedItemLevelTypeText(EOnlineStat ItemLevelType) {
    return FText::GetEmpty();
}

FText UTBLSystemLibrary::GetLocalizedGameModeTypeText(TEnumAsByte<EGameModeType::Type> GamemodeType) {
    return FText::GetEmpty();
}

bool UTBLSystemLibrary::GetLocalizedGameModeFromMapString(const FString& MapNameString, FText& LongForm, FText& ShortForm) {
    return false;
}

FText UTBLSystemLibrary::GetLocalizedCharacterClassText(ECharacterClass CharacterClass) {
    return FText::GetEmpty();
}

ULoadoutSelection* UTBLSystemLibrary::GetLoadoutSelectionDefaultObj(TSubclassOf<ULoadoutSelection> LoadoutSelectionClass) {
    return NULL;
}

ALevelScriptActor* UTBLSystemLibrary::GetLevelScriptActor(UObject* WorldContextObject) {
    return NULL;
}

float UTBLSystemLibrary::GetLastServerReceivePacketTime(UObject* WorldContextObject) {
    return 0.0f;
}

AActor* UTBLSystemLibrary::GetKilledActor(const FDeathDamageTakenEvent& Event) {
    return NULL;
}

FText UTBLSystemLibrary::GetInventorySlotTextFromEnum(EInventorySlot InventorySlotType) {
    return FText::GetEmpty();
}

UTexture2D* UTBLSystemLibrary::GetIconFromCharacterClass(TSubclassOf<ATBLCharacter> CharacterClass) {
    return NULL;
}

FName UTBLSystemLibrary::GetHitDirectionName(AActor* HitActor, FVector HitDirection) {
    return NAME_None;
}

FString UTBLSystemLibrary::GetGameModeNameString(UObject* WorldContextObject) {
    return TEXT("");
}

TArray<FGameModeMessageTable> UTBLSystemLibrary::GetGameModeMessageRows(UDataTable* GameModeMessageDataTable, TArray<FString> EventTags) {
    return TArray<FGameModeMessageTable>();
}

FString UTBLSystemLibrary::GetFullBuildVersionString() {
    return TEXT("");
}

FString UTBLSystemLibrary::GetFriendUserId(const FBlueprintOnlineUser& InFriend) {
    return TEXT("");
}

FString UTBLSystemLibrary::GetFriendDisplayName(const FBlueprintOnlineUser& InFriend) {
    return TEXT("");
}

void UTBLSystemLibrary::GetDisplayInfoFromCharacterClass(TSubclassOf<ATBLCharacter> CharacterClass, FCharacterDisplayInfo& DisplayInfo) {
}

UTBLDialogManager* UTBLSystemLibrary::GetDialogManager(UObject* WorldContextObject) {
    return NULL;
}

int32 UTBLSystemLibrary::GetDemoTeam(UObject* WorldContextObject) {
    return 0;
}

FString UTBLSystemLibrary::GetDemoServer(UObject* WorldContextObject) {
    return TEXT("");
}

FString UTBLSystemLibrary::GetDemoPlayerName(UObject* WorldContextObject) {
    return TEXT("");
}

EFaction UTBLSystemLibrary::GetDefendingFaction(const UObject* WorldContextObject) {
    return EFaction::Agatha;
}

UObject* UTBLSystemLibrary::GetDefaultObjectFromStringReference(const FSoftObjectPath& StringReference) {
    return NULL;
}

AInventoryItem* UTBLSystemLibrary::GetDefaultInventoryItemObject(TSubclassOf<AInventoryItem> InventoryItemClass) {
    return NULL;
}

ATBLCharacter* UTBLSystemLibrary::GetDefaultCharacterFromCharacterClass(TSubclassOf<ATBLCharacter> CharacterClass) {
    return NULL;
}

FDateTime UTBLSystemLibrary::GetDateTime(const FReplicatedDateTime& ReplDateTime) {
    return FDateTime{};
}

FName UTBLSystemLibrary::GetDamageSourceName(const UDamageSource* DamageSource) {
    return NAME_None;
}

UTexture* UTBLSystemLibrary::GetDamageSourceIconTexture(const UDamageSource* DamageSource) {
    return NULL;
}

FText UTBLSystemLibrary::GetDamageSourceDisplayName(const UDamageSource* DamageSource) {
    return FText::GetEmpty();
}

TArray<FCustomPersonalityEmotesTableRow> UTBLSystemLibrary::GetCustomPersonalityEmotes() {
    return TArray<FCustomPersonalityEmotesTableRow>();
}

bool UTBLSystemLibrary::GetCustomPersonalityEmoteOverride(FPersonalityEmoteTableRow Emote, TEnumAsByte<EAudioPersonalityType::Type> PersonalityType, FPersonalityEmoteTableRow& OutRow) {
    return false;
}

UCustomizationComponent* UTBLSystemLibrary::GetCustomizationComponent(AActor* Actor) {
    return NULL;
}

FString UTBLSystemLibrary::GetCurrentServerNameString(UObject* WorldContextObject) {
    return TEXT("");
}

FString UTBLSystemLibrary::GetCurrencyIdReal() {
    return TEXT("");
}

FString UTBLSystemLibrary::GetCurrencyIdGold() {
    return TEXT("");
}

FString UTBLSystemLibrary::GetCurrencyIdCrowns() {
    return TEXT("");
}

ECrowdControlDirection UTBLSystemLibrary::GetCrowdControlDirection(FName Direction) {
    return ECrowdControlDirection::Default;
}

TArray<AController*> UTBLSystemLibrary::GetControllersFromFaction(UObject* WorldContextObject, EFaction Faction) {
    return TArray<AController*>();
}

UContextVOManager* UTBLSystemLibrary::GetContextVoObject(const UObject* WorldContextObject) {
    return NULL;
}

UConditionsComponent* UTBLSystemLibrary::GetConditionsComponent(AActor* Actor) {
    return NULL;
}

FString UTBLSystemLibrary::GetClassPathName(const UClass* InClass) {
    return TEXT("");
}

TSubclassOf<ATBLCharacter> UTBLSystemLibrary::GetCharacterSubclassForPrimaryWeapon(TSubclassOf<ATBLCharacter> CharacterClass, TSubclassOf<AInventoryItem> PrimaryWeapon) {
    return NULL;
}

TArray<TSubclassOf<ATBLCharacter>> UTBLSystemLibrary::GetCharacterSubclasses(TSubclassOf<ATBLCharacter> ParentClass) {
    return TArray<TSubclassOf<ATBLCharacter>>();
}

TArray<ATBLCharacter*> UTBLSystemLibrary::GetCharactersFromFactions(UObject* WorldContextObject, TArray<EFaction> Factions, bool AllowBots, bool AllowNPCs) {
    return TArray<ATBLCharacter*>();
}

TEnumAsByte<EAudioClassType::Type> UTBLSystemLibrary::GetCharacterClassType(AActor* Actor) {
    return EAudioClassType::Archer;
}

TSubclassOf<ATBLCharacter> UTBLSystemLibrary::GetCharacterClassFromSubclass(TSubclassOf<ATBLCharacter> Subclass) {
    return NULL;
}

FString UTBLSystemLibrary::GetBuildNumber() {
    return TEXT("");
}

EBuildFinality UTBLSystemLibrary::GetBuildFinality() {
    return EBuildFinality::Development;
}

EFaction UTBLSystemLibrary::GetAttackingFaction(const UObject* WorldContextObject) {
    return EFaction::Agatha;
}

TArray<AActor*> UTBLSystemLibrary::GetAttachedActors(AActor* Actor) {
    return TArray<AActor*>();
}

AAlwaysOnMusicManager* UTBLSystemLibrary::GetAlwaysOnMusicManager(UObject* WorldContextObject) {
    return NULL;
}

void UTBLSystemLibrary::GetAllTeamsPlayersWithExclusion(UObject* WorldContextObject, TArray<EFaction> ExcludeFactions, TArray<ATBLTeam*>& IncludedTeams, TArray<AController*>& IncludedPlayers) {
}

TArray<FString> UTBLSystemLibrary::GetAllNames(ENameType NameType) {
    return TArray<FString>();
}

void UTBLSystemLibrary::GetAllMapNames_EditorOnly(TArray<FString>& MapNames) {
}

TArray<FString> UTBLSystemLibrary::GetAllFrontendMovieURLs() {
    return TArray<FString>();
}

TArray<UActorComponent*> UTBLSystemLibrary::GetAllComponentsFromClass(TSubclassOf<AActor> ActorClass) {
    return TArray<UActorComponent*>();
}

TArray<ATBLCharacter*> UTBLSystemLibrary::GetAllCharactersFromFaction(UObject* WorldContextObject, EFaction Faction) {
    return TArray<ATBLCharacter*>();
}

void UTBLSystemLibrary::GetAllActorsWithTag(const UObject* WorldContextObject, FName Tag, TArray<AActor*>& OutActors) {
}

TArray<AActor*> UTBLSystemLibrary::GetAllActorsWithComponentsWithExclusions(const TArray<TSubclassOf<UActorComponent>>& ComponentClasses, const TArray<TSubclassOf<UActorComponent>>& ExcludeComponentClasses, const TArray<TSubclassOf<AActor>>& OptionalActorClasses, UObject* WorldContextObject) {
    return TArray<AActor*>();
}

TArray<AActor*> UTBLSystemLibrary::GetAllActorsWithComponents(const TArray<TSubclassOf<UActorComponent>>& ComponentClasses, UObject* WorldContextObject) {
    return TArray<AActor*>();
}

ATBLTeam* UTBLSystemLibrary::GetActorTeam(AActor* Actor) {
    return NULL;
}

void UTBLSystemLibrary::GetActorsWithTagClassSpecifier(FName Tag, TSubclassOf<AActor> ActorClass, const UObject* WorldContextObject, TArray<AActor*>& OutActors) {
}

TArray<AActor*> UTBLSystemLibrary::GetActorsWithTag(const FName& Tag, UObject* WorldContextObject) {
    return TArray<AActor*>();
}

void UTBLSystemLibrary::GetActorMaterials(AActor* Actor, TArray<UPrimitiveComponent*>& OutComponents, TArray<UMaterialInstanceDynamic*>& OutMaterials) {
}

EFaction UTBLSystemLibrary::GetActorFaction(const AActor* Actor) {
    return EFaction::Agatha;
}

AInventoryItem* UTBLSystemLibrary::GetActorEquippedWeaponByState(const AActor* Actor, EEquippedState EquippedState) {
    return NULL;
}

AInventoryItem* UTBLSystemLibrary::GetActorEquippedWeapon(const AActor* Actor) {
    return NULL;
}

UActorComponent* UTBLSystemLibrary::GetActorComponentWithTag(AActor* Actor, FName Tag) {
    return NULL;
}

UActorComponent* UTBLSystemLibrary::GetActorComponent(AActor* Actor, TSubclassOf<UActorComponent> Class) {
    return NULL;
}

AInventoryItem* UTBLSystemLibrary::GetActorAttackingWeapon(const AActor* Actor) {
    return NULL;
}

FText UTBLSystemLibrary::GetActionBindingTextForInventorySlot(EInventoryItemSlot InventoryItemSlot, UObject* WorldContextObject, FInputActionKeyMapping& ActionMapping) {
    return FText::GetEmpty();
}

bool UTBLSystemLibrary::GetAbilityConfigLoaded(UObject* WorldContextObject) {
    return false;
}

UAbilityConfig* UTBLSystemLibrary::GetAbilityConfig(UObject* WorldContextObject) {
    return NULL;
}

UAbilitiesComponent* UTBLSystemLibrary::GetAbilitiesComponent(AActor* Actor) {
    return NULL;
}

FString UTBLSystemLibrary::GenerateRandomName(ENameType NameType) {
    return TEXT("");
}

FString UTBLSystemLibrary::GenerateHashName(const FString& StringToHash, ENameType NameType) {
    return TEXT("");
}

FLinearColor UTBLSystemLibrary::GammaCorrectLinearColor(FLinearColor LinCol, float Gamma) {
    return FLinearColor{};
}

void UTBLSystemLibrary::FrameDelay(UObject* WorldContextObject, int32 NumFramesToDelay, FLatentActionInfo LatentInfo) {
}

TArray<FGameModeMessage> UTBLSystemLibrary::FormatGameModeMessages(TArray<FGameModeMessageTable> Messages) {
    return TArray<FGameModeMessage>();
}

void UTBLSystemLibrary::ForceUpdateChildTransforms(USceneComponent* Component) {
}

void UTBLSystemLibrary::ForcePlayersDropCarryable(UObject* WorldContextObject, EFaction Faction, TSubclassOf<AInventoryItem> InventoryType) {
}

void UTBLSystemLibrary::ForcePlayerDropCarryable(ATBLCharacter* Character, TSubclassOf<AInventoryItem> InventoryType) {
}

UClass* UTBLSystemLibrary::FindBlueprintClass(const FString& BlueprintName, UClass* ParentClass) {
    return NULL;
}

void UTBLSystemLibrary::EndProfilerStat(const FProfilerStat& ProfilerStat) {
}

void UTBLSystemLibrary::DumpPlayers(UWorld* World) {
}

void UTBLSystemLibrary::DoKeyEvent(AActor* Actor, FName ActionName, TEnumAsByte<EInputEvent> KeyEvent) {
}

void UTBLSystemLibrary::DoKeyAxis(AActor* Actor, FName ActionName, float AxisValue) {
}

bool UTBLSystemLibrary::DoesActorHaveInventoryItem(AActor* Actor, TSubclassOf<AInventoryItem> InventoryItem, bool bCanBeChildOf) {
    return false;
}

void UTBLSystemLibrary::DisableComponentsOnServer(AActor* Actor, int32 DisableFlags) {
}

void UTBLSystemLibrary::DisableComponentsOnBotClient(AActor* Actor) {
}

void UTBLSystemLibrary::DestroyActorComponent(UActorComponent* Component) {
}

UStatsComponent* UTBLSystemLibrary::CreateStatsComponent(AActor* Actor) {
    return NULL;
}

AActor* UTBLSystemLibrary::CreateSoundActor(AActor* ReferenceActor, FVector OffsetLocation) {
    return NULL;
}

void UTBLSystemLibrary::ClearCharacterRuntimeAssetCache() {
}

bool UTBLSystemLibrary::CanCharacterSubclassUsePrimaryWeapon(TSubclassOf<ATBLCharacter> CharacterSubclass, TSubclassOf<AInventoryItem> PrimaryWeapon) {
    return false;
}

void UTBLSystemLibrary::CancelAllLatentActionsForObject(UObject* Object) {
}

void UTBLSystemLibrary::BreakCanvasIcon(FCanvasIcon Icon, UTexture*& Texture, float& U, float& V, float& UL, float& VL) {
}

bool UTBLSystemLibrary::BlueprintOnlineUserEquals(const FBlueprintOnlineUser& A, const FBlueprintOnlineUser& B) {
    return false;
}

void UTBLSystemLibrary::BeginProfilerStat(const FProfilerStat& ProfilerStat) {
}

void UTBLSystemLibrary::AwardScoreToPlayers(UObject* WorldContextObject, TArray<ATBLPlayerState*> PlayerStates, FName RowName, EOnlineStat Stat) {
}

void UTBLSystemLibrary::AwardOverrideScoreToPlayer(FName RowName, int32 Score, ATBLPlayerState* Player, ATBLPlayerState* OtherPlayer) {
}

USceneComponent* UTBLSystemLibrary::AttachComponentFromSCS(UClass* Class, AActor* TargetActor, USceneComponent* TargetComponent, FName ComponentName) {
    return NULL;
}

void UTBLSystemLibrary::AtlasCharacterTextures(ACharacter* Character) {
}

bool UTBLSystemLibrary::AreHardwarePlatformsFromTheSameFirstParty(EHardwarePlatform A, EHardwarePlatform B) {
    return false;
}

bool UTBLSystemLibrary::AddTagsToActor(AActor* Actor, TArray<FName> Tags, UObject* WorldContextObject) {
    return false;
}

void UTBLSystemLibrary::AddClosedCaptionLine(FText OriginString, FText ChatString, AActor* OriginatingActor, EClosedCaptionType Type, UObject* WorldContextObject, bool IgnoreDistance) {
}

UTBLSystemLibrary::UTBLSystemLibrary() {
}

