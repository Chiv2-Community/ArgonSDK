#include "WeaponRackComponent.h"

void UWeaponRackComponent::RefillItemsForPawn(APawn* Pawn) {
}

UWeaponRackComponent::UWeaponRackComponent() {
    this->ItemToGrant = NULL;
    this->RefillAllAmmoItems = false;
    this->UseStackCountFromItem = false;
    this->GrantItemWithFullAmmo = true;
    this->StacksToAdd = 1;
    this->ItemsNowAvailable = NULL;
    this->ItemsAvailableLoopStart = NULL;
    this->ItemsAvailableLoopStop = NULL;
    this->ItemsNoLongerAvailable = NULL;
    this->OwningActorAudioComponent = NULL;
}

