#include "ProjectilePenetration.h"

bool UProjectilePenetration::ShouldPenetrationAwardScore(AActor* HitActor) const {
    return false;
}

void UProjectilePenetration::InitPenetrationCollisionResponse() {
}

bool UProjectilePenetration::CanPenetrateActor(AActor* HitActor) const {
    return false;
}

UProjectilePenetration::UProjectilePenetration() {
    this->AllowedNumPenetrations = 1;
    this->DamagerPerPenetrationMultiplier = 0.80f;
    this->PenetratableDamageMultiplier = 1.00f;
    this->bShouldPenetratedChildrenOfAllowedClasses = true;
    this->bShouldAwardScoreOnPenetration = false;
}

