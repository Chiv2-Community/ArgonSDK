#include "HorseMovement.h"
#include "Net/UnrealNetwork.h"

void UHorseMovement::TurnTowardsCamera(float TurnRate, float TurnRateWithInput) {
}

void UHorseMovement::StartDash() {
}

void UHorseMovement::ServerSetLeanDirection_Implementation(FName Direction) {
}
bool UHorseMovement::ServerSetLeanDirection_Validate(FName Direction) {
    return true;
}

void UHorseMovement::ServerHorseToWorldBump_Implementation(FHorseToWorldBump Params) {
}
bool UHorseMovement::ServerHorseToWorldBump_Validate(FHorseToWorldBump Params) {
    return true;
}

void UHorseMovement::ServerHorseToHorseBump_Implementation(FHorseToHorseBump Params) {
}
bool UHorseMovement::ServerHorseToHorseBump_Validate(FHorseToHorseBump Params) {
    return true;
}

void UHorseMovement::OnRep_TargetSpeed() {
}

void UHorseMovement::OnRep_IsDecelerating() {
}

void UHorseMovement::OnRep_IsAccelerating() {
}

void UHorseMovement::OnRep_CurrentTurnRateAccel() {
}

void UHorseMovement::OnRep_CurrentTurnRate() {
}

void UHorseMovement::OnRep_CurrentForwardSpeed() {
}

void UHorseMovement::OnPushingOverlap(TArray<ATBLCharacterBase*> Overlaps) {
}

void UHorseMovement::OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* CombatState) {
}

void UHorseMovement::ModifyTurnRateScale(float Target, float InterpSpeed) {
}

void UHorseMovement::ModifyTargetSpeed(float Target) {
}

void UHorseMovement::ModifyAccelerationScale(float Target, float InterpSpeed) {
}

bool UHorseMovement::IsValidMovementState(FName State) {
    return false;
}

bool UHorseMovement::IsStrafing() {
    return false;
}

bool UHorseMovement::IsMovementStateLessThanEqual(FName State) {
    return false;
}

bool UHorseMovement::IsMovementStateGreaterThan(FName State) {
    return false;
}

bool UHorseMovement::IsMovementStateEqual(FName State) {
    return false;
}

void UHorseMovement::ImpactTurn(float Delta, float Time) {
}

void UHorseMovement::ImpactSlowdown(float Delta, float Time) {
}

void UHorseMovement::ImpactMaxSpeed(float MaxSpeed, float Time) {
}

void UHorseMovement::ImpactBumpOff() {
}

float UHorseMovement::GetSpeedInState(FName State, float Percent) {
    return 0.0f;
}

float UHorseMovement::GetSettleSpeedInState(FName State) {
    return 0.0f;
}

FName UHorseMovement::GetMovementStateFromSpeed(float Speed) {
    return NAME_None;
}

float UHorseMovement::GetMinSpeedInState(FName State) {
    return 0.0f;
}

float UHorseMovement::GetMaxSpeedInState(FName State) {
    return 0.0f;
}

float UHorseMovement::GetMaxKickSpeed() {
    return 0.0f;
}

bool UHorseMovement::GetInvertedBackwardsStrafe() {
    return false;
}

float UHorseMovement::GetInstantKickSpeed() {
    return 0.0f;
}

void UHorseMovement::GetInputTurn(float& InputTurn, float& HeldTime) {
}

void UHorseMovement::GetInputStrafe(float& InputStrafe, float& HeldTime) {
}

void UHorseMovement::GetInputForward(float& InputForward, float& HeldTime) {
}

void UHorseMovement::GetInputDirection(EHorseMovementInput& Direction, float& HeldTime) {
}

float UHorseMovement::GetCurrentForwardSpeed() {
    return 0.0f;
}

bool UHorseMovement::GetControlMode() {
    return false;
}

bool UHorseMovement::GetBoostMode() {
    return false;
}

void UHorseMovement::DrawDebugHorseMovePath(float DeltaTime) {
}

void UHorseMovement::ClientPerformBump_Implementation(float Direction, float TurnAngle, float Scale, bool bRearImpact, bool bSideImpact, AHorse* InitiatorHorse) {
}

void UHorseMovement::ClientImpactTurn_Implementation(float Delta, float Time) {
}

void UHorseMovement::ClientImpactSlowdown_Implementation(float Delta, float Time) {
}

void UHorseMovement::ClientImpactMaxSpeed_Implementation(float MaxSpeed, float Time) {
}

FName UHorseMovement::ClampMovementState(FName State) {
    return NAME_None;
}

bool UHorseMovement::CheckHorseCollisionFromIdle(float Direction) {
    return false;
}

void UHorseMovement::BroadcastHorseToWorldImpact_Implementation(FHitResult Hit, EHorseImpactLocation HorseImpactLocation, EHorseToWorldImpactType ImpactType, FName ImpactCombatState, float ImpactSpeed) {
}

void UHorseMovement::BroadcastHorseToHorseImpact_Implementation(AHorse* TargetHorse, EHorseImpactLocation HorseImpactLocation, EHorseToHorseImpactType ImpactType, FName ImpactCombatState, float ImpactSpeed) {
}

void UHorseMovement::BroadcastHorseToCharacterImpact_Implementation(ATBLCharacter* TargetCharacter, EHorseImpactLocation HorseImpactLocation, EHorseToCharacterImpactType ImpactType, FName ImpactCombatState, float ImpactSpeed) {
}

void UHorseMovement::BroadcastBump_Implementation(AActor* Actor, float TurnAngle, float BumpVelocity, bool bDirection, bool bRearImpact) {
}

void UHorseMovement::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHorseMovement, ReplicatedCurrentForwardSpeed);
    DOREPLIFETIME(UHorseMovement, ReplicatedCurrentTurnRate);
    DOREPLIFETIME(UHorseMovement, ReplicatedCurrentTurnRateAccel);
    DOREPLIFETIME(UHorseMovement, ReplicatedTargetSpeed);
    DOREPLIFETIME(UHorseMovement, ReplicatedFloorNormal);
    DOREPLIFETIME(UHorseMovement, ReplicatedIsAccelerating);
    DOREPLIFETIME(UHorseMovement, ReplicatedIsDecelerating);
    DOREPLIFETIME(UHorseMovement, ReplicatedForwardInput);
    DOREPLIFETIME(UHorseMovement, ReplicatedRightInput);
}

UHorseMovement::UHorseMovement() {
    this->CurrentForwardSpeed = 0.00f;
    this->ModifiedForwardSpeed = 0.00f;
    this->CurrentStrafeSpeed = 0.00f;
    this->CurrentMovementModifier = 0.00f;
    this->CurrentTurnRate = 0.00f;
    this->CurrentForwardAccel = 0.00f;
    this->CurrentStrafeAccel = 0.00f;
    this->CurrentTurnRateAccel = 0.00f;
    this->CurrentStrafeDistance = 0.00f;
    this->PendingTargetSpeed = 0.00f;
    this->TargetSpeed = 0.00f;
    this->bWantsToGallop = false;
    this->bForceRun = false;
    this->ForceRunTime = 0.00f;
    this->bDebugAutoRun = false;
    this->HorseMovementDirectionTimeMs = 0.00f;
    this->HorseMovementInfoTimeMs = 0.00f;
    this->CruisingSpeed = 400.00f;
    this->bUseCruisingSpeed = false;
    this->bIsAccelerating = false;
    this->bIsDecelerating = false;
    this->PreviousSpeed = 0.00f;
    this->MovementModifiers = NULL;
    this->BaseTurnRate = 100.00f;
    this->SpeedToTurnRateCurve = NULL;
    this->ForwardSpeedToStrafeSpeedCurve = NULL;
    this->ForwardAngleToTurnMultiplierCurve = NULL;
    this->StrafeAngleToTurnMultiplierCurve = NULL;
    this->IdleAngleToTurnMultiplierCurve = NULL;
    this->StrafeToTurnRateCurve = NULL;
    this->InertiaTurnDecelCurve = NULL;
    this->InertiaStrafeTurnDecelCurve = NULL;
    this->SpeedToForwardDecelCurve = NULL;
    this->SpeedToForwardDecelWhileStrafingCurve = NULL;
    this->SpeedToForwardDecelEmergency = NULL;
    this->InputTimeToMultiplierCurve = NULL;
    this->GamepadInputToAxisMagnitudeCurve = NULL;
    this->InertiaStrafeTime = 0.00f;
    this->InertiaTurnTime = 0.00f;
    this->MovementTransitionTime = 0.30f;
    this->InputTapThreshold = 0.20f;
    this->InputDoubleTapThreshold = 0.50f;
    this->bNeedToRepressKeyForReverse = false;
    this->MaxMovementState = TEXT("Gallop");
    this->ImpactCooldown = 1.00f;
    this->CanInstantKickSpeed = 350.00f;
    this->CanSlowDownToKickSpeed = 600.00f;
    this->SlowdownToEmoteSpeed = 350.00f;
    this->TurnAgainstWallResistance = 0.80f;
    this->bUseBreakingState = true;
    this->BreakingToReverseDelay = 0.25f;
    this->EmergencyBrakeSpeed = 600.00f;
    this->BreakingOrientationSpeed = 200.00f;
    this->bDoStrafeOrbiting = true;
    this->PercentMaintainVelocityOnLanded = 0.80f;
    this->bIsDashDisabled = true;
    this->bInvertBackwardsStrafe = false;
    this->bBackwardStrafeAngleRelativeToCamera = false;
    this->DashCooldown = 2.00f;
    this->StrafeTurnMultiplier = 1.50f;
    this->BackwardsStrafeAngle = 110.00f;
    this->GamepadExclusiveSagitalInputAngle = 25.00f;
    this->GamepadExclusiveHorizontalInputAngle = 20.00f;
    this->GamepadInputOuterThreshold = 0.10f;
    this->BoostMode = false;
    this->ControlMode = false;
    this->bIsStrafing = false;
    this->MovementStateDeltaTime = 0.00f;
    this->bDidImpact = false;
    this->bStuckPenetrating = false;
    this->StuckPenetratingDirection = 0;
    this->MaxSlowdownToKickTime = 7.50f;
    this->ImpactHitTime = 0.00f;
    this->ImpactHitStrafe = 0.00f;
    this->StandardMovementStates.AddDefaulted(8);
    this->bIsAdjustingFloorHeight = false;
    this->bIsStepUp = false;
    this->bRevertStepUpMovement = false;
    this->TargetOrientationMin = 0.00f;
    this->TargetOrientationMax = 0.00f;
    this->LookTurnPercentage = 0.00f;
    this->bIsEmergencyBrake = false;
    this->LastLandedTime = 0.00f;
    this->FallingCollisionComponent = NULL;
    this->MaintainHorseSpeedOnImpact = NULL;
    this->bSyncMaintainImpactSpeed = false;
    this->HorseToHorseImpactType = EHorseToHorseImpactType::StraightImpact;
    this->ImpactLocation = EHorseImpactLocation::Left;
}

