#include "InfluenceMapType.h"

FInfluenceMapType::FInfluenceMapType() {
    this->ActorClassRestriction = NULL;
    this->WeaponRestriction = EInfluenceMapTypeWeaponRestriction::Any;
    this->DistanceMin = 0.00f;
    this->DistanceMax = 0.00f;
}

