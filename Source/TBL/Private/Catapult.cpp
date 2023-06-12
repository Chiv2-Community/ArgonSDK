#include "Catapult.h"
#include "InteractableComponent.h"
#include "Net/UnrealNetwork.h"
#include "PushingComponent.h"
#include "RepairableComponent.h"
#include "StatsComponent.h"

void ACatapult::SetCatapultState(ECatapultState State) {
}

void ACatapult::SetBroken_Implementation(bool bInBroken) {
}

void ACatapult::ServerReloadReleased_Implementation() {
}
bool ACatapult::ServerReloadReleased_Validate() {
    return true;
}

void ACatapult::ServerReloadPressed_Implementation() {
}
bool ACatapult::ServerReloadPressed_Validate() {
    return true;
}

void ACatapult::ServerFireReleased_Implementation() {
}
bool ACatapult::ServerFireReleased_Validate() {
    return true;
}

void ACatapult::ServerFirePressed_Implementation() {
}
bool ACatapult::ServerFirePressed_Validate() {
    return true;
}

void ACatapult::RemoveAttachedItem(AInventoryItem* Item) {
}

void ACatapult::ReloadReleased() {
}

void ACatapult::ReloadPressed() {
}

void ACatapult::ReadyToFire() {
}

void ACatapult::OnRep_RotationSpeed() {
}

void ACatapult::OnRep_LoadedAmmo() {
}

void ACatapult::OnRep_ChargePercent() {
}

void ACatapult::OnRep_CatapultState(ECatapultState PreviousState) {
}

void ACatapult::OnRep_Broken() {
}

void ACatapult::OnReloadCollision(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo) {
}

void ACatapult::OnPushableActivated(bool IsActive) {
}

void ACatapult::OnLoadVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACatapult::OnLoadVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo) {
}

void ACatapult::OnKilled(const FDeathDamageTakenEvent& Event) {
}

void ACatapult::OnItemPickup(AInventoryItem* Item, bool IsAddedToInventory) {
}

void ACatapult::OnHealthChanged(float Amount, AActor* Initiator) {
}

void ACatapult::OnFire() {
}

void ACatapult::OnDamageTaken(const FDamageTakenEvent& Event) {
}


bool ACatapult::IsPushable() const {
    return false;
}

bool ACatapult::IsPackaged() const {
    return false;
}

bool ACatapult::IsInteractable() const {
    return false;
}

bool ACatapult::IsCatapultRock(AInventoryItem* Item) {
    return false;
}




void ACatapult::EventUsePressed(APawn* InPawn, UInteractableComponent* InInteractable) {
}

void ACatapult::ClientOnFire_Implementation() {
}

void ACatapult::CatapultLoadItem(AInventoryItem* Item, ATBLCharacter* Initiator) {
}

bool ACatapult::CanLoad(AInventoryItem* Item) {
    return false;
}

void ACatapult::BroadcastFireNoDriver_Implementation() {
}

void ACatapult::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACatapult, ChargePercent);
    DOREPLIFETIME(ACatapult, LoadedAmmo);
    DOREPLIFETIME(ACatapult, LastLoadedAmmo);
    DOREPLIFETIME(ACatapult, WhitelistAmmoItemTypes);
    DOREPLIFETIME(ACatapult, IsBeingRotated);
    DOREPLIFETIME(ACatapult, CatapultState);
    DOREPLIFETIME(ACatapult, bReplicatedIsBroken);
    DOREPLIFETIME(ACatapult, InitialRotation);
}

ACatapult::ACatapult() {
    this->MountInteractable = CreateDefaultSubobject<UInteractableComponent>(TEXT("MountInteractable"));
    this->Abilities = NULL;
    this->PushingComponent = CreateDefaultSubobject<UPushingComponent>(TEXT("PushingComponent"));
    this->Stats = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats"));
    this->Repairable = CreateDefaultSubobject<URepairableComponent>(TEXT("Repairable"));
    this->PushingPriority = 3;
    this->BaseTurnRate = 0.00f;
    this->ChargePercent = 0.00f;
    this->MinChargeTime = 3.50f;
    this->RemainingChargeTime = 3.50f;
    this->ChargeIncrements = 10;
    this->MinChargeToFire = 0.50f;
    this->bOverrideDrawStrength = false;
    this->MinDrawStrength = 5000.00f;
    this->MaxDrawStrength = 8000.00f;
    this->LoadedAmmoSocketName = TEXT("b_BulletSocket");
    this->AutoLoadFacingAngle = 45.00f;
    this->bEnforceYawRotationLimitOnCatapult = false;
    this->bReloadHeld = false;
    this->bFocusHeld = false;
    this->bIsFiring = false;
    this->bIsCharging = false;
    this->bIsUnwinding = false;
    this->PreviousChargeIncrement = 0.00f;
    this->NextChargeIncrement = 0.00f;
    this->LoadedAmmo = NULL;
    this->LastLoadedAmmo = NULL;
    this->ItemLoadedSound = NULL;
    this->PlayReloadLoopSound = NULL;
    this->StopReloadLoopSound = NULL;
    this->PlayTurnLoopSound = NULL;
    this->StopTurnLoopSound = NULL;
    this->MountSound = NULL;
    this->ReadyToFireSound = NULL;
    this->DamagedThreshold = 0.50f;
    this->HealthyMesh = NULL;
    this->DamagedMesh = NULL;
    this->BrokenMesh = NULL;
    this->BrokenParticle = NULL;
    this->BrokenAnimation = NULL;
    this->AnimationBlueprint = NULL;
    this->StationaryPhysAsset = NULL;
    this->PushablePhysAsset = NULL;
    this->DestroyedPhysAsset = NULL;
    this->IsBeingRotated = 0;
    this->HorizLockId = 0;
    this->VertLockId = 0;
    this->CatapultState = ECatapultState::Interactable;
    this->bIsBroken = false;
    this->bReplicatedIsBroken = false;
}

