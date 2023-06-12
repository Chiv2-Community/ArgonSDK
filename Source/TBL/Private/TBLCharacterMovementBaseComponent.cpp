#include "TBLCharacterMovementBaseComponent.h"
#include "Net/UnrealNetwork.h"

void UTBLCharacterMovementBaseComponent::SetAllowPositionError(bool InAllowPositionError) {
}

void UTBLCharacterMovementBaseComponent::ServerAckMovement_Implementation(uint8 SyncMovementId, float ClientTimeStamp) {
}
bool UTBLCharacterMovementBaseComponent::ServerAckMovement_Validate(uint8 SyncMovementId, float ClientTimeStamp) {
    return true;
}

void UTBLCharacterMovementBaseComponent::OnRep_MovementAnimationEvent() {
}

void UTBLCharacterMovementBaseComponent::OnRep_AutorunParams() {
}

void UTBLCharacterMovementBaseComponent::OnAutorunParamsChanged() {
}

void UTBLCharacterMovementBaseComponent::NoStopAutorunExpired() {
}

void UTBLCharacterMovementBaseComponent::LockForcedAutorun(bool bLock) {
}

bool UTBLCharacterMovementBaseComponent::IsInitialAutorun() const {
    return false;
}

void UTBLCharacterMovementBaseComponent::InitialAutorunExpired() {
}

bool UTBLCharacterMovementBaseComponent::HasMovementAction(UMovementSequence* Sequence) const {
    return false;
}

TEnumAsByte<EMovementMode> UTBLCharacterMovementBaseComponent::GetMovementMode() const {
    return MOVE_None;
}

float UTBLCharacterMovementBaseComponent::GetAutorunStartTime() const {
    return 0.0f;
}

bool UTBLCharacterMovementBaseComponent::DidHitBottomOfCapsule(const FHitResult& Hit) const {
    return false;
}

void UTBLCharacterMovementBaseComponent::ClientStopForcedAutorun_Implementation(uint8 SyncMovementId) {
}

void UTBLCharacterMovementBaseComponent::ClientStartMovement_Implementation(const FMovementActionInitiationParams& InitParams, uint8 SyncMovementId) {
}

void UTBLCharacterMovementBaseComponent::ClientStartForcedAutorun_Implementation(const FAutorunParams& Params, uint8 SyncMovementId) {
}

void UTBLCharacterMovementBaseComponent::ClientSetAutorunMovementMode_Implementation(EAutorunMovementMode InMovementMode, uint8 SyncMovementId) {
}

void UTBLCharacterMovementBaseComponent::ClientCinematicRestrictControl_Implementation(uint8 SyncMovementId) {
}

void UTBLCharacterMovementBaseComponent::ClientCinematicAllowControl_Implementation(uint8 SyncMovementId) {
}

void UTBLCharacterMovementBaseComponent::BroadcastStopMovement_Implementation(UMovementSequence* Sequence, bool bExecuteClientFirst) {
}

void UTBLCharacterMovementBaseComponent::BroadcastStartMovement_Implementation(const FMovementActionInitiationParams& InitParams) {
}

void UTBLCharacterMovementBaseComponent::BroadcastSetDowned_Implementation(bool bDowned) {
}

void UTBLCharacterMovementBaseComponent::BroadcastPlaySpawnAnimation_Implementation(FName Animation) {
}

void UTBLCharacterMovementBaseComponent::AuthorityStopForcedAutorun() {
}

void UTBLCharacterMovementBaseComponent::AuthoritySetAutorunMovementMode(EAutorunMovementMode InMovementMode) {
}

void UTBLCharacterMovementBaseComponent::AuthorityForceAutorun(const FAutorunParams& Params, ATBLCharacterBase* Leader) {
}

void UTBLCharacterMovementBaseComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTBLCharacterMovementBaseComponent, bAllowPositionError);
    DOREPLIFETIME(UTBLCharacterMovementBaseComponent, MovementAnimationEvent);
    DOREPLIFETIME(UTBLCharacterMovementBaseComponent, AutorunParams);
}

UTBLCharacterMovementBaseComponent::UTBLCharacterMovementBaseComponent() {
    this->BottomOfCapsuleHeight = 50.00f;
    this->MovementSequenceStepUpX = 5.00f;
    this->MovementSequenceStepUpZ = 50.00f;
    this->MasterTransformComponent = NULL;
    this->bIsPreMovement = false;
    this->ActiveMovementAction = NULL;
    this->LastStartMovementResult = EStartMovementResult::Invalid;
    this->LastMovementSequence = NULL;
    this->LastMoveTime = 0.00f;
    this->NextSyncMovementId = 0;
    this->LastSyncMovementTime = -1.00f;
    this->CharacterControlInstanceId = 0;
    this->LastTimeDiscrepancyDetectedTime = 0.00f;
    this->TimeBetweenDiscrepancyDetected = 0.00f;
    this->bResetSmoothing = false;
    this->bLockIntoForcedAutorun = false;
    this->bPendingEndForcedAutorun = false;
    this->AutorunStartTime = -1.00f;
    this->InitialAutorunHorizontalLock = -1;
    this->bInitialAutorunExpired = false;
    this->bAutorunInitialized = false;
    this->NoStopAutorunHorizontalLock = -1;
    this->bIsInNoStopAutorun = false;
    this->OccupiedNavAreaClass = NULL;
}

