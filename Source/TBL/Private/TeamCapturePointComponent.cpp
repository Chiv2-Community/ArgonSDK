#include "TeamCapturePointComponent.h"
#include "Net/UnrealNetwork.h"

void UTeamCapturePointComponent::SetTeamCapturePointProperties(FTeamCapturePointComponentProperties Props) {
}

void UTeamCapturePointComponent::SetIsDefendingTeamAllowedToGainScore(bool Enabled) {
}

void UTeamCapturePointComponent::SetCaptureState(TEnumAsByte<ETeamCapturePointComponentState::Type> NewState) {
}

void UTeamCapturePointComponent::ResetCapturePoint() {
}

void UTeamCapturePointComponent::RefreshActorsInCaptureZone() {
}

bool UTeamCapturePointComponent::PlayerSatisfiesCaptureRequirments_Implementation(ATBLCharacter* Player) {
    return false;
}

void UTeamCapturePointComponent::OnTrackedCharacterKilled(const FDeathDamageTakenEvent& DamageEvent) {
}

void UTeamCapturePointComponent::OnTrackedCharacterDestroyed(AActor* DestroyedActor) {
}

void UTeamCapturePointComponent::OnRep_Properties() {
}

void UTeamCapturePointComponent::OnRep_Progress() {
}

void UTeamCapturePointComponent::OnRep_PlayersInTeamCapturePoint() {
}

void UTeamCapturePointComponent::OnRep_OwningTeamChanged() {
}

void UTeamCapturePointComponent::OnRep_ControllingTeamChanged() {
}

void UTeamCapturePointComponent::OnRep_CaptureState() {
}

void UTeamCapturePointComponent::OnDeactivated(UActorComponent* Component) {
}

void UTeamCapturePointComponent::OnActivated(UActorComponent* Component, bool bReset) {
}

ATBLTeam* UTeamCapturePointComponent::GetProgressGainedByTeam() {
    return NULL;
}

int32 UTeamCapturePointComponent::GetPlayerNumbersForFaction(EFaction Faction) {
    return 0;
}

ATBLTeam* UTeamCapturePointComponent::GetOwningTeam() {
    return NULL;
}

bool UTeamCapturePointComponent::GetIsImmune() {
    return false;
}

ATBLTeam* UTeamCapturePointComponent::GetControllingTeam(bool& IsTie) {
    return NULL;
}

void UTeamCapturePointComponent::EndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UTeamCapturePointComponent::DeactivateTeamCapturePoint() {
}

void UTeamCapturePointComponent::BeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UTeamCapturePointComponent::ActivateTeamCapturePoint() {
}

void UTeamCapturePointComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTeamCapturePointComponent, ReplicatedTeamCapturePointComponentProperties);
    DOREPLIFETIME(UTeamCapturePointComponent, Progress);
    DOREPLIFETIME(UTeamCapturePointComponent, PlayersInCaptureVolume);
    DOREPLIFETIME(UTeamCapturePointComponent, CurrentCaptureState);
    DOREPLIFETIME(UTeamCapturePointComponent, PreviousCaptureState);
    DOREPLIFETIME(UTeamCapturePointComponent, OwningTeam);
    DOREPLIFETIME(UTeamCapturePointComponent, ControllingTeam);
    DOREPLIFETIME(UTeamCapturePointComponent, ProgressGainedByTeam);
    DOREPLIFETIME(UTeamCapturePointComponent, bIsImmune);
}

UTeamCapturePointComponent::UTeamCapturePointComponent() {
    this->bDefenderCanGetScore = true;
    this->bAwardCaptureInterval = false;
    this->CaptureIntervalScoreInterval = 1.00f;
    this->bAwardScoreWhenCaptured = false;
}

