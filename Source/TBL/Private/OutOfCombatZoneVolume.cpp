#include "OutOfCombatZoneVolume.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "OutOfCombatZoneAuthority.h"

void AOutOfCombatZoneVolume::ResizeCombatZoneBasedOnNextThreshold() {
}

void AOutOfCombatZoneVolume::ResetCombatZoneThreshold() {
}


void AOutOfCombatZoneVolume::OnRep_IsActive() {
}

bool AOutOfCombatZoneVolume::IsInCombatZone(const FVector& Point) const {
    return false;
}

bool AOutOfCombatZoneVolume::IsActive() {
    return false;
}

void AOutOfCombatZoneVolume::InitCombatZoneThresholds() {
}

FCombatZoneVolumeSizeParam AOutOfCombatZoneVolume::GetNextZoneThreshold() {
    return FCombatZoneVolumeSizeParam{};
}

void AOutOfCombatZoneVolume::ClientSetVisualizationFade_Implementation(ATBLPlayerController* LocalController, bool bShouldFade) {
}

bool AOutOfCombatZoneVolume::CanResizeToNextThreshold(float NewPlayerRatio, float NewTimeRatio) {
    return false;
}

void AOutOfCombatZoneVolume::ActivateDeactivate(EOutOfCombatZoneVolumeActivateDeactivateAction Action) {
}

void AOutOfCombatZoneVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOutOfCombatZoneVolume, bIsActive);
}

AOutOfCombatZoneVolume::AOutOfCombatZoneVolume() {
    this->AuthorityClass = AOutOfCombatZoneAuthority::StaticClass();
    this->Faction = EFaction::All;
    this->DefaultSceneComponent = NULL;
    this->PreviewMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PreviewMesh"));
    this->ZoneSizeThresholdArray.AddDefaulted(3);
    this->bShouldShrinkZoneAccordingToThresholds = false;
    this->bIsActive = false;
}

