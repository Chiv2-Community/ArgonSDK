#include "TBLCharacter.h"
#include "AkComponent.h"
#include "Camera/CameraComponent.h"
#include "AbilitiesComponent.h"
#include "CombatStateComponent.h"
#include "CombatStateQueue.h"
#include "CombatStateSynchronization.h"
#include "ConditionsComponent.h"
#include "CustomizationComponent.h"
#include "HeadlookComponent.h"
#include "InteractableComponent.h"
#include "Inventory.h"
#include "MovementModifierComponent.h"
#include "Net/UnrealNetwork.h"
#include "PerksComponent.h"
#include "PushingComponent.h"
#include "StatsComponent.h"
#include "Templates/SubclassOf.h"

void ATBLCharacter::WasHitEarly(const FHitResult& Hit, ATBLCharacter* AttackingCharacter) {
}

void ATBLCharacter::WasHitAfterDeath(FHitResult& Hit, ATBLCharacter* OtherCharacter) {
}

void ATBLCharacter::UpdateThirdPersonCamera(float DeltaSeconds, bool bSpectator) {
}

void ATBLCharacter::UpdateSpecialItemAbility(AInventoryItem* SpecialItem) {
}

void ATBLCharacter::UpdateRagdoll(float DeltaSeconds) {
}

void ATBLCharacter::UpdatePlayingVO(float DeltaSeconds) {
}

void ATBLCharacter::UpdateParryAim(float DeltaSeconds) {
}

void ATBLCharacter::UpdateLockMeshRotation() {
}

void ATBLCharacter::UpdateBlending(float DeltaSeconds) {
}

void ATBLCharacter::UpdateAttachedSmoothing(float DeltaSeconds) {
}

void ATBLCharacter::UnfreezeRagdoll() {
}

void ATBLCharacter::TutorialPlayerControl(FTutorialPlayerControlParams Params) {
}

void ATBLCharacter::SwitchAttachedItemMesh(USkeletalMeshComponent* ParentMesh) {
}

void ATBLCharacter::Suicide(EKillReason KillReason) {
}

void ATBLCharacter::StopRevive(ATBLCharacter* DownedCharacter) {
}

void ATBLCharacter::StopLowPriorityCharacterActionEvent() {
}

void ATBLCharacter::StopHighPriorityCharacterActionEvent() {
}

void ATBLCharacter::StopCharacterActionEvent() {
}

void ATBLCharacter::StartRevive(ATBLCharacter* DownedCharacter) {
}

bool ATBLCharacter::ShouldIgnoreAI() const {
    return false;
}

bool ATBLCharacter::ShouldClash(ATBLCharacter* InitiatorCharacter, ATBLCharacter* TargetCharacter, FVector ClashLocation) const {
    return false;
}

bool ATBLCharacter::ShouldBlockCharacter(ATBLCharacter* AttackingCharacter, ATBLCharacter* HitCharacter, FActionContext& Context) const {
    return false;
}

bool ATBLCharacter::ShouldAttackBeCountered(ATBLCharacter* AttackingCharacter, AInventoryItem* AttackingItem, AInventoryItem* DefenderItem) const {
    return false;
}

void ATBLCharacter::SetupAI() {
}

void ATBLCharacter::SetThirdPersonDeathCamera() {
}

void ATBLCharacter::SetSpectatingPawn(ATBLSpectatorPawn* NewSpectatingPawn) {
}

void ATBLCharacter::SetRagdollPhysics() {
}

void ATBLCharacter::SetPlayerDrunk(bool IsDrunk) {
}

void ATBLCharacter::SetIsInitialAutorun() {
}

void ATBLCharacter::SetIgnoreAI(bool bNewIgnoreAI) {
}

void ATBLCharacter::SetFirstPersonDeathCamera() {
}

void ATBLCharacter::SetDeathAnimationParameters(const FDamageTakenEvent& Event) {
}

void ATBLCharacter::SetCinematicRestrictedControl(bool bRestricted) {
}

void ATBLCharacter::ServerUseTornOffItem_Implementation(TSubclassOf<AInventoryItem> ItemClass, FName TornOffName) {
}
bool ATBLCharacter::ServerUseTornOffItem_Validate(TSubclassOf<AInventoryItem> ItemClass, FName TornOffName) {
    return true;
}

void ATBLCharacter::ServerUseHeldStart_Implementation(UInteractableComponent* Interactable) {
}
bool ATBLCharacter::ServerUseHeldStart_Validate(UInteractableComponent* Interactable) {
    return true;
}

void ATBLCharacter::ServerUseHeldRelease_Implementation(UInteractableComponent* Interactable) {
}
bool ATBLCharacter::ServerUseHeldRelease_Validate(UInteractableComponent* Interactable) {
    return true;
}

void ATBLCharacter::ServerUseHeldComplete_Implementation(UInteractableComponent* Interactable) {
}
bool ATBLCharacter::ServerUseHeldComplete_Validate(UInteractableComponent* Interactable) {
    return true;
}

void ATBLCharacter::ServerUse_Implementation(UInteractableComponent* Interactable, bool bIsAutoPickup) {
}
bool ATBLCharacter::ServerUse_Validate(UInteractableComponent* Interactable, bool bIsAutoPickup) {
    return true;
}

void ATBLCharacter::ServerSetFireSource_Implementation(UFireSourceComponent* NewFireSource) {
}
bool ATBLCharacter::ServerSetFireSource_Validate(UFireSourceComponent* NewFireSource) {
    return true;
}

void ATBLCharacter::ServerPlayEmote_Implementation(uint8 EmoteRowNum, TEnumAsByte<EAudioPersonalityType::Type> PersonalityType, uint8 EmotePlayingSeqNum, uint8 bIsOverrideEmote, uint8 EmoteType) {
}
bool ATBLCharacter::ServerPlayEmote_Validate(uint8 EmoteRowNum, TEnumAsByte<EAudioPersonalityType::Type> PersonalityType, uint8 EmotePlayingSeqNum, uint8 bIsOverrideEmote, uint8 EmoteType) {
    return true;
}

void ATBLCharacter::ServerPlayChickenEmote_Implementation() {
}
bool ATBLCharacter::ServerPlayChickenEmote_Validate() {
    return true;
}

void ATBLCharacter::ServerHitWorld_Implementation(const FHitWorldParams& Params, float ClientTimeStamp) {
}
bool ATBLCharacter::ServerHitWorld_Validate(const FHitWorldParams& Params, float ClientTimeStamp) {
    return true;
}

void ATBLCharacter::ServerHandleOnCustomizationJobsEmptied_Implementation() {
}
bool ATBLCharacter::ServerHandleOnCustomizationJobsEmptied_Validate() {
    return true;
}

void ATBLCharacter::ServerEnterPostGameState_Implementation() {
}
bool ATBLCharacter::ServerEnterPostGameState_Validate() {
    return true;
}

void ATBLCharacter::ServerDismountPressed_Implementation() {
}
bool ATBLCharacter::ServerDismountPressed_Validate() {
    return true;
}

void ATBLCharacter::Revive(ATBLCharacter* DownedCharacter) {
}

void ATBLCharacter::RemoveEmoteFromQueue(int32 EmoteId) {
}

void ATBLCharacter::RemoveConstructableActor(AActor* DestroyedActor) {
}

void ATBLCharacter::PushRespawnState() {
}

void ATBLCharacter::ProcessTurnAndLookInputRate(const TEnumAsByte<EAxis::Type> Axis, const float Rate) {
}

void ATBLCharacter::ProcessTurnAndLookInput(const TEnumAsByte<EAxis::Type> Axis, const float Value) {
}

void ATBLCharacter::PlayLowPriorityCharacterActionEvent(const FSoundSwitchEntry SoundSwitch) const {
}

void ATBLCharacter::PlayHighPriorityCharacterActionEvent(const FSoundSwitchEntry SoundSwitch) {
}

void ATBLCharacter::PlayEmoteFromServer(FName EmoteName) {
}

bool ATBLCharacter::PlayEmote(FPersonalityEmoteTableRow Emote, ERadialVOMenuPage Page) {
    return false;
}

void ATBLCharacter::PlayChickenEmote() {
}

void ATBLCharacter::PlayCharacterActionEvent(const FSoundSwitchEntry SoundSwitch, bool IsLocalPlayerInvolved) const {
}

void ATBLCharacter::PlayAutoVOFromServer(TEnumAsByte<EAudioAutoVOType::Type> AutoVoType, bool SkipLocalPlayer) {
}

void ATBLCharacter::PlayAutoVO(TEnumAsByte<EAudioAutoVOType::Type> AutoVoType) {
}

void ATBLCharacter::PauseCharacter(bool bPaused) {
}

void ATBLCharacter::OnTeamChanged(ATBLTeam* OwnerTeam) {
}

void ATBLCharacter::OnRep_SpecialItemCharge() {
}

void ATBLCharacter::OnRep_SpawnedAtSpawnComp() {
}

void ATBLCharacter::OnRep_ShouldCharacterBeHidden() {
}

void ATBLCharacter::OnRep_RandomSeed(int32 PreviousRandomInt) {
}

void ATBLCharacter::OnRep_LockMeshRotation() {
}

void ATBLCharacter::OnRep_InventorySlots() {
}

void ATBLCharacter::OnRep_CinematicRestrictedControl() {
}

void ATBLCharacter::OnRep_BeingRevivedBy() {
}

void ATBLCharacter::OnRep_AttachToProjectile(AInventoryItem* Projectile) {
}

void ATBLCharacter::OnProjectileStopAfterDeath(const FHitResult& ImpactResult) {
}

void ATBLCharacter::OnMeleeHitSuccess(AActor* HitActor) {
}

void ATBLCharacter::OnKilled(const FDeathDamageTakenEvent& DamageEvent) {
}

void ATBLCharacter::OnInteractableUsePawnChanged(APawn* Pawn) {
}


void ATBLCharacter::OnEquippedItemsChanged() {
}

void ATBLCharacter::OnDamageTaken(const FDamageTakenEvent& DamageEvent) {
}


void ATBLCharacter::OnConstructableActorKilled(const FDeathDamageTakenEvent& Event) {
}

void ATBLCharacter::OnConstructableActorDestroyed(AActor* DestroyedActor) {
}

void ATBLCharacter::OnComponentOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo) {
}

void ATBLCharacter::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ATBLCharacter::OnCombatStateEnd(AActor* Actor, FName State, const FAttackInfo& EventAttackInfo, UCombatState* CombatState) {
}

void ATBLCharacter::OnCombatStateBegin(AActor* Actor, FName State, const FAttackInfo& EventAttackInfo, UCombatState* CombatState) {
}

void ATBLCharacter::OnCausedDamage(const FDamageTakenEvent& DamageEvent) {
}

void ATBLCharacter::OnAttachedRagdollActorDestroyed(AActor* DestroyedActor) {
}

void ATBLCharacter::OnApplyCondition(AActor* Actor, EConditionType Condition) {
}

void ATBLCharacter::NetMulticastFastSharedReplication_Implementation(const FFastSharedProperties_TBLCharacter& Properties) {
}

void ATBLCharacter::LoserEnterPostGameState() {
}

void ATBLCharacter::KillWithHitParams(EKillReason KillReason, bool bSwitchedTeamsInLoadoutVolume, FHitResult HitResult, FVector HitDirection, AActor* Killer) {
}

void ATBLCharacter::Kill(EKillReason KillReason, bool bSwitchedTeamsInLoadoutVolume, AActor* Killer) {
}

bool ATBLCharacter::IsSprinting() {
    return false;
}

bool ATBLCharacter::IsSpecialPawnClass() const {
    return false;
}

bool ATBLCharacter::IsSpawnFadeOutEnabled() const {
    return false;
}

bool ATBLCharacter::IsPawnSubclass() const {
    return false;
}

bool ATBLCharacter::IsLocalPlayer() {
    return false;
}

bool ATBLCharacter::IsInterpingToMountLocation() const {
    return false;
}

bool ATBLCharacter::IsInRagdoll() const {
    return false;
}

bool ATBLCharacter::IsInParryView(UParryComponent* ParryComp, const FTransform& BoxTransform, const FVector& BoxExtents, float IgnoreParryDepth) const {
    return false;
}

bool ATBLCharacter::IsInitialAutorun() const {
    return false;
}

bool ATBLCharacter::IsHoldingAltAttack(float Tolerance) {
    return false;
}

bool ATBLCharacter::IsFollowAnimationEnabled() const {
    return false;
}

bool ATBLCharacter::IsFacingTarget(const FHitResult& Hit, const FFacingTargetParams& Params) {
    return false;
}

bool ATBLCharacter::IsCinematicRestrictedControl() {
    return false;
}

bool ATBLCharacter::IsCharacterPaused() const {
    return false;
}

bool ATBLCharacter::IsCharacterClassArchetype(ECharacterClass Type) {
    return false;
}

bool ATBLCharacter::IsBlocking(ATBLCharacter* AttackingCharacter) const {
    return false;
}

bool ATBLCharacter::IsArrowCameraEnabled() const {
    return false;
}

void ATBLCharacter::InterruptUse(FName NextCombatState) {
}

void ATBLCharacter::InitiateAbilityByName(FName AbilityName) {
}

void ATBLCharacter::HitWorldWithStats(FHitResult Hit, bool bParried) {
}

void ATBLCharacter::HitWorld(const FHitResult& Hit) {
}

void ATBLCharacter::HitClash(FHitResult& Hit, ATBLCharacter* OtherCharacter) {
}

void ATBLCharacter::HideCharacterAndEquipment(bool bHide) {
}

bool ATBLCharacter::HasCondition(EConditionType Condition) const {
    return false;
}

void ATBLCharacter::HandleOnCustomizationJobsEmptied() {
}

FThirdPersonCameraParams ATBLCharacter::GetThirdPersonCameraParams() {
    return FThirdPersonCameraParams{};
}

USpecialItemAbility* ATBLCharacter::GetSpecialItemAbility() {
    return NULL;
}

TEnumAsByte<EAudioPersonalityType::Type> ATBLCharacter::GetPersonalityType() const {
    return EAudioPersonalityType::Chiv1_Ag_Archer;
}

USkeletalMeshComponent* ATBLCharacter::GetPawnMesh(bool WantFirstPerson) const {
    return NULL;
}

ECharacterClass ATBLCharacter::GetPawnClassType() const {
    return ECharacterClass::None;
}

ECharacterClass ATBLCharacter::GetPawnClassArchetype() const {
    return ECharacterClass::None;
}

TArray<UParryComponent*> ATBLCharacter::GetParryComponents() {
    return TArray<UParryComponent*>();
}

float ATBLCharacter::GetNeedsHealingThreshold() {
    return 0.0f;
}

AController* ATBLCharacter::GetLastController() {
    return NULL;
}

UInventory* ATBLCharacter::GetInventory() const {
    return NULL;
}

UInteractableComponent* ATBLCharacter::GetFocusedInteractable() {
    return NULL;
}

FVector ATBLCharacter::GetFacingDirection() const {
    return FVector{};
}

AInventoryItem* ATBLCharacter::GetEquippedWeapon() const {
    return NULL;
}

AInventoryItem* ATBLCharacter::GetEquippedItemByHand(EEquippedHand Hand) const {
    return NULL;
}

TArray<AInventoryItem*> ATBLCharacter::GetEquippedInventoryItems() const {
    return TArray<AInventoryItem*>();
}

float ATBLCharacter::GetDeathTime() {
    return 0.0f;
}

USkeletalMeshComponent* ATBLCharacter::GetCurrentMesh() const {
    return NULL;
}

TArray<AInventoryItem*> ATBLCharacter::GetCurrentAttackingWeapons() const {
    return TArray<AInventoryItem*>();
}

UCombatStateComponent* ATBLCharacter::GetCombatStateComponent() const {
    return NULL;
}

ECharacterClassType ATBLCharacter::GetCharacterClassType(ECharacterClass Type) {
    return ECharacterClassType::Invalid;
}

FString ATBLCharacter::GetCharacterClassAudioSwitch(TEnumAsByte<EAudioClassType::Type> ClassType, EFaction Faction) {
    return TEXT("");
}

ECharacterClass ATBLCharacter::GetCharacterClassArchetype(ECharacterClass Type) {
    return ECharacterClass::None;
}

TEnumAsByte<EAudioClassType::Type> ATBLCharacter::GetCharacterAudioType() const {
    return EAudioClassType::Archer;
}

FVector ATBLCharacter::GetCenterPlayArea() const {
    return FVector{};
}

FVector ATBLCharacter::GetCameraSocketLocation() const {
    return FVector{};
}

TSubclassOf<AInventoryItem> ATBLCharacter::GetBlockingInventoryItem(ATBLCharacter* AttackingCharacter) const {
    return NULL;
}

void ATBLCharacter::GetBattlecryActionEvent(UAkAudioEvent*& StartEvent, UAkAudioEvent*& StopEvent) {
}

float ATBLCharacter::GetAutoVODistanceSqrdByType(TEnumAsByte<EAudioAutoVOType::Type> Type) {
    return 0.0f;
}

float ATBLCharacter::GetAnimationPercent() const {
    return 0.0f;
}

FString ATBLCharacter::GetAIObjectiveDebugString() {
    return TEXT("");
}

TArray<AActor*> ATBLCharacter::GetAIObjectiveActors() const {
    return TArray<AActor*>();
}

AActor* ATBLCharacter::GetActorWhoAppliedCondition(EConditionType ConditionApplied) {
    return NULL;
}

void ATBLCharacter::GetActionEvent(UAkAudioEvent*& StartEvent, UAkAudioEvent*& StopEvent) {
}

void ATBLCharacter::FellOutOfWorldTimer() {
}

void ATBLCharacter::DoKeyEvent(FName ActionName, TEnumAsByte<EInputEvent> KeyEvent) {
}

void ATBLCharacter::DoKeyAxis(FName ActionName, float AxisValue) {
}

bool ATBLCharacter::DoesCountTowardKillsAndKnockdowns() const {
    return false;
}

void ATBLCharacter::DebugDrawShield(ATBLPlayerController* DebugController) {
}

void ATBLCharacter::DebugDrawParryBox(float DeltaTime) {
}

void ATBLCharacter::DebugDrawCamera(float DeltaTime) {
}

void ATBLCharacter::DeathAnimationOverlap() {
}

void ATBLCharacter::DamageWithHitParams(float Damage, FHitResult HitResult, FVector HitDirection, bool bLoseLimbCheat) {
}

void ATBLCharacter::ConsumeInputAction(FName ActionName, TEnumAsByte<EInputEvent> InputType) {
}

void ATBLCharacter::ConditionAppliedByActor(EConditionType ConditionApplied, AActor* ConditionCauser) {
}

void ATBLCharacter::ClientTeleportTo_Implementation(FVector vecTargetPos, FRotator vecTargetRot) {
}

void ATBLCharacter::ClientSuicideReceived_Implementation(FDamageTakenEventCompressed DamageEventCompressed) {
}

void ATBLCharacter::ClientSetCustomizationSwatches_Implementation(const TArray<FSwatchSelection>& Swatches) {
}

void ATBLCharacter::ClientReliableNotifySuicide_Implementation(EKillReason KillReason) {
}

void ATBLCharacter::ClientDrawDebugString_Implementation(FVector Location, const FString& Text, FColor Clr, float Duration, float FontScale) {
}

void ATBLCharacter::ClientDrawDebugSphere_Implementation(FVector Center, float Radius, int32 Segments, FColor Clr, bool bPersistentLines) {
}

void ATBLCharacter::ClientDrawDebugPose_Implementation(ATBLCharacter* Character, FColor Clr) {
}

void ATBLCharacter::ClientDrawDebugPoint_Implementation(FVector Location, float Size, FColor Clr, bool bPersistentLines, float Lifetime) {
}

void ATBLCharacter::ClientDrawDebugLine_Implementation(FVector LineStart, FVector LineEnd, FColor Clr, bool bPersistentLines, float Lifetime, float Thickness) {
}

void ATBLCharacter::ClientDrawDebugCapsule_Implementation(FVector Center, float HalfHeight, float Radius, FColor Color) {
}

void ATBLCharacter::ClientDrawDebugBox_Implementation(FVector Center, FVector Box, FTransform Transform, FColor Color, bool bPersistentLines, float Lifetime) {
}

void ATBLCharacter::ClientDrawDebugArrow_Implementation(FVector LineStart, FVector LineEnd, FColor Clr, bool bPersistentLines, float Lifetime, float Thickness) {
}

void ATBLCharacter::ClientApplyCondition_Implementation(EConditionType Condition) {
}

void ATBLCharacter::ClearTutorialPlayerControl() {
}

void ATBLCharacter::CheckTeamCollision(AActor* OtherActor, UPrimitiveComponent* OtherComp) {
}

void ATBLCharacter::CarryableCharacterEvent(FName EventName, ATBLCharacter* ParentCharacter) {
}

void ATBLCharacter::CarryableAnimationEvent(FName EventName) {
}

bool ATBLCharacter::CanSprintShove() const {
    return false;
}

bool ATBLCharacter::CanSprintCharge() const {
    return false;
}

bool ATBLCharacter::CanSprintAttack() const {
    return false;
}

bool ATBLCharacter::CanRevive(APawn* Pawn) {
    return false;
}

bool ATBLCharacter::CanFullSprint() const {
    return false;
}

bool ATBLCharacter::CanClash() const {
    return false;
}

void ATBLCharacter::BroadcastWasHitEarly_Implementation(const FEarlyHitResult& EarlyHit) {
}

void ATBLCharacter::BroadcastPauseCharacter_Implementation(bool bPaused) {
}

void ATBLCharacter::BroadcastParryEvent_Implementation(AActor* Target, FParryEventReplicated ParryEventReplicated) {
}

void ATBLCharacter::BroadcastOnHealedByLocalPlayer() {
}

void ATBLCharacter::BroadcastLoseHelmet_Implementation() {
}

void ATBLCharacter::BroadcastHitWorldWithStats_Implementation(const FHitWorldParams& Params) {
}

void ATBLCharacter::BroadcastHitWorld_Implementation(const FHitWorldParams& Params) {
}

void ATBLCharacter::BroadcastDetachFromController_Implementation() {
}

void ATBLCharacter::BroadcastClashEvent_Implementation(ATBLCharacter* Target, FClashEventReplicated ClashEventReplicated) {
}

void ATBLCharacter::BroadcastCinematicRestrictControl() {
}

void ATBLCharacter::BroadcastCinematicAllowControl() {
}

void ATBLCharacter::BroadcastChickenEmote_Implementation() {
}

void ATBLCharacter::BroadcastCharacterEmote_Implementation(uint8 EmoteRowNum, TEnumAsByte<EAudioPersonalityType::Type> PersonalityType, uint8 EmotePlayingSeqNum, uint8 EmoteRandomSeed, uint8 bIsOverrideEmote, uint8 EmoteType) {
}

void ATBLCharacter::BroadcastAutoVO_Implementation(TEnumAsByte<EAudioAutoVOType::Type> AutoVoType, bool SkipLocalPlayer) {
}

void ATBLCharacter::BroadcastAbleToHealIfChanged() {
}

void ATBLCharacter::AddConstructableActorToArray(AActor* NewActor) {
}

void ATBLCharacter::AddConstructableActor(AInventoryItem* CarryableItem, AActor* NewActor) {
}

void ATBLCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATBLCharacter, ReplicatedServerFrame);
    DOREPLIFETIME(ATBLCharacter, RandomSeed);
    DOREPLIFETIME(ATBLCharacter, LockMeshRotationState);
    DOREPLIFETIME(ATBLCharacter, RemoteViewYaw);
    DOREPLIFETIME(ATBLCharacter, bUseRemoteViewYaw);
    DOREPLIFETIME(ATBLCharacter, bCinematicRestrictedControl);
    DOREPLIFETIME(ATBLCharacter, SpecialItemReplicated);
    DOREPLIFETIME(ATBLCharacter, bShouldCharacterBeHidden);
    DOREPLIFETIME(ATBLCharacter, BeingRevivedBy);
    DOREPLIFETIME(ATBLCharacter, SpawnedAtSpawnComp);
}

ATBLCharacter::ATBLCharacter() {
    this->AudioClassType = EAudioClassType::Archer;
    this->PawnClassType = ECharacterClass::None;
    this->ClassProgressionSpec = NULL;
    this->Abilities = CreateDefaultSubobject<UAbilitiesComponent>(TEXT("AbilitiesComponent"));
    this->Stats = CreateDefaultSubobject<UStatsComponent>(TEXT("StatsComponent"));
    this->HeadlookComponent = CreateDefaultSubobject<UHeadlookComponent>(TEXT("HeadlookComponent"));
    this->ReplicatedServerFrame = 0;
    this->RandomSeed = 0;
    this->PreviousBlendInTime = 0.20f;
    this->RemoteViewYaw = 0;
    this->bUseRemoteViewYaw = false;
    this->bCinematicRestrictedControl = false;
    this->CinematicRestrictedControlCameraLockAngle = 60.00f;
    this->CinematicRestrictedControlCameraLockID = -1;
    this->bShouldCharacterBeHidden = false;
    this->BeingRevivedBy = NULL;
    this->Mesh1P = NULL;
    this->FollowMeshComponent = NULL;
    this->PushingComponent = CreateDefaultSubobject<UPushingComponent>(TEXT("PushingComponent"));
    this->CustomizationComponent = CreateDefaultSubobject<UCustomizationComponent>(TEXT("CustomizationComponent"));
    this->Camera1P = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera1P"));
    this->Camera3P = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera3P"));
    this->Camera1PSocket = TEXT("Socket_Camera");
    this->Camera3PSocket = TEXT("Socket_Camera");
    this->LoadoutSelection = NULL;
    this->OverrideLoadoutSelection = NULL;
    this->EquippedCarryableOnSpawn = NULL;
    this->BaseTurnRate = 45.00f;
    this->BaseLookUpRate = 45.00f;
    this->AttackFromBehindAngle = 45.00f;
    this->ObjectHighlightMaxDistance = 1200.00f;
    this->CombatStateComponent = CreateDefaultSubobject<UCombatStateComponent>(TEXT("CombatStateComponent0"));
    this->CombatStateSynchronization = CreateDefaultSubobject<UCombatStateSynchronization>(TEXT("CombatStateSynchronization"));
    this->CombatStateQueue = CreateDefaultSubobject<UCombatStateQueue>(TEXT("CombatStateQueue"));
    this->CombatStateSet = NULL;
    this->ConditionsComponent = CreateDefaultSubobject<UConditionsComponent>(TEXT("ConditionsComponent"));
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("InteractableComponent"));
    this->MovementModifiers = CreateDefaultSubobject<UMovementModifierComponent>(TEXT("MovementModifiers"));
    this->PerksComponent = CreateDefaultSubobject<UPerksComponent>(TEXT("PerksComponent"));
    this->ClientTracerHitCount = 0;
    this->SpectatingPawn = NULL;
    this->bHasAltAttack = false;
    this->MountOrDismountCameraInterpSpeed = 2.00f;
    this->MovementDebugger = NULL;
    this->SKMesh3P = NULL;
    this->bSpawnedGoreHead = false;
    this->bIsForCustomizationMenu = false;
    this->bCustomizationMenuComponentsSpawned = 0;
    this->DefaultMesh1P = NULL;
    this->FirstPossessedTimeSeconds = 0.00f;
    this->bHasAttackedSuccessfully = false;
    this->GamepadUsePressedStartTime = 0.00f;
    this->GamepadUsePressedCount = 0;
    this->DebugProjectile = NULL;
    this->DebugFakeClientProjectile = NULL;
    this->DebugDroppedItem = NULL;
    this->bDebugIgnoreAI = false;
    this->bIsCinematicsRelevant = false;
    this->SpawnedAtSpawner = NULL;
    this->SpawnedAtSpawnComp = NULL;
    this->SpawnerPosition = 0;
    this->bPreventForwardSpawn = false;
    this->bHelmetKnockedOff = false;
    this->DeadCharacterId = 255;
    this->SpecialItemAbility = NULL;
    this->LastFiredProjectile = NULL;
    this->KnockdownOffHorse = NULL;
    this->TimeToVOExpiry = 6.00f;
    this->NumberOfAllowedVOsWithinExpiry = 6;
    this->VOCooldown = 0.10f;
    this->BattleCryVOCooldown = 3.00f;
    this->VOQueueEmoteWindow = 0.00f;
    this->ClosestInteractable = NULL;
    this->ClosestStatsComponent = NULL;
    this->ClosestFireSource = NULL;
    this->UseableActorInteractable = NULL;
    this->GamepadDismountPressedStartTime = 0.00f;
    this->Inventory = CreateDefaultSubobject<UInventory>(TEXT("Inventory"));
    this->bIsDying = false;
    this->DeathTime = 0.00f;
    this->DeathAnimationLength = 0.00f;
    this->DeathAnimationToRagdollImpulse = 2000.00f;
    this->bShouldCrouchOverrideRecoveryAnimation = false;
    this->bShouldPlayDeathAnimation = false;
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent0"));
    this->RagdollStartTime = 0.00f;
    this->bRagdollTriggered = false;
    this->bRagdollCustomTick = false;
    this->bIsCharacterPaused = false;
    this->bHasRandomSeed = false;
    this->bDidPushRespawnState = false;
    this->bTapOutHeld = false;
    this->PreviousIsPlayingRootMotion = false;
    this->AutoPossessAIFaction = EFaction::Agatha;
    this->AutoPossessAIBehaviorTree = NULL;
    this->bAutoPossessAIStartCinematicRestricted = false;
    this->bCanSuicide = true;
    this->bPreventSuicide = false;
    this->bSuicideTried = false;
    this->bRemovableBot = true;
    this->bNeverPerceiveCharacter = false;
    this->FellOutOfWorldKillTime = 0.50f;
    this->bCountTowardsKillsAndKnockdowns = true;
    this->LastController = NULL;
    this->LastPlayerController = NULL;
    this->LastPlayerState = NULL;
    this->LipSyncVOCurve = NULL;
    this->CurrentAutoVo = EAudioAutoVOType::None;
    this->DeathFriendlyAudoVO.AddDefaulted(4);
    this->AliveFriendlyAudoVO.AddDefaulted(4);
    this->CachedInteractableUseHeldComponent = NULL;
    this->WaitForAttachToProjectileTime = 0.00f;
    this->PreviousTeam = NULL;
    this->bIsInitialAutorun = false;
    this->bPlayerNeedsHealing = false;
    this->bLastAbleToHealCheck = false;
    this->NeedsHealingThreshold = 0.70f;
}

