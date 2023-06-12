#include "PushableComponent.h"
#include "Net/UnrealNetwork.h"

void UPushableComponent::SkipToEndOfCurrentEndPoint() {
}

void UPushableComponent::SetPushingCollisionComponent(UPrimitiveComponent* NewPushingCollisionComponent) {
}

void UPushableComponent::SetPushableMovementType(EPushableMovementType NewMovementType) {
}

void UPushableComponent::SetPushableComponentProperties(FPushableComponentProperties Props) {
}

void UPushableComponent::SetFollowerPushableComponentProperties(FFollowerPushableComponentProperties Props) {
}

void UPushableComponent::SetCurrentEndPointCinematic(bool CinematicEndPoint) {
}

void UPushableComponent::ReversePushableByDistance(float Distance) {
}

void UPushableComponent::ResetProgress(float NewProgress) {
}

void UPushableComponent::ReConfigurePushable(EPushableMovementType NewMovementType, FPushableComponentProperties IndependentAndLeaderProperties, FFollowerPushableComponentProperties FollowerProperties, APushableSplineActor* NewSplineActor, TArray<FPushableEndPoint> NewEndPoints, TArray<AActor*> NewFollowerPushables, float TimeToComplete, float TravelSpeedToNewSpline, FLatentActionInfo LatentInfo) {
}

void UPushableComponent::PushableMoveDelegateComplete() {
}

void UPushableComponent::ProceedToNextEndPoint() {
}

void UPushableComponent::OnRep_ReplicatedSplineActor() {
}

void UPushableComponent::OnRep_ReplicatedMovementState() {
}

void UPushableComponent::OnRep_PushableProgressAuthority() {
}

void UPushableComponent::OnRep_PushableMovementType() {
}

void UPushableComponent::OnRep_PushableEndPoints() {
}

void UPushableComponent::OnRep_PushableComponentProperties() {
}

void UPushableComponent::OnRep_PushableActive() {
}

void UPushableComponent::OnRep_FollowerPushables() {
}

void UPushableComponent::OnRep_FollowerPushableComponentProperties() {
}

void UPushableComponent::OnRep_CurrentEndPoint() {
}

void UPushableComponent::OnPlayersInCaptureVolumeChanged(const TArray<ATBLCharacter*>& Players) {
}

void UPushableComponent::OnOwningTeamHasChanged(ATBLTeam* OwningTeam) {
}

void UPushableComponent::OnHealthChanged(float Amount, AActor* Initiator) {
}

void UPushableComponent::OnControllingTeamHasChanged(ATBLTeam* ControllingTeam) {
}

void UPushableComponent::OnCaptureStateChanged(TEnumAsByte<ETeamCapturePointComponentState::Type> CaptureState) {
}

bool UPushableComponent::IsPushableActive() {
    return false;
}

bool UPushableComponent::IsLeader() const {
    return false;
}

bool UPushableComponent::IsIndependent() const {
    return false;
}

bool UPushableComponent::IsFollower() const {
    return false;
}

APushableSplineActor* UPushableComponent::GetSplineActor() {
    return NULL;
}


UPrimitiveComponent* UPushableComponent::GetPushingCollisionComponent() {
    return NULL;
}

void UPushableComponent::GetPushableProgressSummary(float& Progress, FPushableEndPoint& OutCurrentEndPoint, float& ProgressPercent) {
}

float UPushableComponent::GetProgressToNextPoint() const {
    return 0.0f;
}

void UPushableComponent::FollowerPushableMovementTypeUpdated() {
}

void UPushableComponent::CheckForBlockingItemCollision() {
}

void UPushableComponent::AddPushableAuthorityProgress(float Progress) {
}

void UPushableComponent::ActivatePushable(bool Active) {
}

void UPushableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPushableComponent, ReplicatedSplineActor);
    DOREPLIFETIME(UPushableComponent, ReplicatedPushableMovementType);
    DOREPLIFETIME(UPushableComponent, ReplicatedFollowerPushables);
    DOREPLIFETIME(UPushableComponent, ReplicatedTimeToCompleteSeconds);
    DOREPLIFETIME(UPushableComponent, PushableActive);
    DOREPLIFETIME(UPushableComponent, PushableProgressAuthority);
    DOREPLIFETIME(UPushableComponent, CurrentEndPoint);
    DOREPLIFETIME(UPushableComponent, ReplicatedMovementState);
    DOREPLIFETIME(UPushableComponent, ReplicatedPushableComponentProperties);
    DOREPLIFETIME(UPushableComponent, ReplicatedFollowerPushableComponentProperties);
    DOREPLIFETIME(UPushableComponent, ReplicatedPushableEndPoints);
    DOREPLIFETIME(UPushableComponent, PushableIsReversing);
    DOREPLIFETIME(UPushableComponent, PushableReverseEndProgress);
}

UPushableComponent::UPushableComponent() {
    this->TeamCapturePointComponent = NULL;
    this->ObjectiveStatusDisplay = NULL;
    this->StatsComponent = NULL;
    this->SplineComponent = NULL;
    this->SplineActor = NULL;
    this->PushableMovementType = EPushableMovementType::INDEPENDENT;
    this->StartingDistance = 0.00f;
    this->TimeToCompleteSeconds = 20.00f;
    this->MaxSpeed = 0.00f;
    this->PlayMovingSounds.AddDefaulted(1);
    this->StopMovingSounds.AddDefaulted(1);
    this->bDisablePawnCollisionOnSkeletalMeshWhenActive = true;
    this->bTestExperimentalTeleport = true;
    this->bTeleportWithPhysics = false;
    this->bAllowDisableOfPhysicsForOneTick = true;
    this->PushableProgress = 0.00f;
    this->bUpdateMarkerWithProgress = true;
    this->bShowHudProgressForCurrentSplineSegment = false;
    this->bUpdateMarkerWithHealth = false;
    this->CurrentSpeedScale = 0.00f;
    this->PushableEndPoints.AddDefaulted(1);
    this->bCanBeBasedWhilePushable = false;
    this->LeaderStartingDistance = 0.00f;
    this->HitchTime = 0.10f;
    this->PushingCollisionComponent = NULL;
    this->OwnerSiegeMesh = NULL;
    this->OwnerAKComponent = NULL;
    this->OwnersPushingComponent = NULL;
    this->IsPlayingTravelSound = false;
}

