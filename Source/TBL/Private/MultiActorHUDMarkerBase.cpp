#include "MultiActorHUDMarkerBase.h"
#include "ActorInfoDisplayComponent.h"
#include "HudMarkerDisplayComponent.h"
#include "Net/UnrealNetwork.h"
#include "ObjectiveStatusDisplayComponent.h"

void AMultiActorHUDMarkerBase::SetMarkedActors(const TArray<AActor*>& InMarkedActors) {
}

void AMultiActorHUDMarkerBase::RemoveMarkedActor(AActor* Actor) {
}

void AMultiActorHUDMarkerBase::OnRep_bIsEnabled() {
}

void AMultiActorHUDMarkerBase::OnPlayerEnteredZoneChanged(bool bLocalPlayerInsideZone) {
}

void AMultiActorHUDMarkerBase::OnPawnPossessed(APawn* Pawn) {
}

void AMultiActorHUDMarkerBase::OnInitialVisibilityExpired() {
}

void AMultiActorHUDMarkerBase::OnExtraMarkerDisplayExpired() {
}

void AMultiActorHUDMarkerBase::OnAuthorityAddedActorDestroyed(AActor* Actor) {
}


bool AMultiActorHUDMarkerBase::IsVisible() const {
    return false;
}

bool AMultiActorHUDMarkerBase::IsActive() const {
    return false;
}

TArray<UWidgetVisibilityComponent*> AMultiActorHUDMarkerBase::GetWidgetVisibilityComponents() {
    return TArray<UWidgetVisibilityComponent*>();
}

UObjectiveStatusDisplayComponent* AMultiActorHUDMarkerBase::GetObjectiveStatusComponent() const {
    return NULL;
}

TArray<UHudMarkerDisplayComponent*> AMultiActorHUDMarkerBase::GetMarkedActorHUDMarkerComponents() {
    return TArray<UHudMarkerDisplayComponent*>();
}

UHudMarkerDisplayComponent* AMultiActorHUDMarkerBase::GetHUDMarkerComponent() const {
    return NULL;
}

UActorInfoDisplayComponent* AMultiActorHUDMarkerBase::GetActorInfoComponent() const {
    return NULL;
}

void AMultiActorHUDMarkerBase::DeactivateMarker() {
}

void AMultiActorHUDMarkerBase::BindToObjectiveZone() {
}

void AMultiActorHUDMarkerBase::AuthoritySetMarkedActors(const TArray<AActor*>& InMarkedActors) {
}

void AMultiActorHUDMarkerBase::AuthorityRemoveMarkedActor(AActor* Actor) {
}

void AMultiActorHUDMarkerBase::AuthorityAddMarkedActor(AActor* Actor) {
}

void AMultiActorHUDMarkerBase::AddMarkedActor(AActor* Actor) {
}

void AMultiActorHUDMarkerBase::ActivateMarker() {
}

void AMultiActorHUDMarkerBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMultiActorHUDMarkerBase, bIsEnabled);
    DOREPLIFETIME(AMultiActorHUDMarkerBase, FastReplicatedActors);
}

AMultiActorHUDMarkerBase::AMultiActorHUDMarkerBase() {
    this->bEndOfFrameTickEnabled = false;
    this->HUDMarkerComponent = CreateDefaultSubobject<UHudMarkerDisplayComponent>(TEXT("HUDMarkerComponent"));
    this->ObjectiveStatusComponent = CreateDefaultSubobject<UObjectiveStatusDisplayComponent>(TEXT("ObjectiveStatusComponent"));
    this->ActorInfoComponent = CreateDefaultSubobject<UActorInfoDisplayComponent>(TEXT("ActorInfoComponent"));
    this->DotProductScoreMultiplier = 5.00f;
    this->bUseLegacyMode = false;
    this->bUseMarkedRadius = false;
    this->bStartEnabled = false;
    this->bIsEnabled = false;
    this->NumberOfMarkersToDisplay = 1;
    this->CurrentNumberOfMarkers = -1;
    this->ObjectiveZoneVisibilityMode = EObjectiveZoneVisibilityMode::None;
    this->ObjectiveZoneActor = NULL;
    this->NumberOfMarkersToDisplayOnZoneVisible = 4;
    this->ExtraMarkerDisplayDuration = -1.00f;
    this->bPlayerIsInOwningZone = false;
}

