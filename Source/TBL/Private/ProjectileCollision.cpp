#include "ProjectileCollision.h"

void UProjectileCollision::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UProjectileCollision::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo) {
}

bool UProjectileCollision::IgnoreCharactersBehind(FHitResult Hit) const {
    return false;
}

void UProjectileCollision::HandleDelayedHits() {
}

UProjectileCollision::UProjectileCollision() {
    this->bCosmeticCollision = false;
    this->ProjectileMovement = NULL;
}

