#include "TBLProjectileMovementComponent.h"

void UTBLProjectileMovementComponent::StopOnBlockingHit(const FHitResult& Hit) {
}

void UTBLProjectileMovementComponent::RemoveIgnoredCollisionActor(AActor* ActorToRemove) {
}


void UTBLProjectileMovementComponent::OnKilled(const FDeathDamageTakenEvent& DamageEvent) {
}

void UTBLProjectileMovementComponent::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UTBLProjectileMovementComponent::OnBounce(const FHitResult& Hit) {
}

void UTBLProjectileMovementComponent::OnBlocked(AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

bool UTBLProjectileMovementComponent::IsFakeClientProjectile() const {
    return false;
}



void UTBLProjectileMovementComponent::DisableAndDestroy(float LifeSpan) {
}

void UTBLProjectileMovementComponent::CleanupAbilityActorsInternal(AController* Controller) {
}


UTBLProjectileMovementComponent::UTBLProjectileMovementComponent() {
    this->bFixedSubstepOnServer = true;
    this->ProjectileStartTime = 0.00f;
    this->AccumulatedTickTime = 0.00f;
    this->bWasTickedThisFrame = false;
    this->Drag = 0.00f;
    this->DrawStrengthModifier = 0.00f;
    this->DistanceTravelled = 0.00f;
    this->FacingEnemyMaxAngle = 110.00f;
    this->FacingTeammateMaxAngle = 75.00f;
    this->FacingOtherMaxAngle = 65.00f;
    this->FacingTargetTime = 0.50f;
    this->bParryImmediately = false;
    this->bParryImmediatelyTeammates = false;
    this->bDoNotCollideWithProjectiles = false;
    this->bDoNotCollideWithEnemies = false;
    this->bDoNotCollideWithTeammates = false;
    this->InitialNonCollisionTime = 0.00f;
    this->bUseProjectileControlComponent = false;
    this->bWasLastHitBlocked = false;
    this->bFakeClient = false;
    this->bFakeClientSubStep = false;
    this->bFakeClientOffset = false;
    this->bFakeClientDestroyed = false;
    this->FakeClientSubStepDistanceTravelled = 0.00f;
    this->FakeClientProjectile = NULL;
    this->FakeClientTarget = NULL;
    this->TornOffLifeSpan = 3.00f;
    this->bWaitForAbilities = false;
    this->bEnableDragging = false;
    this->bDelayedKill = false;
}

