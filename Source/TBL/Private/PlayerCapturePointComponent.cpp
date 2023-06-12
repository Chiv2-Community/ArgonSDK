#include "PlayerCapturePointComponent.h"
#include "Net/UnrealNetwork.h"

void UPlayerCapturePointComponent::SetPlayerCapturePointProperties(FPlayerCapturePointComponentProperties Props) {
}

void UPlayerCapturePointComponent::ResetCapturePoint() {
}

void UPlayerCapturePointComponent::RefreshActorsInCaptureZone() {
}

bool UPlayerCapturePointComponent::PlayerSatisfiesCaptureRequirments_Implementation(ATBLCharacter* Player) {
    return false;
}

void UPlayerCapturePointComponent::OnTrackedCharacterKilled(const FDeathDamageTakenEvent& DamageEvent) {
}

void UPlayerCapturePointComponent::OnTrackedCharacterDestroyed(AActor* DestroyedActor) {
}

void UPlayerCapturePointComponent::OnRep_Properties() {
}

void UPlayerCapturePointComponent::OnRep_PlayersInPlayerCapturePoint() {
}

void UPlayerCapturePointComponent::OnRep_IsBlocked() {
}

TArray<FPlayerCaptureData> UPlayerCapturePointComponent::GetPlayersCaptureData() {
    return TArray<FPlayerCaptureData>();
}

bool UPlayerCapturePointComponent::GetIsBlocked() {
    return false;
}

void UPlayerCapturePointComponent::EndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UPlayerCapturePointComponent::DeactivatePlayerCapturePoint() {
}

void UPlayerCapturePointComponent::BeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UPlayerCapturePointComponent::ActivatePlayerCapturePoint() {
}

void UPlayerCapturePointComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerCapturePointComponent, ReplicatedTeamCapturePointComponentProperties);
    DOREPLIFETIME(UPlayerCapturePointComponent, PlayersInVolume);
    DOREPLIFETIME(UPlayerCapturePointComponent, bIsBlocked);
    DOREPLIFETIME(UPlayerCapturePointComponent, PlayersCapturingData);
}

UPlayerCapturePointComponent::UPlayerCapturePointComponent() {
}

