#include "LoadoutVolume.h"
#include "Net/UnrealNetwork.h"

void ALoadoutVolume::SetActive(bool Active) {
}

void ALoadoutVolume::OnIsActiveChanged() {
}

void ALoadoutVolume::LocalPCPossessedPawn(APawn* NewPawn) {
}

void ALoadoutVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALoadoutVolume, bIsActive);
}

ALoadoutVolume::ALoadoutVolume() {
    this->bIsActive = false;
}

