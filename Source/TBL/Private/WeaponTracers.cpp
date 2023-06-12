#include "WeaponTracers.h"

void UWeaponTracers::StartWeaponTracers() {
}

void UWeaponTracers::SetTracerFrame() {
}

void UWeaponTracers::SaveHitActor(AActor* HitActor) {
}

bool UWeaponTracers::IsValid(AInventoryItem* Weapon) const {
    return false;
}

void UWeaponTracers::Initialize(AInventoryItem* Weapon, const UWeaponTracersBlueprint* SourceObj) {
}

bool UWeaponTracers::IgnoreHitActorWithStats(FHitResult& Hit) {
    return false;
}

void UWeaponTracers::HandleReleaseClash(FHitResult& Hit, ATBLCharacter* HitChar) {
}

void UWeaponTracers::HandleHitWorld(FHitResult& Hit, UTracerShape* TracerShape) {
}

bool UWeaponTracers::HandleHitParry(FHitResult& Hit, ATBLCharacter* HitChar) {
    return false;
}

void UWeaponTracers::HandleHitInventoryItem(FHitResult& Hit, AInventoryItem* HitInventoryItem) {
}

void UWeaponTracers::HandleHitDeadHorse(FHitResult& Hit, AHorse* HitHorse) {
}

void UWeaponTracers::HandleHitDeadCharacter(FHitResult& Hit, ATBLCharacter* HitChar) {
}

bool UWeaponTracers::HandleHitCharacter(FHitResult& Hit, ATBLCharacter* HitChar) {
    return false;
}

void UWeaponTracers::HandleHitActorWithStats(FHitResult& Hit) {
}

void UWeaponTracers::HandleEarlyHitCharacter(FHitResult& Hit, ATBLCharacter* HitChar) {
}

void UWeaponTracers::EndWeaponTracers() {
}

void UWeaponTracers::DrawDebugParryHit(FVector Loc) {
}

void UWeaponTracers::DoWeaponTracers() {
}

void UWeaponTracers::DoTracerCollisionCheck() {
}

bool UWeaponTracers::DidReleaseClash(FHitResult& Hit, ATBLCharacter*& OutCharacter) const {
    return false;
}

bool UWeaponTracers::DidHitWorld(FHitResult& Hit, ATBLCharacter*& OutCharacter) const {
    return false;
}

bool UWeaponTracers::DidHitParryBox(FHitResult& Hit, ATBLCharacter*& OutCharacter) const {
    return false;
}

bool UWeaponTracers::DidHitInventoryItem(FHitResult& Hit, AInventoryItem*& OutInventoryItem) const {
    return false;
}

bool UWeaponTracers::DidHitDeadHorse(FHitResult& Hit, AHorse*& OutHorse) const {
    return false;
}

bool UWeaponTracers::DidHitDeadCharacter(FHitResult& Hit, ATBLCharacter*& OutCharacter) const {
    return false;
}

bool UWeaponTracers::DidHitCharacter(FHitResult& Hit, ATBLCharacter*& OutCharacter) const {
    return false;
}

bool UWeaponTracers::DidHitActorWithStats(FHitResult& Hit, ATBLCharacter*& OutCharacter) const {
    return false;
}

bool UWeaponTracers::DidHitActor(AActor* HitActor) const {
    return false;
}

bool UWeaponTracers::DidHeadShot(FHitResult& Hit) const {
    return false;
}

bool UWeaponTracers::DidEarlyHit(FHitResult& Hit, ATBLCharacter*& OutCharacter) const {
    return false;
}

void UWeaponTracers::CopyPreviousFrame() {
}

bool UWeaponTracers::CheckTargetVisibility(AActor* Target) {
    return false;
}

void UWeaponTracers::CalcTracerPoints() {
}

void UWeaponTracers::ActivateAttackTracers() {
}

UWeaponTracers::UWeaponTracers() {
    this->bOnlyParryTracers = false;
    this->bHasTracerCache = false;
    this->bTracerActive = false;
    this->TracerFrame = 0;
    this->CurrentTracers = NULL;
    this->CurrentTracerShape = NULL;
}

