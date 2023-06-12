#include "TBLCharacterAnimInstance.h"

void UTBLCharacterAnimInstance::UpdateFootStepSounds_Implementation(float DeltaSeconds, bool bHidden) {
}

void UTBLCharacterAnimInstance::TriggerRagdoll() {
}

void UTBLCharacterAnimInstance::StopCurrentCombatStateMontage(FName NewCombatState, float BlendTime) {
}

void UTBLCharacterAnimInstance::StartPeasantAnimation(FName InCombatState) {
}

void UTBLCharacterAnimInstance::StartParryAttack(UAnimationSet* AnimSet) {
}

void UTBLCharacterAnimInstance::StartAttack(bool bIsHeavy) {
}

bool UTBLCharacterAnimInstance::ShouldStopAnimGraph() {
    return false;
}

void UTBLCharacterAnimInstance::SetOnHorse(bool bIsOnHorse) {
}

void UTBLCharacterAnimInstance::SetDeathAnimationParameters(const FDamageTakenEvent& Event, uint32 RandomSeed) {
}

void UTBLCharacterAnimInstance::ReverseLadderAnimation() {
}

void UTBLCharacterAnimInstance::PlaySpawnAnimation(FName AnimationName) {
}

void UTBLCharacterAnimInstance::PlayLadderAnimation(FName SectionName) {
}

float UTBLCharacterAnimInstance::PlayInventoryItemUse(AInventoryItem* Item, bool bPickup) {
    return 0.0f;
}

float UTBLCharacterAnimInstance::PlayInventoryItemUnequipped(AInventoryItem* Item) {
    return 0.0f;
}

float UTBLCharacterAnimInstance::PlayInventoryItemEquipped(AInventoryItem* Item) {
    return 0.0f;
}

void UTBLCharacterAnimInstance::PlayInventoryAnimation(FName Animation, AInventoryItem* Item) {
}

void UTBLCharacterAnimInstance::PlayHorseMountAnimation(FName AnimationName) {
}

void UTBLCharacterAnimInstance::PlayHorseLandedAnimation() {
}

void UTBLCharacterAnimInstance::PlayHorseDismountAnimation(FName AnimationName) {
}

void UTBLCharacterAnimInstance::PlayDeathAnimation() {
}

void UTBLCharacterAnimInstance::PlayCombatStateMontage(FName InCombatState, FName MontageName, FName SectionName, UAnimationSet* AnimSet) {
}

void UTBLCharacterAnimInstance::OnWasHitEarly(const FEarlyHitResult& EarlyHit) {
}

void UTBLCharacterAnimInstance::OnVault(AVaultMarker* VaultMarker) {
}

void UTBLCharacterAnimInstance::OnUnfreezeRagdollPhysics() {
}

void UTBLCharacterAnimInstance::OnSwitchAttack() {
}

void UTBLCharacterAnimInstance::OnStartAttack() {
}

void UTBLCharacterAnimInstance::OnSprintTurn() {
}

void UTBLCharacterAnimInstance::OnSpawnAnimationComplete(UAnimMontage* Montage, bool bInterrupted) {
}

void UTBLCharacterAnimInstance::OnSignificanceChanged(ECharacterSignificanceLevel InSignificance) {
}

void UTBLCharacterAnimInstance::OnSetRagdollPhysics() {
}


void UTBLCharacterAnimInstance::OnRecentlyRendered(bool bInRecentlyRendered) {
}

void UTBLCharacterAnimInstance::OnRagdollHitFxEvent(AActor* HitTaker, AActor* HitCauser, AInventoryItem* Weapon, const FHitResult& HitResult, const FVector& HitDirection, float Damage, UDamageSource* DamageSource, AActor* Projectile, FName AttackName) {
}

void UTBLCharacterAnimInstance::OnPostDamage(const FDamageTakenEvent& DamageEvent, const FPostDamageEventInfo& PostDamageInfo) {
}

void UTBLCharacterAnimInstance::OnParrySuccess(ATBLCharacter* ThisCharacter, ATBLCharacter* OtherCharacter, FParryEventState ParryEventState) {
}

void UTBLCharacterAnimInstance::OnParryInEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UTBLCharacterAnimInstance::OnMovementStateUpdate(float DeltaSeconds) {
}

void UTBLCharacterAnimInstance::OnMovementStateChanged(FName NewMovementState) {
}

void UTBLCharacterAnimInstance::OnMovementActionStarted(FName MovementName, FRotator Direction) {
}

void UTBLCharacterAnimInstance::OnMovementActionFinished(FName MovementName) {
}

void UTBLCharacterAnimInstance::OnMount(AActor* AttachParent, USiegeMountPoint* MountPoint) {
}

void UTBLCharacterAnimInstance::OnMeleeSuccess(ATBLCharacter* DamagedCharacter) {
}

void UTBLCharacterAnimInstance::OnKilled(const FDeathDamageTakenEvent& Event) {
}

void UTBLCharacterAnimInstance::OnGetUp(FName Direction) {
}

void UTBLCharacterAnimInstance::OnFreezeRagdollPhysics() {
}

void UTBLCharacterAnimInstance::OnEquippedItemsChanged() {
}

void UTBLCharacterAnimInstance::OnDismount(AActor* AttachParent, EDismountType DismountType) {
}

void UTBLCharacterAnimInstance::OnCustomizationApplied(const FCustomizationContext& Context) {
}

void UTBLCharacterAnimInstance::OnCrowdControlNoDamage(AActor* OwningActor, FName InCombatState, FCrowdControlParams CrowdControlParams) {
}

void UTBLCharacterAnimInstance::OnCrowdControl(FName InCombatState, const FAnimDamageParams& DamageEvent, ECrowdControlVariant CrowdControlVariant) {
}

void UTBLCharacterAnimInstance::OnConditionAdded(AActor* Actor, EConditionType Condition) {
}

void UTBLCharacterAnimInstance::OnCombatStateEvent(AActor* Actor, FName EventName, const FAttackInfo& EventAttackInfo) {
}

void UTBLCharacterAnimInstance::OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState) {
}

void UTBLCharacterAnimInstance::OnCombatStateBegin(AActor* Actor, FName State, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState) {
}

void UTBLCharacterAnimInstance::OnChildAttachedToMesh(USceneComponent* Child) {
}

void UTBLCharacterAnimInstance::OnCarryableParent_CombatStateBegin(AActor* Actor, FName InCombatStateName, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState) {
}

void UTBLCharacterAnimInstance::OnCarryableCharacterEvent(FName EventName, ATBLCharacter* ParentCharacter) {
}

void UTBLCharacterAnimInstance::OnBackToIdleTimer() {
}

void UTBLCharacterAnimInstance::OnAnimationSetChanged(FName AnimSetName, FAnimationSetDataTable AnimInfo, AInventoryItem* InventoryItem) {
}

void UTBLCharacterAnimInstance::OnAnimationComplete() {
}

void UTBLCharacterAnimInstance::NotifyCompleteDeathAnimation() {
}

void UTBLCharacterAnimInstance::LadderSectionChanged(UAnimMontage* Montage, int32 NextSection) {
}

void UTBLCharacterAnimInstance::LadderMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UTBLCharacterAnimInstance::HideUnusedBonesOnServer() {
}

void UTBLCharacterAnimInstance::HideBones(TArray<FName> BoneList, TArray<FName> VisibleBones) {
}

int32 UTBLCharacterAnimInstance::GetStopAnimGraphValue() {
    return 0;
}

void UTBLCharacterAnimInstance::GetSpawnMontage(FName AnimationName, UAnimMontage*& Montage, FName& MontageName, FName& SectionName) {
}

float UTBLCharacterAnimInstance::GetPhysicsSpawnTime(FName AnimationName) {
    return 0.0f;
}

float UTBLCharacterAnimInstance::GetPeasantAnimationLength(FName InCombatState) {
    return 0.0f;
}

float UTBLCharacterAnimInstance::GetMountAnimationLength(bool MountUp, FName Direction) {
    return 0.0f;
}

FVector UTBLCharacterAnimInstance::GetLadderMountOffset(bool MountUp, bool bFromTop) {
    return FVector{};
}

float UTBLCharacterAnimInstance::GetInventoryAnimationLength() {
    return 0.0f;
}

FVector UTBLCharacterAnimInstance::GetHorseDismountOffset(FName AnimationName) {
    return FVector{};
}

void UTBLCharacterAnimInstance::GetCurrentSpawnRootMotion(FVector& OutTranslation, FRotator& OutRotation, FName AnimationName, float Position) {
}

float UTBLCharacterAnimInstance::GetCurrentSpawnAnimationTime() {
    return 0.0f;
}

void UTBLCharacterAnimInstance::GetCurrentRootMotion(FVector& OutTranslation, FRotator& OutRotation, UAnimMontage* Montage, FName SectionName, bool bEndAnimation, float Position) {
}

void UTBLCharacterAnimInstance::GetCurrentLadderRootMotion(FVector& OutTranslation, FRotator& OutRotation, FName SectionName, bool bEndAnimation) {
}

UAnimationSet* UTBLCharacterAnimInstance::GetAnimationSetFromData(FAnimationSetDataTable AnimInfo) {
    return NULL;
}










































bool UTBLCharacterAnimInstance::DoesAttackHaveActivateAbilityNotify(FName AttackName) {
    return false;
}

void UTBLCharacterAnimInstance::DisableSpawnRootMotion(FName AnimationName) {
}

void UTBLCharacterAnimInstance::DisableAttackRootMotion() {
}

void UTBLCharacterAnimInstance::CustomizationWeaponToStand(UAnimMontage* Montage, bool bInterrupted) {
}

void UTBLCharacterAnimInstance::CustomizationStandToWeapon(UAnimMontage* Montage, bool bInterrupted) {
}

void UTBLCharacterAnimInstance::CarryableSectionChanged(UAnimMontage* Montage, int32 NextSection) {
}


void UTBLCharacterAnimInstance::AnimNotify_WeaponDetach() {
}

void UTBLCharacterAnimInstance::AnimNotify_WeaponAttach() {
}

void UTBLCharacterAnimInstance::AnimNotify_UseItem() {
}

void UTBLCharacterAnimInstance::AnimNotify_ShieldDetach() {
}

void UTBLCharacterAnimInstance::AnimNotify_ShieldAttach() {
}

void UTBLCharacterAnimInstance::AnimNotify_Revive() {
}

void UTBLCharacterAnimInstance::AnimNotify_DropWeapon() {
}

UTBLCharacterAnimInstance::UTBLCharacterAnimInstance() {
    this->SignificanceLevel = ECharacterSignificanceLevel::Hidden;
    this->WasRecentlyRendered = false;
    this->Index_LOD = 0;
    this->LastSpawnMontage = NULL;
    this->SpawnAnimStartTime = 0.00f;
    this->ComboBlendTimeDataTable = NULL;
    this->ThwackPlayRateCurve = NULL;
    this->AnimationSetMount_Class_Default = NULL;
    this->AnimationSetSiege_Class_Default = NULL;
    this->AnimationSetOffhand1P_Class_Default = NULL;
    this->AnimationSetOffhand3P_Class_Default = NULL;
    this->AnimationSetPeasant_Class_Default = NULL;
    this->AnimationSetDeath1P_Default = NULL;
    this->AnimationSetDeath3P_Default = NULL;
    this->Socket_LeftStirrup = TEXT("bh_LeftStirrupEnd");
    this->Socket_RightStirrup = TEXT("bh_RightStirrupEnd");
    this->SpeedLine = 5.00f;
    this->AttackStates.AddDefaulted(14);
    this->JabDeflectSection = TEXT("Jab_Body_LeftHook");
    this->ServerIdlePoseCombatStates.AddDefaulted(6);
    this->ServerIdlePoseMovementStates.AddDefaulted(4);
    this->HideServerBones.AddDefaulted(3);
    this->TBLCharacter = NULL;
    this->movement = NULL;
    this->IsPostInitialized = false;
    this->IsServer = false;
    this->Is3p = false;
    this->CombatStateBlueprint = NULL;
    this->CombatStatePercent = 0.00f;
    this->AttackType = NULL;
    this->IsDead = false;
    this->IsRagdoll = false;
    this->IsShieldEquipped = false;
    this->IsCrouch = false;
    this->IsDowned = false;
    this->IsAttackQueued = false;
    this->MaxSpeed = 0.00f;
    this->VelocityInterpSpeed = 10.00f;
    this->CurrentSpeed = 0.00f;
    this->CurrentSpeed2d = 0.00f;
    this->MovementDirection = 0.00f;
    this->MovementDirectionIndex = 0;
    this->MovementDirectionTime = 0.00f;
    this->OnStrafeStopNeedsEvent = false;
    this->MaxSpeedInCurrentState = 0.00f;
    this->MovementStateWeight = 0.00f;
    this->MovementStateInterpSpeed = 10.00f;
    this->IsMove = false;
    this->CharMoveWeight = 0.00f;
    this->DashDirection = 0.00f;
    this->SprintTurnAngle = 0.00f;
    this->SprintTurnWeight = 0.00f;
    this->IsLunge = false;
    this->LungeStartTime = 0.00f;
    this->IsOnHorse = false;
    this->HorseAnimBP = NULL;
    this->IsOnSiege = false;
    this->IsAltPosition = false;
    this->SiegeAnimBP = NULL;
    this->BatteringRamAnimBP = NULL;
    this->bIsPlayingSequencerAnimation = false;
    this->IsItemEquipped = false;
    this->IsLeftFootTap = false;
    this->IsRightFootTap = false;
    this->AttackWindupWeight = 0.00f;
    this->AnimGraphBranch01 = EAnimGraphBranch01::Default;
    this->AimPitch = 0.00f;
    this->IsOffHandAttack = false;
    this->PreviousIsOnHorse = false;
    this->bIdlePoseCombatState = false;
    this->bIdlePoseMovementState = false;
    this->IdlePoseStateTime = 0.00f;
    this->InitialMoveTime = 0.00f;
    this->AnimationSetBase = NULL;
    this->AnimationSetBase1P = NULL;
    this->AnimationSetBase3P = NULL;
    this->AnimationSetBaseMount = NULL;
    this->AnimationSetBaseSiege = NULL;
    this->AnimationSetBaseDeath = NULL;
    this->PreviousAnimationSetBase = NULL;
    this->Horse = NULL;
    this->Siege = NULL;
    this->ParryMontage = NULL;
    this->ParryEventMontage = NULL;
    this->ParryRiposteShieldMontage = NULL;
    this->ParrySuccessMontage = NULL;
    this->CarryableParentCharacter = NULL;
    this->KnockdownMontage = NULL;
    this->FallingMontage = NULL;
    this->InteractMontage = NULL;
    this->ReloadMontage = NULL;
    this->PeasantMontage = NULL;
    this->bCarryablePickup = false;
    this->InventoryAnimationLength = 0.00f;
    this->SprintTurnEndTime = 0.00f;
    this->IsCustomizationAnimInstance = false;
    this->LipSyncVOMeter = 0.00f;
    this->CharAnimationSet = NULL;
    this->CharAnimationSet1P = NULL;
    this->CharAnimationSet3P = NULL;
    this->CharAnimationSetMount = NULL;
    this->CharAnimationSetSiege = NULL;
    this->CharAnimationSetDeath = NULL;
    this->CharAnimationSetOffHand = NULL;
    this->CharAnimationSetOffHand1P = NULL;
    this->CharAnimationSetOffHand3P = NULL;
    this->CharAnimationSetPeasant = NULL;
    this->CharPreviousAnimationSet = NULL;
}

