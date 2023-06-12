#include "TracerType.h"

UTracerType::UTracerType() {
    this->bDoWorldHit = false;
    this->bDoWorldHitAngleCheck = true;
    this->FacingEnemyMaxAngle = 100.00f;
    this->FacingEnemyMaxAngleVertical = 100.00f;
    this->FacingTeammateMaxAngle = 45.00f;
    this->FacingOtherMaxAngle = 45.00f;
    this->AngleCheckLocationOffset = 0.00f;
    this->bDoWeaponTipAngleCheck = false;
    this->WeaponTipComponentName = TEXT("MainTracers");
    this->WeaponTipDelayTime = 0.10f;
    this->WeaponTipActiveTime = 0.15f;
    this->InvalidStabTime = 0.00f;
    this->InvalidOverheadTime = 0.00f;
    this->Version = 0;
}

