#include "CombatState.h"

void UCombatState::UseItem() {
}

void UCombatState::SyncDrawStrength() const {
}

void UCombatState::StopFocus() {
}


void UCombatState::StartReleaseStab() {
}


void UCombatState::StartHeavyAttack(bool bIsHeavy) {
}

void UCombatState::StartFocus() {
}

void UCombatState::StartFire() {
}

void UCombatState::StartFeint() {
}

void UCombatState::StartChargeStab() {
}

void UCombatState::StartAttack() {
}

bool UCombatState::ShouldUseDrawStrengthModifier() const {
    return false;
}

bool UCombatState::ShouldSprintDecelerate_Implementation() const {
    return false;
}

bool UCombatState::ShouldRemainInSprint_Implementation() const {
    return false;
}

void UCombatState::SetWeaponLoaded(bool bLoaded) {
}

void UCombatState::SetCombatStateTimer(int32& OutHandle, FTimerDynamicDelegate Delegate, float Time, bool bLooping) {
}


void UCombatState::RestOfCurrentState(bool InCanSwitchInventoryItems, bool InCanMountActors) {
}

void UCombatState::ResetMinimumHoldingTime() {
}

void UCombatState::ResetAmmoAttachment() {
}

void UCombatState::ProjectileInterrupted() {
}

void UCombatState::PlayEquipAnimation(AInventoryItem* Item) {
}


void UCombatState::OnTurnLockTimeout(float OverTime) {
}


void UCombatState::OnReloadPressed_Implementation() {
}






void UCombatState::OnFireProjectile() {
}



bool UCombatState::NeedsReload() const {
    return false;
}

void UCombatState::KnockRiderOffHorse() {
}

bool UCombatState::IsWithinWindow(float WindowTime, bool bFromEndOfState) const {
    return false;
}

bool UCombatState::IsRiposte() const {
    return false;
}

bool UCombatState::IsOutOfAmmo() const {
    return false;
}

bool UCombatState::IsInitialized() const {
    return false;
}

bool UCombatState::IsHoldingReloadableThrowable() const {
    return false;
}

bool UCombatState::IsHoldingInput() const {
    return false;
}

bool UCombatState::IsHoldAttackPressed() const {
    return false;
}

bool UCombatState::IsHeavy() const {
    return false;
}

bool UCombatState::IsFocusQueued() {
    return false;
}

bool UCombatState::IsFeint() const {
    return false;
}

bool UCombatState::IsCounter() const {
    return false;
}

bool UCombatState::IsCombo() const {
    return false;
}

bool UCombatState::IsCombatStateTimerActive(int32 Handle) const {
    return false;
}

bool UCombatState::IsAttackQueued() const {
    return false;
}

void UCombatState::HoldState(EHeldBehavior HeldBehavior) {
}

void UCombatState::HandleDelayedStartAttack() {
}

void UCombatState::Getup(FName Direction) {
}

float UCombatState::GetTimeSinceLastQueuedAttack() const {
    return 0.0f;
}

float UCombatState::GetTimeInStatePercent() const {
    return 0.0f;
}

float UCombatState::GetTimeInState() const {
    return 0.0f;
}

float UCombatState::GetSoftRecoveryPercent_Implementation() const {
    return 0.0f;
}

float UCombatState::GetRemainingTime() const {
    return 0.0f;
}

EAttackTypeCategory UCombatState::GetQueuedAttackTypeCategory() const {
    return EAttackTypeCategory::Standard;
}

UAttackType* UCombatState::GetQueuedAttackType() const {
    return NULL;
}

FName UCombatState::GetQueuedAttackName() const {
    return NAME_None;
}

FName UCombatState::GetQueuedAttackCategory() const {
    return NAME_None;
}

bool UCombatState::GetQueuedAttackCanComboInInterrupt() const {
    return false;
}

AActor* UCombatState::GetOwner() const {
    return NULL;
}

float UCombatState::GetMinimumHoldingTime() const {
    return 0.0f;
}

float UCombatState::GetMaxDrawStrengthTime_Implementation() const {
    return 0.0f;
}

float UCombatState::GetDrawStrengthModifier_Implementation() const {
    return 0.0f;
}

EAttackTypeCategory UCombatState::GetCurrentAttackTypeCategory() const {
    return EAttackTypeCategory::Standard;
}

UAttackType* UCombatState::GetCurrentAttackType() const {
    return NULL;
}

FName UCombatState::GetCurrentAttackName() const {
    return NAME_None;
}

FName UCombatState::GetCurrentAttackCategory() const {
    return NAME_None;
}

FName UCombatState::GetCombatStateFromQueuedAttack() const {
    return NAME_None;
}

AInventoryItem* UCombatState::GetCharactersEquippedWeapon() const {
    return NULL;
}

void UCombatState::GetCharactersCurrentEmote(bool& IsRootAnimation, FPersonalityEmoteTableRow& Emote, int32& EmoteId) const {
}

UTBLCharacterMovement* UCombatState::GetCharacterMovement() const {
    return NULL;
}

ATBLCharacter* UCombatState::GetCharacter() const {
    return NULL;
}

FName UCombatState::GetCancelledCombatState_Implementation() const {
    return NAME_None;
}

EAttackTransition UCombatState::GetAttackTransition_Implementation() const {
    return EAttackTransition::Normal;
}

float UCombatState::GetAbilityPropertyValue(FName PropertyName) const {
    return 0.0f;
}

void UCombatState::EventWasParried_Implementation(ATBLCharacter* ParryingCharacter) {
}

void UCombatState::EventTick_Implementation(float DeltaSeconds) {
}

void UCombatState::EventRagdolled_Implementation() {
}

void UCombatState::EventParrySuccess_Implementation(ATBLCharacter* ParriedCharacter) {
}

void UCombatState::EventMeleeSuccess_Implementation(ATBLCharacter* DamagedCharacter) {
}

void UCombatState::EventLanded_Implementation(ACharacter* InTarget) {
}

void UCombatState::EventEndState_Implementation(FName NextState, bool bStartAttack) {
}

void UCombatState::EventEndAnimation_Implementation() {
}

void UCombatState::EventDamageCaused_Implementation(const FDamageTakenEvent& DamageEvent) {
}

void UCombatState::EventDamage_Implementation(const FDamageTakenEvent& DamageEvent) {
}

bool UCombatState::EventCannotQueueAttack_Implementation(UAttackType* AttackType) {
    return false;
}

void UCombatState::EventCancelAttack_Implementation() {
}

void UCombatState::EventBeginState_Implementation(FName PreviousState, float PreviousStateTime, float AnimationLength) {
}

void UCombatState::EventBeginFire_Implementation(FName AttackName, bool bHeldQueue) {
}

bool UCombatState::DisableSprintTurn_Implementation() const {
    return false;
}

void UCombatState::CombatStateEvent(FName EventName) {
}

bool UCombatState::CanUseWeaponsAndSiegeActors() const {
    return false;
}

bool UCombatState::CanSwitchInventoryItems_Implementation() const {
    return false;
}

bool UCombatState::CanSprint_Implementation() const {
    return false;
}

bool UCombatState::CannotUseInteractables() const {
    return false;
}

bool UCombatState::CannotMove() const {
    return false;
}

bool UCombatState::CanMountActors() const {
    return false;
}

bool UCombatState::CanJump_Implementation() const {
    return false;
}

bool UCombatState::CanInitiateQueuedAttack() const {
    return false;
}

bool UCombatState::CanInitiateCrouch() const {
    return false;
}

bool UCombatState::CanFeint() const {
    return false;
}

bool UCombatState::CanDash() const {
    return false;
}

bool UCombatState::CanCrouch() const {
    return false;
}

bool UCombatState::CanComboFromState() const {
    return false;
}

void UCombatState::CancelAttack() {
}

bool UCombatState::CanBeCancelled_Implementation(bool bIsCancelIntoParry) const {
    return false;
}

bool UCombatState::AutomaticReload() const {
    return false;
}

void UCombatState::AddTimerHandle(int32 Handle, FName CombatStateName) {
}

void UCombatState::ActionQueueAttack() {
}

void UCombatState::ActionGotoState(FName NextState, float OverrideStateTime, bool bResetStateTime) {
}

void UCombatState::ActionClearToggleAltAttack() {
}

void UCombatState::ActionClearHeldAttackQueue() {
}

void UCombatState::ActionClearAttackQueue() {
}

UCombatState::UCombatState() {
    this->Version = 0;
    this->bIsAttackState = false;
    this->bIsSprintState = false;
    this->bRemainInSprint = false;
    this->bSprintDecelerate = false;
    this->bEndSpawnSpeedBonus = true;
    this->bIsClimbingState = false;
    this->bCanBeRestarted = false;
    this->bUseTurnLock = false;
    this->bUseScaleDirectionalMovement = false;
    this->bCanSwitchInventoryItems = false;
    this->bCanMountActors = false;
    this->bKnockRiderOffHorse = false;
    this->bEndWeaponTracers = false;
    this->bAnimationEnded = false;
    this->bSameAttackClash = false;
    this->bCancelHorseAttack = false;
    this->bIsActive = false;
    this->bBeginFire = false;
    this->bDidStartAttack = false;
    this->bCanInitiateCrouch = true;
    this->DefaultTime = 0.00f;
    this->CrowdControlPriority = 0;
    this->CrowdControlThreshold = 0.00f;
    this->PushingPriority = 0;
    this->KillReason = EKillReason::Damage;
    this->MinimumHoldingTime = 0.00f;
    this->EndAttackReason = EAbilityTermination::Cancelled;
    this->StartTime = 0.00f;
    this->bSoftRecovery = false;
    this->CurrentAnimationLength = 0.00f;
    this->AttackTransition = EAttackTransition::Normal;
    this->ScaleDirectionId = -1;
    this->SlowdownId = -1;
    this->PushingId = -1;
}

