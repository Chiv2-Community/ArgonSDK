#include "ProjectileTargetMethod.h"

void UProjectileTargetMethod::UpdateFakeClientProjectile() {
}

AInventoryItem* UProjectileTargetMethod::SpawnProjectile(FTransform SpawnTransform, bool bFakeClient, AActor* TargetProj, int32 InvocationId) {
    return NULL;
}

void UProjectileTargetMethod::OnStop(const FHitResult& Hit) {
}

void UProjectileTargetMethod::OnProjectileMovementFinished() {
}

void UProjectileTargetMethod::OnProjectileDisabled() {
}

void UProjectileTargetMethod::OnProjectileDestroyedCosmetic(AActor* DestroyedActor) {
}

void UProjectileTargetMethod::OnProjectileDestroyed(AActor* DestroyedActor) {
}

void UProjectileTargetMethod::OnProjectileBeginPlay(AInventoryItem* Item) {
}

void UProjectileTargetMethod::OnHitCosmetic(AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UProjectileTargetMethod::OnHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UProjectileTargetMethod::OnBeginOverlapCosmetic(AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult) {
}

void UProjectileTargetMethod::OnBeginOverlap(AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo) {
}

void UProjectileTargetMethod::HandlePassiveShieldHit(AInventoryItem* Shield, ATBLCharacter* HitCharacter, FHitResult Hit) {
}

bool UProjectileTargetMethod::HandleParries(FHitResult Hit, ATBLCharacter* HitCharacter) {
    return false;
}

void UProjectileTargetMethod::HandleDelayedHitsCosmetic() {
}

void UProjectileTargetMethod::HandleDelayedHits() {
}

void UProjectileTargetMethod::AddDelayedHit(const FHitResult& Hit) {
}

UProjectileTargetMethod::UProjectileTargetMethod() {
    this->HitTargetMethod = NULL;
    this->bHitDeactivatesInvocation = true;
    this->AllowedClientSpawnLocationErrorSq = 6400.00f;
    this->bWantsToFinish = false;
    this->LastFakeClientTime = 0.00f;
    this->FakeClientTotalTime = 0.00f;
    this->bSpawnFakeProjectileOnServerRep = false;
}

