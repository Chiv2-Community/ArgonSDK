#include "VaultMarker.h"
#include "InteractableComponent.h"

void AVaultMarker::UsePressed(APawn* Pawn, UInteractableComponent* InteractableComponent) {
}

bool AVaultMarker::CanVault(APawn* Pawn) {
    return false;
}

AVaultMarker::AVaultMarker() {
    this->Interactable = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable"));
    this->MaxVaultAngle = 45.00f;
    this->MaxVaultDist = 100.00f;
    this->VaultType = EVaultType::ObstacleVault;
    this->bBothDirections = false;
}

