#include "SwingThroughInfo.h"

FSwingThroughInfo::FSwingThroughInfo() {
    this->SwingThroughReason = STR_IsFacingTarget;
    this->HitActor = NULL;
    this->IsFacingTargetAngle = 0.00f;
    this->IsFacingTargetMaxAngle = 0.00f;
    this->VisibilityBlockingActor = NULL;
    this->IsFacingWeaponTipAngle = 0.00f;
    this->IsFacingWeaponTipMaxAngle = 0.00f;
}

