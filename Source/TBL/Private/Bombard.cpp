#include "Bombard.h"
#include "Components/BoxComponent.h"
#include "InteractableComponent.h"
#include "Net/UnrealNetwork.h"
#include "PushingComponent.h"
#include "RepairableComponent.h"
#include "StatsComponent.h"

void ABombard::StartFire() {
}

void ABombard::SetBroken_Implementation(bool bInBroken) {
}

void ABombard::SetBombardState(EBombardState State) {
}

void ABombard::ServerStartFuse_Implementation() {
}
bool ABombard::ServerStartFuse_Validate() {
    return true;
}

void ABombard::ServerPitchInput_Implementation(float Value) {
}
bool ABombard::ServerPitchInput_Validate(float Value) {
    return true;
}

void ABombard::RemoveAttachedItem(AInventoryItem* Item) {
}

void ABombard::ReadyToFire() {
}

void ABombard::OnRep_RotationSpeed() {
}

void ABombard::OnRep_RotationPitch() {
}

void ABombard::OnRep_LoadedAmmo() {
}

void ABombard::OnRep_FuseEndTime() {
}

void ABombard::OnRep_BombardState(EBombardState PreviousState) {
}

void ABombard::OnReloadCollision(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo) {
}

void ABombard::OnPushableActivated(bool IsActive) {
}

void ABombard::OnLoadVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ABombard::OnLoadVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo) {
}

void ABombard::OnLoadedAmmoPorjectileMovementFinished() {
}

void ABombard::OnKilled(const FDeathDamageTakenEvent& Event) {
}

void ABombard::OnItemPickup(AInventoryItem* Item, bool IsAddedToInventory) {
}

void ABombard::OnHealthChanged(float Amount, AActor* Initiator) {
}

void ABombard::OnFire() {
}

void ABombard::OnDamageTaken(const FDamageTakenEvent& Event) {
}

void ABombard::OnBombardFireAnimComplete() {
}

void ABombard::OnBombardFireAnimBegin(UTBLBombardAnimInstance* AnimInstance) {
}


bool ABombard::IsPushable() const {
    return false;
}

bool ABombard::IsPackaged() const {
    return false;
}

bool ABombard::IsInteractable() const {
    return false;
}

bool ABombard::IsBroken() const {
    return false;
}

bool ABombard::IsBombardAmmo(AInventoryItem* Item) const {
    return false;
}



EBombardState ABombard::GetBombardState() const {
    return EBombardState::Disabled;
}

void ABombard::EventUsePressed(APawn* InPawn, UInteractableComponent* InInteractable) {
}

void ABombard::ClientOnFire_Implementation() {
}

bool ABombard::CanLoad(AInventoryItem* Item) {
    return false;
}

void ABombard::BroadcastStartFire_Implementation(const TArray<ATBLCharacter*>& KnockbackCharacters) {
}

void ABombard::BombardLoadItem(AInventoryItem* Item, ATBLCharacter* Initiator) {
}

void ABombard::AddLogEntry(const FString& LogEntry) {
}

void ABombard::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABombard, FuseEndTime);
    DOREPLIFETIME(ABombard, BombardRecoilCharacterVelocity);
    DOREPLIFETIME(ABombard, LoadedAmmo);
    DOREPLIFETIME(ABombard, LastLoadedAmmo);
    DOREPLIFETIME(ABombard, WhitelistAmmoItemTypes);
    DOREPLIFETIME(ABombard, IsBeingRotated);
    DOREPLIFETIME(ABombard, BombardSiegeWeapon);
    DOREPLIFETIME(ABombard, RotationPitch);
    DOREPLIFETIME(ABombard, BombardState);
    DOREPLIFETIME(ABombard, InitialRotation);
}

ABombard::ABombard() {
    this->MountInteractable = CreateDefaultSubobject<UInteractableComponent>(TEXT("MountInteractable"));
    this->Abilities = NULL;
    this->PushingComponent = CreateDefaultSubobject<UPushingComponent>(TEXT("PushingComponent"));
    this->Stats = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats"));
    this->Repairable = CreateDefaultSubobject<URepairableComponent>(TEXT("Repairable"));
    this->RecoilKnockback = CreateDefaultSubobject<UBoxComponent>(TEXT("RecoilKnockback0"));
    this->PushingPriority = 3;
    this->BaseTurnRate = 0.00f;
    this->PitchMax = 45.00f;
    this->PitchMin = 0.00f;
    this->TurnLimitStrength = 0.50f;
    this->PitchLoopSoundFadeOutTime = 0.25f;
    this->LoadedAmmoSocketName = TEXT("b_BulletSocket");
    this->AutoLoadFacingAngle = 45.00f;
    this->FuseDuration = 5.00f;
    this->FuseEndTime = -1.00f;
    this->BombardRecoilCharacterVelocity = 1000.00f;
    this->bReloadHeld = false;
    this->bFocusHeld = false;
    this->bIsFiring = false;
    this->LoadedAmmo = NULL;
    this->LastLoadedAmmo = NULL;
    this->ItemLoadedSound = NULL;
    this->PlayReloadLoopSound = NULL;
    this->StopReloadLoopSound = NULL;
    this->PlayTurnLoopSound = NULL;
    this->StopTurnLoopSound = NULL;
    this->PlayPitchLoopSound = NULL;
    this->StopPitchLoopSound = NULL;
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
    this->DrawStrength = 3000.00f;
    this->IsBeingRotated = 0;
    this->BombardSiegeWeapon = NULL;
    this->RotationPitch = 30.00f;
    this->DelayUntilPushbackKnockdown = 0.25f;
    this->bDrawMuzzleExplosionExtent = false;
    this->bKillPlayersInMuzzleExplosion = true;
    this->HorizLockId = 0;
    this->VertLockId = 0;
    this->BombardState = EBombardState::Interactable;
    this->bIsBroken = false;
    this->bReplicatedIsBroken = false;
    this->TurnRateId = -1;
    this->LastPitchRate = 0.00f;
    this->PitchRate = 0.00f;
    this->bMoveForwardHeld = false;
    this->bMoveBackHeld = false;
    this->bIsPlayingPitchSound = false;
    this->MoveForwardHeldTime = 0.00f;
    this->MoveBackHeldTime = 0.00f;
}

