#include "TBLCharacterMovement.h"
#include "Net/UnrealNetwork.h"

void UTBLCharacterMovement::WalkKeyReleased() {
}

void UTBLCharacterMovement::WalkKeyPressed() {
}

void UTBLCharacterMovement::UpdateSprint(float DeltaTime) {
}

void UTBLCharacterMovement::StopCrouch() {
}

void UTBLCharacterMovement::StartJump() {
}

void UTBLCharacterMovement::StartDash() {
}

void UTBLCharacterMovement::StartCrouch() {
}

void UTBLCharacterMovement::StartAutoSprint() {
}

void UTBLCharacterMovement::SprintTurnTick(float DeltaSeconds) {
}

void UTBLCharacterMovement::SprintTurnDecelerate() {
}

void UTBLCharacterMovement::SprintTick(float DeltaSeconds) {
}

void UTBLCharacterMovement::SprintStartTick(float DeltaSeconds) {
}

void UTBLCharacterMovement::SprintStart() {
}

void UTBLCharacterMovement::SprintKeyReleased() {
}

void UTBLCharacterMovement::SprintKeyPressed() {
}

void UTBLCharacterMovement::SprintFinished() {
}

void UTBLCharacterMovement::SprintDecelerateToSprint(float Speed) {
}

void UTBLCharacterMovement::SprintDecelerateTick(float DeltaSeconds) {
}

void UTBLCharacterMovement::SprintDecelerate() {
}

void UTBLCharacterMovement::SetWalkKey(bool bWalk) {
}

void UTBLCharacterMovement::SetSprintLocked(bool bSprintLock) {
}

void UTBLCharacterMovement::SetSprintKey(bool bSprint) {
}

void UTBLCharacterMovement::SetDownedTurnRate(bool bDowned) {
}

void UTBLCharacterMovement::SetDownedAutonomous() {
}

void UTBLCharacterMovement::SetAutoSprintKey(bool bSprint) {
}

void UTBLCharacterMovement::SetAutoSprint(bool bEnable) {
}

void UTBLCharacterMovement::SetAutorunElapsedTime(float ElapsedTime) {
}

void UTBLCharacterMovement::SetAltAttackWithMovement(bool bEnable) {
}

void UTBLCharacterMovement::ServerStartSpawnBonus_Implementation(const FStartSpawnBonus& Params) {
}
bool UTBLCharacterMovement::ServerStartSpawnBonus_Validate(const FStartSpawnBonus& Params) {
    return true;
}

void UTBLCharacterMovement::ServerSetMoveRight_Implementation(bool bPressed) {
}
bool UTBLCharacterMovement::ServerSetMoveRight_Validate(bool bPressed) {
    return true;
}

void UTBLCharacterMovement::ServerSetMoveLeft_Implementation(bool bPressed) {
}
bool UTBLCharacterMovement::ServerSetMoveLeft_Validate(bool bPressed) {
    return true;
}

void UTBLCharacterMovement::ServerSetMoveBackward_Implementation(bool bPressed) {
}
bool UTBLCharacterMovement::ServerSetMoveBackward_Validate(bool bPressed) {
    return true;
}

void UTBLCharacterMovement::ServerSetDowned_Implementation(bool bDowned, float ClientTimeStamp) {
}
bool UTBLCharacterMovement::ServerSetDowned_Validate(bool bDowned, float ClientTimeStamp) {
    return true;
}

void UTBLCharacterMovement::ServerPlaySpawnAnimation_Implementation(FName Animation, float ActorYaw, float ClientTimeStamp) {
}
bool UTBLCharacterMovement::ServerPlaySpawnAnimation_Validate(FName Animation, float ActorYaw, float ClientTimeStamp) {
    return true;
}

void UTBLCharacterMovement::ServerPlayLadderAnimation_Implementation(FPlayLadderAnimation Params) {
}
bool UTBLCharacterMovement::ServerPlayLadderAnimation_Validate(FPlayLadderAnimation Params) {
    return true;
}

void UTBLCharacterMovement::ServerMountLadder_Implementation(float ClientTimeStamp) {
}
bool UTBLCharacterMovement::ServerMountLadder_Validate(float ClientTimeStamp) {
    return true;
}

void UTBLCharacterMovement::ServerLadderDismountPressed_Implementation() {
}
bool UTBLCharacterMovement::ServerLadderDismountPressed_Validate() {
    return true;
}

void UTBLCharacterMovement::ServerEndLadderMovement_Implementation(FEndLadderMovement Params) {
}
bool UTBLCharacterMovement::ServerEndLadderMovement_Validate(FEndLadderMovement Params) {
    return true;
}

void UTBLCharacterMovement::ResumeSprintCombatState() {
}

void UTBLCharacterMovement::PlaySpawnAnimation_Internal(FName Animation) {
}

void UTBLCharacterMovement::PlaySpawnAnimation(FName Animation) {
}

void UTBLCharacterMovement::OnRep_ReplicatedSprintTurn() {
}

void UTBLCharacterMovement::OnRep_RepCurrentSpawnBoost() {
}

void UTBLCharacterMovement::OnRep_CharacterMovementState() {
}

void UTBLCharacterMovement::OnLadderAnimationEnded() {
}

void UTBLCharacterMovement::OnEquippedItemsChanged() {
}

void UTBLCharacterMovement::OnDismount(AActor* AttachParent, EDismountType DismountType) {
}

void UTBLCharacterMovement::OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* CombatState) {
}

void UTBLCharacterMovement::OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void UTBLCharacterMovement::MoveIgnoreActorRemove(AActor* ActorToIgnore) {
}

void UTBLCharacterMovement::MoveIgnoreActorAdd(AActor* ActorToIgnore) {
}

FVector UTBLCharacterMovement::MoveDirectionToVector(TEnumAsByte<EMovementDirection> Direction) const {
    return FVector{};
}

float UTBLCharacterMovement::MoveDirectionToAngle(TEnumAsByte<EMovementDirection> Direction) const {
    return 0.0f;
}

void UTBLCharacterMovement::LimitSprintTurnRate(float DeltaTime) {
}

void UTBLCharacterMovement::LadderDismountReleased() {
}

void UTBLCharacterMovement::LadderDismountPressed() {
}

bool UTBLCharacterMovement::IsSprinting() const {
    return false;
}

bool UTBLCharacterMovement::IsSprintDecelerating() const {
    return false;
}

bool UTBLCharacterMovement::IsCrouchKeyHeld() {
    return false;
}

void UTBLCharacterMovement::HandleDelaySpawnAnimation() {
}

float UTBLCharacterMovement::GetSprintTime() {
    return 0.0f;
}

FSprintState UTBLCharacterMovement::GetSprintState() {
    return FSprintState{};
}

FName UTBLCharacterMovement::GetMovementState() const {
    return NAME_None;
}

float UTBLCharacterMovement::GetMovementSpeed() const {
    return 0.0f;
}

FName UTBLCharacterMovement::GetMovementInputName() const {
    return NAME_None;
}

FVector UTBLCharacterMovement::GetMovementInputDirection(bool bUseLastNonZero) const {
    return FVector{};
}

TEnumAsByte<EMovementDirection> UTBLCharacterMovement::GetMovementDirection(bool bUseInputDirection, bool bUseLastNonZero) const {
    return MOVEDIR_None;
}

TEnumAsByte<EMovementDirection> UTBLCharacterMovement::GetLastVerticalInput() const {
    return MOVEDIR_None;
}

TEnumAsByte<EMovementDirection> UTBLCharacterMovement::GetLastHorizontalInput() const {
    return MOVEDIR_None;
}

float UTBLCharacterMovement::GetDefaultMovementSpeed() {
    return 0.0f;
}

float UTBLCharacterMovement::GetChaseBonusPercent() const {
    return 0.0f;
}

void UTBLCharacterMovement::ForceMaxSprint() {
}

void UTBLCharacterMovement::EndPhysSpawn(bool bDisableRootMotion) {
}

void UTBLCharacterMovement::EndLadderMovement() {
}

void UTBLCharacterMovement::EnableCharacterCollision() {
}

void UTBLCharacterMovement::DownedSprintTick(float DeltaSeconds) {
}

void UTBLCharacterMovement::DownedSprintStart() {
}

void UTBLCharacterMovement::DownedSprintFinished() {
}

void UTBLCharacterMovement::DisableCharacterCollision() {
}

void UTBLCharacterMovement::ClientMountLadderFailed_Implementation() {
}

void UTBLCharacterMovement::ClientForceLadderMovement_Implementation(bool bDirectionUp) {
}

bool UTBLCharacterMovement::CanSprintShove() const {
    return false;
}

bool UTBLCharacterMovement::CanSprintAttack() const {
    return false;
}

bool UTBLCharacterMovement::CanSprint(bool bStartSprint) const {
    return false;
}

void UTBLCharacterMovement::BroadcastStartVault_Implementation(AVaultMarker* VaultMarker) {
}

void UTBLCharacterMovement::BroadcastSetCharacterCollision_Implementation(bool bEnabled) {
}

void UTBLCharacterMovement::BroadcastPlayLadderAnimation_Implementation(FName Animation) {
}

void UTBLCharacterMovement::BroadcastIgnoreActorWhenMoving_Implementation(AActor* ActorToIgnore, bool bShouldIgnore) {
}

void UTBLCharacterMovement::BroadcastDownToUpLadderAnimation_Implementation() {
}

void UTBLCharacterMovement::ApplyKnockback(UMovementSequence* Sequence, AActor* Initiator) {
}

void UTBLCharacterMovement::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTBLCharacterMovement, InventoryCanJump);
    DOREPLIFETIME(UTBLCharacterMovement, InventorySpeedPenalty);
    DOREPLIFETIME(UTBLCharacterMovement, PerksSpeedBonus);
    DOREPLIFETIME(UTBLCharacterMovement, bIsSprinting);
    DOREPLIFETIME(UTBLCharacterMovement, RepCurrentSpawnBoost);
    DOREPLIFETIME(UTBLCharacterMovement, ReplicatedSprintTurn);
    DOREPLIFETIME(UTBLCharacterMovement, ChaseBonus);
    DOREPLIFETIME(UTBLCharacterMovement, CharacterMovementState);
    DOREPLIFETIME(UTBLCharacterMovement, LastHorizontalInput);
    DOREPLIFETIME(UTBLCharacterMovement, LastVerticalInput);
}

UTBLCharacterMovement::UTBLCharacterMovement() {
    this->ForwardSpeedModifier = 1.00f;
    this->BackSpeedModifier = 1.00f;
    this->StrafeSpeedModifier = 1.00f;
    this->bDisableJump = false;
    this->DisableSlideMaxAngle = 45.00f;
    this->SprintForwardAcceleration = 2048.00f;
    this->SprintStrafeAcceleration = 2048.00f;
    this->ViewPitchMinSpinningSpecial = -10.00f;
    this->ViewPitchMaxSpinningSpecial = 10.00f;
    this->ViewPitchMinStanding = -75.00f;
    this->ViewPitchMaxStanding = 60.00f;
    this->ViewPitchMinCrouching = -75.00f;
    this->ViewPitchMaxCrouching = 60.00f;
    this->ViewPitchInterpSpeed = 5.00f;
    this->ViewPitchSpinningSpecialInterpSpeed = 3.00f;
    this->DownedCapsuleHalfHeight = 40.00f;
    this->DownedCapsuleRadius = 27.00f;
    this->DownedTurnLimit = 40.00f;
    this->MinimumCrouchTime = 0.50f;
    this->AutoSprintDelay = 1.50f;
    this->bPlayingSpawnAnimation = false;
    this->bMoveForwardHeld = false;
    this->bMoveBackwardHeld = false;
    this->bMoveRightHeld = false;
    this->bMoveLeftHeld = false;
    this->MoveForwardHeldTime = 0.00f;
    this->MoveBackwardHeldTime = 0.00f;
    this->MoveRightHeldTime = 0.00f;
    this->MoveLeftHeldTime = 0.00f;
    this->bWantsToSprint = false;
    this->bWantsToAutoSprint = false;
    this->bForceWalk = false;
    this->bAutoSprint = false;
    this->bSprintLocked = false;
    this->SprintHorizLockTurnId = -1;
    this->SprintVerticalLockTurnId = -1;
    this->bAltAttackWithMovement = false;
    this->bGamepadSprint = false;
    this->CurrentAimPenalty = 0.00f;
    this->CurrentRangedInaccuracy = 0.00f;
    this->bIsMovementLocked = false;
    this->GamepadUsePressedTime = 0.00f;
    this->bIsAutorunSprinting = false;
    this->bForceMaxSprint = false;
    this->LastTickSprintSpeed = 0.00f;
    this->Stats = NULL;
    this->MovementModifiers = NULL;
    this->DefaultMovementSpeed = 0.00f;
    this->bIsDowned = false;
    this->DownedTurnRateId = -1;
    this->bCharacterCollisionEnabled = true;
    this->DashCooldown = 2.00f;
    this->JumpCooldown = 0.50f;
    this->JumpFromDashCooldown = 0.55f;
    this->LastDashTime = 0.00f;
    this->LastLandedTime = 0.00f;
    this->ChaseTime = 0.00f;
    this->bTeleport = false;
    this->TeleportTime = 0.00f;
    this->LastFindFloorTime = 0.00f;
    this->FallingStartTime = 0.00f;
    this->ActiveAimPenalties.AddDefaulted(3);
    this->MovementBlockId = 0;
    this->ScaleDirectionalMovementId = 0;
    this->bMovementBlockEndOnLanding = 0.00f;
    this->UpdateSpawnBonusHandle = -1;
    this->MovementSpeed = 0.00f;
    this->SprintBaseSpeed = 0.00f;
    this->SprintMaxSpeed = 0.00f;
    this->SprintStartTime = 0.00f;
    this->SprintStartMinTime = 0.00f;
    this->SprintTime = 0.00f;
    this->SprintDeceleration = 0.00f;
    this->StrafeAccelerationModifier = 0.00f;
    this->DownedMovementSpeed = 0.00f;
    this->DownedSprintSpeed = 0.00f;
    this->bIsCrouchHeld = false;
    this->bIsCrouchKeyHeld = false;
    this->CrouchStartTime = 0.00f;
    this->LastTurnTime = 0.00f;
    this->bIsPossessed = false;
}

