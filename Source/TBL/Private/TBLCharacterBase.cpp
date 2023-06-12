#include "TBLCharacterBase.h"

void ATBLCharacterBase::TrapEvent(ETrapEventResult Result, UObject* TrapObject) {
}

void ATBLCharacterBase::ShowThirdPersonMesh() {
}

void ATBLCharacterBase::SetFallDamageScale(float InFallDamageScale) {
}

void ATBLCharacterBase::SetCinematicSpawnInEnabled(const UObject* WorldContextObject, bool bEnabled) {
}

void ATBLCharacterBase::ServerTrapEvent_Implementation(ETrapEventResult Result, UObject* TrapObject, float ClientTimeStamp) {
}
bool ATBLCharacterBase::ServerTrapEvent_Validate(ETrapEventResult Result, UObject* TrapObject, float ClientTimeStamp) {
    return true;
}

void ATBLCharacterBase::PreRecalcRequiredBones_Mesh1P() {
}

void ATBLCharacterBase::PostRecalcRequiredBones_Mesh1P() {
}

bool ATBLCharacterBase::IsTargetable() const {
    return false;
}

bool ATBLCharacterBase::IsRagdollCustomTick() const {
    return false;
}

bool ATBLCharacterBase::IsFirstPerson() const {
    return false;
}

bool ATBLCharacterBase::IsCustomizationCharacter() {
    return false;
}

bool ATBLCharacterBase::IsAlive() const {
    return false;
}

float ATBLCharacterBase::GetTimeSinceCharacterWasCarried() const {
    return 0.0f;
}

EMeshVisibilityFlag ATBLCharacterBase::GetMeshVisibilityFlag() const {
    return EMeshVisibilityFlag::None;
}

float ATBLCharacterBase::GetFallDamageScale() {
    return 0.0f;
}

float ATBLCharacterBase::GetDefaultFallDamageScale() {
    return 0.0f;
}

float ATBLCharacterBase::GetCreationTime() {
    return 0.0f;
}

void ATBLCharacterBase::EnableMeshCollisionForFakeClient() {
}

void ATBLCharacterBase::DisableMeshCollisionForFakeClient() {
}

ATBLCharacterBase::ATBLCharacterBase() {
    this->MovementBase = NULL;
    this->ViewDistance = 0.00f;
    this->bWasRecentlyRendered = false;
    this->LastAnimUpdateRate = 0;
    this->bRootMotionActive = false;
    this->bMontageActive = false;
    this->bWeaponTracersActive = false;
    this->bWaitingForAnimNotify = false;
    this->bIgnoreFaceRotation = false;
    this->bIsIdleAnimation = false;
    this->bIsCarryableNPC = false;
    this->LastCarryTime = 340282346638528859811704183484516925440.00f;
    this->MeshVisibilityFlag = EMeshVisibilityFlag::None;
    this->HiddenAnimUpdateMaxDistance = 5000.00f;
    this->bKillUponLanding = false;
    this->FallDamageStartingSpeed = 1000.00f;
    this->FallDamageSource = NULL;
    this->SkipClientOptimizations = false;
    this->bPlacedInWorld = false;
    this->FallDamageScale = 0.25f;
    this->DefaultFallDamageScale = 0.25f;
}

