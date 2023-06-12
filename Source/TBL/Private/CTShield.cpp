#include "CTShield.h"

UClass* UCTShield::ResolveAssetClass() {
    return NULL;
}

UCTShield::UCTShield() {
    this->StaticMesh = NULL;
    this->DamagedStaticMesh = NULL;
    this->DestroyedStaticMesh = NULL;
    this->Material = NULL;
    this->WeaponTag = EWeaponTag::None;
}

