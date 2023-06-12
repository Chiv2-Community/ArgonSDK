#include "InventoryItem.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "InteractableComponent.h"
#include "Net/UnrealNetwork.h"
#include "TBLParticleSystemComponent.h"
#include "TBLProjectileMovementComponent.h"


void AInventoryItem::StartSimulatedProjectile(int32 AttackID) {
}

bool AInventoryItem::ShouldShowWIPInUI() {
    return false;
}


bool AInventoryItem::ShouldCustomizePlacedInWorldItem_Implementation(ATBLCharacter* OwningCharacter) {
    return false;
}

bool AInventoryItem::ShouldAttachRagdoll_Implementation() {
    return false;
}

void AInventoryItem::SetupHapticsForPS5OnSpawningAttachment(AController* InController) {
}

void AInventoryItem::SetUnequipped() {
}

void AInventoryItem::SetStackCount(int32 Count) {
}

void AInventoryItem::SetRecentAttackReleaseWeaponActionSwitch(FSoundSwitchEntry Entry) {
}

void AInventoryItem::SetPendingHiddenInGame(bool NewBPendingHiddenInGame) {
}

void AInventoryItem::SetOverrideLifeSpan(bool EnableOverride, float NewOverrideLifespan) {
}

void AInventoryItem::SetOnFire() {
}

void AInventoryItem::SetOffFire() {
}

void AInventoryItem::SetInactive() {
}

void AInventoryItem::SetHealth(float Health) {
}

void AInventoryItem::SetDamagedState(EInventoryItemDamagedState NewDamagedState) {
}

void AInventoryItem::SetAddedToInventory(bool inAddedToInventory) {
}

void AInventoryItem::ResetMaxStackCount() {
}

void AInventoryItem::ResetItemToTransform(FTransform Transform) {
}

void AInventoryItem::RemoveBlacklistedPawn(ATBLCharacter* Player) {
}

void AInventoryItem::ReloadThrownWeapon() {
}

void AInventoryItem::PlayImpactEvent(const FSoundSwitchEntry SoundSwitch) {
}

void AInventoryItem::PlayEquipAnimation() {
}

int32 AInventoryItem::PlayActionEvent(const FSoundSwitchEntry SoundSwitch) {
    return 0;
}

void AInventoryItem::PerformFinishedMovementOverlap() {
}



void AInventoryItem::OnUseItemEnded(AActor* Actor, FName CombatState, const FAttackInfo& EventAttackInfo, UCombatState* CombatStateBP) {
}

void AInventoryItem::OnUnequipComplete(ATBLCharacter* Character) {
}

void AInventoryItem::OnUnequipCombatStateEnd(AActor* Actor, FName CombatState, const FAttackInfo& EventAttackInfo, UCombatState* CombatStateBP) {
}

void AInventoryItem::OnRep_UseFireAmmo() {
}

void AInventoryItem::OnRep_TornOffName() {
}

void AInventoryItem::OnRep_State() {
}

void AInventoryItem::OnRep_StackCount() {
}

void AInventoryItem::OnRep_ResetToTransform() {
}

void AInventoryItem::OnRep_ProjectileHit() {
}

void AInventoryItem::OnRep_MountedItemParent() {
}

void AInventoryItem::OnRep_IsOnFire() {
}

void AInventoryItem::OnRep_HealthValue() {
}

void AInventoryItem::OnRep_Drop() {
}

void AInventoryItem::OnRep_AddedToInventory() {
}

void AInventoryItem::OnReloadCombatStateEnd(AActor* Actor, FName CombatState, const FAttackInfo& EventAttackInfo, UCombatState* CombatStateBP) {
}


void AInventoryItem::OnProjectileHit(const FHitResult& HitResult) {
}


void AInventoryItem::OnPlayerMeshChanged(USkeletalMeshComponent* OldMesh, USkeletalMeshComponent* NewMesh) {
}


void AInventoryItem::OnPickupEnded(AActor* Actor, FName CombatState, const FAttackInfo& EventAttackInfo, UCombatState* CombatStateBP) {
}

void AInventoryItem::OnMovementStarted() {
}

void AInventoryItem::OnMovementFinished() {
}


void AInventoryItem::OnLocalPlayerStateReplicated(APlayerState* PlayerState) {
}


void AInventoryItem::OnFakeClientProjectileHit(const FHitResult& HitResult) {
}

void AInventoryItem::OnEquipComplete() {
}

void AInventoryItem::OnEquipCombatStateEnd(AActor* Actor, FName CombatState, const FAttackInfo& EventAttackInfo, UCombatState* CombatStateBP) {
}



void AInventoryItem::OnAttackInterrupted(int32 AttackID) {
}

void AInventoryItem::OnAttachedActorKilled(const FDeathDamageTakenEvent& Event) {
}

void AInventoryItem::OnAttachedActorDestroyed(AActor* DestroyedActor) {
}

void AInventoryItem::OnAnimNotifyWeaponDetach(UTBLCharacterAnimInstance* AnimBP) {
}

void AInventoryItem::OnAnimNotifyWeaponAttach(UTBLCharacterAnimInstance* AnimBP) {
}

void AInventoryItem::OnAnimNotifyUseItem(UTBLCharacterAnimInstance* AnimBP) {
}

void AInventoryItem::NetMulticastOnAddToInventoryItemPool_Implementation() {
}

void AInventoryItem::NetMulticastFastSharedReplication_Implementation(const FFastSharedProperties_InventoryItem& Properties) {
}

void AInventoryItem::LogShieldInfo(const FString& LogText) {
}

bool AInventoryItem::IsTwoHandedWeapon() {
    return false;
}

bool AInventoryItem::IsSimulatingPhysics() const {
    return false;
}

bool AInventoryItem::IsLowAmmo() const {
    return false;
}

bool AInventoryItem::IsDualWieldOffhandEquipped() {
    return false;
}

bool AInventoryItem::IsAddedToInventory() {
    return false;
}

bool AInventoryItem::IsAbilityMultiAttack(FName AttackName) {
    return false;
}

void AInventoryItem::InitializeStackCountOnSpawn(ATBLCharacter* CharacterOwner) {
}

void AInventoryItem::InitializeProjectileMovement(AActor* Initiator, float InitialSpeed, bool bFakeClient) {
}


void AInventoryItem::InitDebugPreviousLocation() {
}


int32 AInventoryItem::GetStackCount() {
    return 0;
}

void AInventoryItem::GetSpecialAttackWindupSwitchOverride_Implementation(FString& SwitchState) {
}



UProjectilePenetration* AInventoryItem::GetProjectilePenetrationConfig() {
    return NULL;
}

UPrimitiveComponent* AInventoryItem::GetPhysicsMesh() const {
    return NULL;
}

bool AInventoryItem::GetPendingHiddenInGame() const {
    return false;
}

ATBLCharacter* AInventoryItem::GetOwningPawn() const {
    return NULL;
}

UStaticMeshComponent* AInventoryItem::GetMesh() const {
    return NULL;
}

float AInventoryItem::GetMaxHealth() const {
    return 0.0f;
}

EWeaponMaterial AInventoryItem::GetMaterialByWeaponAction(bool IsAttacking, bool IsDefending, FName AttackName) {
    return EWeaponMaterial::Metal;
}

float AInventoryItem::GetHealthPercent() const {
    return 0.0f;
}

float AInventoryItem::GetHealth() const {
    return 0.0f;
}

bool AInventoryItem::GetEquippableOnHorse_Implementation() {
    return false;
}

AInventoryItem* AInventoryItem::GetDualWieldOffhand() {
    return NULL;
}

FInventoryItemDisplayInfo AInventoryItem::GetDisplayInfoForFaction(EFaction Faction) const {
    return FInventoryItemDisplayInfo{};
}

float AInventoryItem::GetDamageSourcePenetration() {
    return 0.0f;
}

FString AInventoryItem::GetDamageSourceName(FText& NameText) {
    return TEXT("");
}

ATBLCharacterBase* AInventoryItem::GetCarriedCharacter() const {
    return NULL;
}

float AInventoryItem::GetBaseDamage(FName AttackName) {
    return 0.0f;
}

void AInventoryItem::GetAttachRagdollParams_Implementation(FAttachRagdollParams& AttachRagdollParams, ATBLCharacter* Character, const FDeathDamageTakenEvent& DamageEvent) {
}

USceneComponent* AInventoryItem::GetAttachRagdollComponent() {
    return NULL;
}

void AInventoryItem::FinishUnequippingOnAnimNotify(ATBLCharacter* Character) {
}

void AInventoryItem::EventUsePressed(APawn* Pawn, UInteractableComponent* InteractableComponent) {
}

void AInventoryItem::EnableCollisionForFakeClient(ATBLCharacterBase* Character) {
}

bool AInventoryItem::DualWieldShouldUseBothWeaponsForAttack(FName AttackName) {
    return false;
}

void AInventoryItem::DisableCollisionForFakeClient() {
}

void AInventoryItem::DestroyFakeClient() {
}

void AInventoryItem::ClientToBeEquipped_Implementation() {
}

void AInventoryItem::ClientOnItemUnequipped_Implementation() {
}

void AInventoryItem::ClientOnItemEquipped_Implementation(AActor* NewOwner) {
}

void AInventoryItem::CheckStickPlayersToWall(ATBLCharacter* KilledChar) {
}

bool AInventoryItem::CanUseItem_Implementation() {
    return false;
}

bool AInventoryItem::CanPickup_Implementation(APawn* Pawn) {
    return false;
}


void AInventoryItem::BroadcastAttachRagdoll_Implementation(FVector AttachLocation) {
}

void AInventoryItem::BounceOnProjectileHit(const FHitResult& HitResult, AInventoryItem* BlockingItem, float InBounceVelocityModifier) {
}

void AInventoryItem::AttachSimulatedProjectileOnKill(const FHitResult& HitResult) {
}

void AInventoryItem::ApplyImpulseToGoreHead_Implementation(FVector Impulse) {
}

void AInventoryItem::ApplyDamage(float InDamage) {
}

void AInventoryItem::AddToStackCount(int32 Delta) {
}

void AInventoryItem::AddIgnoreActors(AActor* Initiator) {
}

void AInventoryItem::AddBlacklistedPawn(ATBLCharacter* Player) {
}

void AInventoryItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AInventoryItem, bLoaded);
    DOREPLIFETIME(AInventoryItem, bUseFireAmmo);
    DOREPLIFETIME(AInventoryItem, MountedItemParent);
    DOREPLIFETIME(AInventoryItem, HealthValue);
    DOREPLIFETIME(AInventoryItem, MaxStackCount);
    DOREPLIFETIME(AInventoryItem, StackCount);
    DOREPLIFETIME(AInventoryItem, State);
    DOREPLIFETIME(AInventoryItem, Slot);
    DOREPLIFETIME(AInventoryItem, TornOffName);
    DOREPLIFETIME(AInventoryItem, InvocationId);
    DOREPLIFETIME(AInventoryItem, bIsOnFire);
    DOREPLIFETIME(AInventoryItem, ProjectileMovementInitiator);
    DOREPLIFETIME(AInventoryItem, ResetToTransform);
    DOREPLIFETIME(AInventoryItem, ReplicateDrop);
    DOREPLIFETIME(AInventoryItem, ReplicatedProjectileHit);
    DOREPLIFETIME(AInventoryItem, AddedToInventory);
}

AInventoryItem::AInventoryItem() {
    this->Version = 0;
    this->ProjectileRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileRoot"));
    this->ProjectileSmoothing = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSmoothing"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh0"));
    this->StaticMesh1PShadow = NULL;
    this->ProjectileCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("ProjectileCollision"));
    this->StickPoint = CreateDefaultSubobject<USceneComponent>(TEXT("StickPoint"));
    this->ProjectileMovement = CreateDefaultSubobject<UTBLProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->Interactable = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable"));
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent0"));
    this->WeaponSwipeParticleComponent = CreateDefaultSubobject<UTBLParticleSystemComponent>(TEXT("WeaponSwipeParticleComponent"));
    this->WeaponThrowParticleComponent = CreateDefaultSubobject<UTBLParticleSystemComponent>(TEXT("WeaponThrowParticleComponent"));
    this->bAlwaysEnableFriction = false;
    this->bAlwaysPrioritizeCloserTargets = false;
    this->bOnlyTargetAllies = false;
    this->bAlwaysScalingDistanceFrictionEnabled = false;
    this->bAlwaysFrictionInnerOnly = false;
    this->ActivationMinDistanceOverride = 0.00f;
    this->ActivationMaxDistanceOverride = 0.00f;
    this->bAlwaysEnableInnerBoxForgiveness = false;
    this->MagnetismMoveSpeedModifierSelf = 0.00f;
    this->MagnetismMoveSpeedModifierTarget = 0.00f;
    this->bCannotEquipOnHorse = false;
    this->bCanUseOffhandCarryable = false;
    this->bIsDualWield = false;
    this->bIsWIPItem = false;
    this->bPlayEquipAnimation = true;
    this->bDisableJump = false;
    this->bIsShield = false;
    this->bTrackKillAchievement = false;
    this->bPlayPickupAnimation = false;
    this->bUseItemOnEquip = false;
    this->bUseRangedSignificance = false;
    this->hasHealth = false;
    this->bIsBreakable = false;
    this->CanBeDisarmed = false;
    this->bPlaceOnGroundWhenSwapped = false;
    this->bDoNotAutoEquip = false;
    this->bShouldScaleDrawStrength = false;
    this->bClickToFire = false;
    this->bAutomaticReload = true;
    this->bLoaded = true;
    this->bCanProjectileStick = true;
    this->bCanProjectileStickToShield = false;
    this->bAlignProjectilePitchToSurfaceOnStick = false;
    this->bGenerateOverlapEventsWhenMovementFinished = false;
    this->UseRangedCrossHair = false;
    this->bTearOffOnMovementFinished = false;
    this->bUseOverrideLifespan = false;
    this->DisabledInLoadout = false;
    this->EquipOnPickup = true;
    this->bAlwaysAutoPickup = false;
    this->bAutoPickupOwned = false;
    this->bNeedsUpdateVisualization = false;
    this->ThwackOnHit = false;
    this->bQuickThrowSpecial = false;
    this->bCanAttackWhileUnequipped = false;
    this->UseFirstAndThirdPersonTransformSetup = false;
    this->bIsFakeItem = false;
    this->bUseFireAmmo = false;
    this->bIsCarryableNPCItem = false;
    this->ItemType = EInventoryType::None;
    this->EquipTime = 0.00f;
    this->UnequipTime = 0.00f;
    this->TracerType = NULL;
    this->AltTracerType = NULL;
    this->WeaponType = EWeaponType::Sword2h;
    this->DamageModifier = 1.00f;
    this->Damage = 0.00f;
    this->SiegeDamage = 0.00f;
    this->ShieldDamageModifier = 1.00f;
    this->DamageScaleOnHorseback = NULL;
    this->ThrownAttackType = NULL;
    this->DamageSource = NULL;
    this->Knockback = NULL;
    this->ProjectilePenetration = NULL;
    this->TurnLimitCurve = NULL;
    this->VerticalTurnLimitCurve = NULL;
    this->TurnLimitScaleByDegreesTurned = NULL;
    this->TurnLimitStrength = 45.00f;
    this->VerticalTurnLimitStrength = -1.00f;
    this->ReverseTurnLimitCurve = NULL;
    this->ReverseTurnLimitStrength = 80.00f;
    this->SpeedPenalty = ESpeedPenalty::Light;
    this->MeleeAttackCategory = EMeleeAttackCategory::Light;
    this->RangedAttackCategory = ERangedAttackCategory::Light;
    this->BlockingCategory = EBlockingCategory::Light;
    this->MountedItemClass = NULL;
    this->MountedItemParent = NULL;
    this->BrokenItemClass = NULL;
    this->InheritAnimTimings = NULL;
    this->AnimationSpeedModifier = 1.00f;
    this->ConstructableLimit = 0;
    this->SpecialItemAbility = NULL;
    this->bUseHorseAiming = true;
    this->HealthValue = 0.00f;
    this->DamagedPercent = 0.00f;
    this->PercentChanceToBreak = 1.00f;
    this->DamagedMesh = NULL;
    this->DestroyedMesh = NULL;
    this->DamagedState = EInventoryItemDamagedState::Healthy;
    this->RiposteTime = 0.10f;
    this->WindupLunge = NULL;
    this->Lunge = NULL;
    this->LungeLeft = NULL;
    this->LungeRight = NULL;
    this->HorseLunge = NULL;
    this->ParrySuccess = NULL;
    this->Blocked = NULL;
    this->WasHitEarly = NULL;
    this->RagdollImpulse = 0.00f;
    this->bProjectileAttachedViaReplication = false;
    this->FireDamage = NULL;
    this->RangedDamageSource = NULL;
    this->DrawStrength = 1500.00f;
    this->MinDrawStrength = 0.00f;
    this->MinDrawPowerTime = 0.00f;
    this->MaxDrawPowerTime = 1.00f;
    this->AmmoStackType = EAmmoStackType::Exhaustable;
    this->MaxStackCount = 1;
    this->StackCount = 1;
    this->LowAmmoPercent = 0.33f;
    this->ReloadCombatState = TEXT("Reload");
    this->ReloadTime = 0.10f;
    this->AmmoItemClass = NULL;
    this->FireAmmoItemClass = NULL;
    this->QuiverItemClass = NULL;
    this->AttachAmmoSocket = TEXT("ArrowSocket");
    this->bUseThirdPersonProjectileSpawnPointOverride = false;
    this->UseProjectileSpawnOffsetAsProjectileOrigin = false;
    this->ProjectileInitialRotation = 0.00f;
    this->ProjectileRotationRate = 0.00f;
    this->bRotateProjectileCollision = false;
    this->ProjectileRotationCurve = NULL;
    this->ProjectileDrag = 0.00f;
    this->ProjectileDrawDamageScale = NULL;
    this->ProjectileDistanceDamageScale = NULL;
    this->BounceVelocityModifier = 0.20f;
    this->BounceDamageWorld = 0.00f;
    this->BounceDamageParried = 0.00f;
    this->AimPenaltyModifier = 1.00f;
    this->bCanStickPlayersToWall = false;
    this->StickPlayersToWallDistance = 0.00f;
    this->WorldHitStartPercentage = 20.00f;
    this->WorldHitStopPercentage = 80.00f;
    this->Significance = ECharacterSignificanceLevel::Hidden;
    this->Slot = EInventoryItemSlot::Carryable;
    this->FirstPersonTransformRoot = CreateDefaultSubobject<USceneComponent>(TEXT("FirstPersonRoot"));
    this->ThirdPersonTransformRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ThirdPersonRoot"));
    this->bDropOffOnCharacterHitTime = 6.00f;
    this->InventoryItemAKEvent_Action = NULL;
    this->InventoryItemAKEvent_Impact = NULL;
    this->InventoryItemAKEvent_ImpactThrown = NULL;
    this->BattleCryOverrideAkEvent = NULL;
    this->PickupItemSound = NULL;
    this->PickupManyItemSound = NULL;
    this->GlobalLifespan = 30.00f;
    this->SwingWindDistance = 1000.00f;
    this->OverrideLifespan = 0.00f;
    this->CustomizationWeaponTag = EWeaponTag::None;
    this->ItemSoundPolicy = EItemSoundPolicy::PlaySoundOnItem;
    this->bIsCustomizationApplied = false;
    this->bCanBeLitOnFire = false;
    this->bShouldStartOnFire = false;
    this->bIsOnFire = false;
    this->bIsSlashCounteredByStab = false;
    this->bIsSpecialStabAnimation = false;
    this->bIsSpecialVerticalAnimation = false;
    this->bShouldSpecialIgnoreIsFacingTarget = false;
    this->bCanFistsParry = false;
    this->AttachedAmmoItem = NULL;
    this->LastStackCount = 1;
    this->Inventory = NULL;
    this->CurrentWeaponTracers = NULL;
    this->bPendingHiddenInGame = false;
    this->bMatchStateHidden = false;
    this->bIsAnimating = false;
    this->bAttachAmmo = false;
    this->AddedToInventory = false;
    this->bWasThrown = false;
    this->bPlacedInWorld = false;
    this->bShouldAttachRagdoll = false;
    this->bFakeClientStickPoint = false;
    this->PreviousAimPitch = 0.00f;
    this->PrevAnimPercent = 0.00f;
    this->AnimTimingProperties.AddDefaulted(11);
    this->FireAmmoItem = NULL;
}

