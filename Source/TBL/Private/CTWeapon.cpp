#include "CTWeapon.h"

UClass* UCTWeapon::ResolveAssetClass() {
    return NULL;
}

UCTWeapon::UCTWeapon() {
    this->StaticMesh = NULL;
    this->Material = NULL;
    this->SkeletalMesh = NULL;
    this->WeaponTag = EWeaponTag::None;
}

