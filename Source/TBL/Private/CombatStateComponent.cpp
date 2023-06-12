#include "CombatStateComponent.h"
#include "Net/UnrealNetwork.h"

bool UCombatStateComponent::WasLastHitTeamHit() const {
    return false;
}

bool UCombatStateComponent::WasInterruptedByJab() const {
    return false;
}

bool UCombatStateComponent::WasHitByProjectile() const {
    return false;
}

bool UCombatStateComponent::WasBlockedWithParryForgivenessWindow() const {
    return false;
}

void UCombatStateComponent::StartProjectileCounterWindow() {
}

void UCombatStateComponent::StartCounterWindow() {
}

void UCombatStateComponent::StartActiveRiposteWindow() {
}

bool UCombatStateComponent::ShouldEndCounterWindow() const {
    return false;
}

bool UCombatStateComponent::ShouldEndActiveRiposteWindow() const {
    return false;
}

void UCombatStateComponent::SetSimulatedCombatState(bool bBroadcastEndState) {
}

void UCombatStateComponent::ServerStartReleaseStab_Implementation(const FCombatStateReleaseStab& Params) {
}
bool UCombatStateComponent::ServerStartReleaseStab_Validate(const FCombatStateReleaseStab& Params) {
    return true;
}

void UCombatStateComponent::ServerStartHeavyAttack_Implementation(const FCombatStateHeavyAttack& Params) {
}
bool UCombatStateComponent::ServerStartHeavyAttack_Validate(const FCombatStateHeavyAttack& Params) {
    return true;
}

void UCombatStateComponent::ServerStartFire_Implementation(const FCombatStateFire& Params) {
}
bool UCombatStateComponent::ServerStartFire_Validate(const FCombatStateFire& Params) {
    return true;
}

void UCombatStateComponent::ServerStartChargeStab_Implementation(const FCombatStateChargeStab& Params) {
}
bool UCombatStateComponent::ServerStartChargeStab_Validate(const FCombatStateChargeStab& Params) {
    return true;
}

void UCombatStateComponent::ServerManualReload_Implementation(FManualReload Params) {
}
bool UCombatStateComponent::ServerManualReload_Validate(FManualReload Params) {
    return true;
}

void UCombatStateComponent::ServerHitSuccessWorldWithStats(int32 AttackID, FHitResultCompressed HitCompressed, bool bParried, bool bBreakableHit) {
}

void UCombatStateComponent::ServerHitSuccess_Implementation(int32 AttackID, FHitResultCompressed HitCompressed, bool bParried, bool bIsInTeamThwackRange) {
}
bool UCombatStateComponent::ServerHitSuccess_Validate(int32 AttackID, FHitResultCompressed HitCompressed, bool bParried, bool bIsInTeamThwackRange) {
    return true;
}

void UCombatStateComponent::ServerGetUp_Implementation(const FCombatStateGetUp& Params) {
}
bool UCombatStateComponent::ServerGetUp_Validate(const FCombatStateGetUp& Params) {
    return true;
}

void UCombatStateComponent::ServerDisableAttackRootMotion_Implementation(const FDisableAttackRootMotion& Params) {
}
bool UCombatStateComponent::ServerDisableAttackRootMotion_Validate(const FDisableAttackRootMotion& Params) {
    return true;
}

void UCombatStateComponent::ServerDebugGotoState_Implementation(FName CombatState, FName HitDirection, int32 CrowdControlVariant) {
}
bool UCombatStateComponent::ServerDebugGotoState_Validate(FName CombatState, FName HitDirection, int32 CrowdControlVariant) {
    return true;
}

void UCombatStateComponent::ServerCancelAttack_Implementation(const FCombatStateCancelAttack& Params) {
}
bool UCombatStateComponent::ServerCancelAttack_Validate(const FCombatStateCancelAttack& Params) {
    return true;
}

void UCombatStateComponent::ResetQueuedInputs() {
}

FReplicatedCombatStateInfo UCombatStateComponent::ReplicateCombatState(bool bForceNetUpdate) {
    return FReplicatedCombatStateInfo{};
}

void UCombatStateComponent::Reload(AInventoryItem* Item, bool bReplicateToClient) {
}

void UCombatStateComponent::QueueHeldInputs(FName InputName, bool bIgnoreLastAttackInput) {
}

void UCombatStateComponent::OnWasParried(ATBLCharacter* AttackingCharacter, ATBLCharacter* DefendingCharacter, FParryEventState ParryEventState) {
}

void UCombatStateComponent::OnStaminaDrained() {
}

void UCombatStateComponent::OnReplicatedCombatState() {
}

void UCombatStateComponent::OnRagdolled() {
}

void UCombatStateComponent::OnProjectileCounterWindowTimeout(float OverTime) {
}

void UCombatStateComponent::OnParrySuccess(ATBLCharacter* DefendingCharacter, ATBLCharacter* AttackingCharacter, FParryEventState ParryEventState) {
}

void UCombatStateComponent::OnMovementInput(FName Direction) {
}

void UCombatStateComponent::OnMeleeSuccess(ATBLCharacter* HitCharacter) {
}

void UCombatStateComponent::OnLanded(const FLandedResult& LandedResult) {
}

void UCombatStateComponent::OnKilled() {
}

void UCombatStateComponent::OnJumpPressed() {
}

void UCombatStateComponent::OnItemStackChanged(AInventoryItem* Item, int32 Delta) {
}

void UCombatStateComponent::OnHitWorld(AActor* HitActor, bool bBreakableHit, bool bAutonomous) {
}

void UCombatStateComponent::OnEndAnimationTimeout(float OverTime) {
}

void UCombatStateComponent::OnEndAnimation() {
}

void UCombatStateComponent::OnDismount(AActor* AttachParent, EDismountType DismountType) {
}

void UCombatStateComponent::OnDamageCaused(const FDamageTakenEvent& DamageEvent) {
}

void UCombatStateComponent::OnDamage(const FDamageTakenEvent& DamageEvent) {
}

void UCombatStateComponent::OnCounterWindowTimeout(float OverTime) {
}

void UCombatStateComponent::OnClash(ATBLCharacter* Initiator, ATBLCharacter* Target) {
}

void UCombatStateComponent::OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void UCombatStateComponent::OnActiveRiposteWindowTimeout(float OverTime) {
}

void UCombatStateComponent::OnActivateTimer(float OverTime) {
}

void UCombatStateComponent::OnAbilityInitiated(AAbilityInvocation* Invocation) {
}

void UCombatStateComponent::ManualReload() {
}

bool UCombatStateComponent::IsUsingAttackTracers() const {
    return false;
}

bool UCombatStateComponent::IsRiposte() const {
    return false;
}

bool UCombatStateComponent::IsPreMovement() const {
    return false;
}

bool UCombatStateComponent::IsParryQueued() const {
    return false;
}

bool UCombatStateComponent::IsKnockedDown() const {
    return false;
}

bool UCombatStateComponent::IsInterrupted() const {
    return false;
}

bool UCombatStateComponent::IsInState(FName StateName) const {
    return false;
}

bool UCombatStateComponent::IsInProjectileCounterWindow() const {
    return false;
}

bool UCombatStateComponent::IsInParryForgivenessWindow() {
    return false;
}

bool UCombatStateComponent::IsInCounterWindow() const {
    return false;
}

bool UCombatStateComponent::IsInActiveRiposteWindow() const {
    return false;
}

bool UCombatStateComponent::IsHoldingInput() const {
    return false;
}

bool UCombatStateComponent::IsHoldAttackPressed() const {
    return false;
}

bool UCombatStateComponent::IsHeavy() const {
    return false;
}

bool UCombatStateComponent::IsFocused() const {
    return false;
}

bool UCombatStateComponent::IsFeint() const {
    return false;
}

bool UCombatStateComponent::IsDowned() const {
    return false;
}

bool UCombatStateComponent::IsCounter() const {
    return false;
}

bool UCombatStateComponent::IsCombo() const {
    return false;
}

bool UCombatStateComponent::IsCancelling() const {
    return false;
}

bool UCombatStateComponent::IsActiveRiposte() const {
    return false;
}

bool UCombatStateComponent::IsActiveCounter() const {
    return false;
}

bool UCombatStateComponent::IsAbilityUnblockable() const {
    return false;
}

void UCombatStateComponent::HandleDelayedQueueHeldInputs() {
}

void UCombatStateComponent::GotoStateReplicated(FName NextStateName, bool bAutonomous, float OverrideStateTime, ECrowdControlVariant Variant) {
}

void UCombatStateComponent::GotoState(FName NextStateName, float OverrideStateTime, bool bStartAttack, ECrowdControlVariant Variant) {
}

void UCombatStateComponent::GotoParrySuccessReplicated(int32 ParryAttackID, bool bWasBlockedWithParryForgivenessWindow) {
}

void UCombatStateComponent::GotoCounterReadyStateReplicated(int32 ParryAttackID, FName AttackerAttackName) {
}

float UCombatStateComponent::GetTimeInCurrentState() {
    return 0.0f;
}

FName UCombatStateComponent::GetState() const {
    return NAME_None;
}

FName UCombatStateComponent::GetQueuedInput() const {
    return NAME_None;
}

FCombatStateInfo UCombatStateComponent::GetPreviousStateInfoByName(FName InCombatState) const {
    return FCombatStateInfo{};
}

FCombatStateInfo UCombatStateComponent::GetPreviousStateInfo(bool bLastAttackState, bool bIgnoreQuickIdle) const {
    return FCombatStateInfo{};
}

float UCombatStateComponent::GetMinimumHoldingTime() const {
    return 0.0f;
}

ECrowdControlDirection UCombatStateComponent::GetLastHitDirection_CrowdControl() const {
    return ECrowdControlDirection::Default;
}

FName UCombatStateComponent::GetLastHitDirection() const {
    return NAME_None;
}

float UCombatStateComponent::GetFeintMinTime() const {
    return 0.0f;
}

TArray<FString> UCombatStateComponent::GetDebugPreviousSwingThroughInfo() {
    return TArray<FString>();
}

TArray<FString> UCombatStateComponent::GetDebugPreviousStates() {
    return TArray<FString>();
}

FCombatStateInfo UCombatStateComponent::GetCurrentStateInfo() const {
    return FCombatStateInfo{};
}

EAttackTypeCategory UCombatStateComponent::GetCurrentAttackTypeCategory() const {
    return EAttackTypeCategory::Standard;
}

float UCombatStateComponent::GetCurrentAttackTime() const {
    return 0.0f;
}

AInventoryItem* UCombatStateComponent::GetCurrentAttackItem() const {
    return NULL;
}

FAttackInfo UCombatStateComponent::GetCurrentAttackInfo(bool bLastValidAttack) const {
    return FAttackInfo{};
}

FName UCombatStateComponent::GetCurrentAttackDirection() const {
    return NAME_None;
}

FName UCombatStateComponent::GetCurrentAttackComboState() const {
    return NAME_None;
}

FName UCombatStateComponent::GetCurrentAttackCategory() const {
    return NAME_None;
}

FName UCombatStateComponent::GetCurrentAttack() const {
    return NAME_None;
}

float UCombatStateComponent::GetCurrentAnimationLength() const {
    return 0.0f;
}

float UCombatStateComponent::GetCounterWindowTime() const {
    return 0.0f;
}

FString UCombatStateComponent::GetComboTimingPolicyString(EComboTimingPolicy ComboTimingPolicy) const {
    return TEXT("");
}

UCombatStateSynchronization* UCombatStateComponent::GetCombatStateSynchronization() const {
    return NULL;
}

UCombatStateQueue* UCombatStateComponent::GetCombatStateQueue() const {
    return NULL;
}

UCombatState* UCombatStateComponent::GetCombatStateBlueprint(const FName& StateName) {
    return NULL;
}

float UCombatStateComponent::GetClientTimeStamp() const {
    return 0.0f;
}

FString UCombatStateComponent::GetAttackTransitionString(EAttackTransition AttackTransition) const {
    return TEXT("");
}

float UCombatStateComponent::GetAttackCooldownRemainingByName(FName AttackName) {
    return 0.0f;
}

void UCombatStateComponent::ExtendCounterWindow() {
}

void UCombatStateComponent::EndProjectileCounterWindow() {
}

void UCombatStateComponent::EndCounterWindow() {
}

void UCombatStateComponent::EndActiveRiposteWindow() {
}

void UCombatStateComponent::DoHitSuccess(int32 AttackID, FHitResultCompressed HitCompressed, bool bParried, bool bIsInTeamThwackRange) {
}

bool UCombatStateComponent::DidLastAttackDisarm() const {
    return false;
}

void UCombatStateComponent::DebugGotoState(FName CombatState, FName HitDirection, int32 CrowdControlVariant) {
}

void UCombatStateComponent::CrowdControl_NoDamage(ECrowdControlCombatState CombatState, FCrowdControlParams CrowdControlParams, bool bAutonomous) {
}

void UCombatStateComponent::ClientRecordPreviousSwingThroughInfo_Implementation(FSwingThroughInfo SwingThroughInfo) {
}

void UCombatStateComponent::ClientOutOfStamina_Implementation(FName NewState) {
}

void UCombatStateComponent::ClientGotoState_Implementation(FName NextState, float OverrideStateTime, ECrowdControlVariant Variant) {
}

void UCombatStateComponent::ClientGotoParrySuccess_Implementation(int32 ParryAttackID, bool bWasBlockedWithParryForgivenessWindow) {
}

void UCombatStateComponent::ClientGotoCounterReadyState_Implementation(int32 ParryAttackID, FName AttackerAttackName) {
}

void UCombatStateComponent::ClientCancelProjectile_Implementation(FName CombatState) {
}

bool UCombatStateComponent::CanDoHeavyAttack() {
    return false;
}

bool UCombatStateComponent::CanCrouch() const {
    return false;
}

void UCombatStateComponent::BroadcastGetUp_Implementation(FName Direction) {
}

void UCombatStateComponent::BroadcastDrawStrengthModifier_Implementation(uint8 InDrawStrengthModifier) {
}

void UCombatStateComponent::BroadcastDebugGotoState_Implementation(FName CombatState, FName HitDirection, int32 CrowdControlVariant) {
}

void UCombatStateComponent::BroadcastCrowdControl_NoDamage_Implementation(ECrowdControlCombatState CombatState, FCrowdControlParams CrowdControlParams, bool bSkipAutonomous) {
}

void UCombatStateComponent::AnimNotify_EndWeaponTracers() {
}

void UCombatStateComponent::AnimNotify_ActivateAbility() {
}

bool UCombatStateComponent::AbilityHasMeleeTargetMethod(UAbilitySpec* AbilitySpec) {
    return false;
}

void UCombatStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCombatStateComponent, ReplicatedCombatState);
}

UCombatStateComponent::UCombatStateComponent() {
    this->InitialState = TEXT("Initialize");
    this->DisplayDebugTitle = TEXT("Combat State");
    this->OverrideHitDirectionTime = 0.00f;
    this->OverrideCrowdControlVariant = 0;
    this->bWeaponTracersUpdating = false;
    this->bForceCanMount = false;
    this->bHorseAttackSwitchDirection = false;
    this->CombatStateSynchronization = NULL;
    this->CombatStateQueue = NULL;
    this->NonAbilitiesAnimationDataTable = NULL;
    this->CombatStateSet = NULL;
    this->ComboCount = 0;
    this->IdenticalComboCount = 0;
    this->bIsValidCombatState = false;
    this->bWasKilled = false;
    this->bIsSwitchingStates = false;
    this->bCancelToParry = false;
    this->bHasNextStateInputParams = false;
    this->LastAttacker = NULL;
    this->AnimationTimerOvertime = 0.00f;
    this->bShouldOverrideCurrentAnimTiming = false;
    this->SyncClientTimeStamp = 0.00f;
    this->bSyncStartAttack = false;
    this->bIsStartingAttack = false;
    this->bWeaponTracerStarted = false;
    this->EndTracerTime = 0.00f;
    this->OnEndAnimationTimerHandle = -1;
    this->bSwitchAttack = false;
    this->OverrideTimingStates.AddDefaulted(10);
    this->InterruptingCombatStates.AddDefaulted(10);
    this->CooldownRefreshCombatStates.AddDefaulted(7);
    this->KnockedDownCombatStates.AddDefaulted(3);
    this->DownedCombatStates.AddDefaulted(6);
    this->CounterAttacks.AddDefaulted(6);
    this->ActiveRiposteAttacks.AddDefaulted(6);
    this->DrawStrengthModifier = 1.00f;
    this->ProjectileCounterTimer = -1;
    this->CounterTimer = -1;
    this->ActiveRiposteTimer = -1;
    this->DashTime = 0.00f;
    this->AttackStartTime = 0.00f;
    this->FeintStartTime = 0.00f;
    this->NewFeintTime = 0.00f;
    this->NewFeintAttackTime = 0.00f;
    this->NewFeintHeavyAttackTime = 0.00f;
    this->LockTurnAngle = NULL;
    this->DrainStamina = NULL;
    this->bAbilityActivated = false;
    this->bIsFocused = false;
    this->LagCompensation = 0.00f;
    this->MaxLagCompensationMS = 200.00f;
    this->LastCancelTime = 0.00f;
    this->bWasInterruptedByJab = false;
    this->bWasHitByProjectile = false;
    this->bLastHitWasTeamHit = false;
}

