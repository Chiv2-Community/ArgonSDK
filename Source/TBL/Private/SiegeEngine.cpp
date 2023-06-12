#include "SiegeEngine.h"
#include "AkComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void ASiegeEngine::UseKeyRepeat() {
}

void ASiegeEngine::UseKeyReleased() {
}

void ASiegeEngine::UseKeyPressed() {
}

void ASiegeEngine::ServerDismountPressed_Implementation() {
}
bool ASiegeEngine::ServerDismountPressed_Validate() {
    return true;
}

void ASiegeEngine::OnTurnLockLimit(float DeltaTime, float DeltaYaw) {
}

void ASiegeEngine::OnRiderCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* CombatState) {
}

void ASiegeEngine::OnRep_Driver() {
}

void ASiegeEngine::OnDriverSetRagdollPhysics() {
}

void ASiegeEngine::OnDriverKilled(const FDeathDamageTakenEvent& DamageEvent) {
}

void ASiegeEngine::OnAbilityError(AActor* Initiator, TEnumAsByte<EResultCode::Type> Code, AAbilityInvocation* Invocation, FName AttackName, TSubclassOf<AInventoryItem> ItemClass) {
}

void ASiegeEngine::MountPressed(ATBLCharacter* Character) {
}

bool ASiegeEngine::IsLoaded() const {
    return false;
}

UCombatStateComponent* ASiegeEngine::GetSiegeEngineCombatStateComponent() {
    return NULL;
}

float ASiegeEngine::GetMinChargingToFire() {
    return 0.0f;
}

AActor* ASiegeEngine::GetLoadedItem() const {
    return NULL;
}

EFaction ASiegeEngine::GetLastDriverFaction() const {
    return EFaction::Agatha;
}

ATBLCharacter* ASiegeEngine::GetDriver() {
    return NULL;
}

float ASiegeEngine::GetChargingPercent() {
    return 0.0f;
}

void ASiegeEngine::ForceDismount(EDismountType DismountType) {
}

void ASiegeEngine::FocusReleased() {
}

void ASiegeEngine::FocusPressed() {
}

void ASiegeEngine::FireReleased() {
}

void ASiegeEngine::Fire() {
}

void ASiegeEngine::DismountReleased() {
}

void ASiegeEngine::DismountPressed() {
}

bool ASiegeEngine::CanMount(APawn* Pawn) {
    return false;
}

void ASiegeEngine::BroadcastSetRotationYaw_Implementation(float NewRotationYaw) {
}

void ASiegeEngine::BroadcastMount_Implementation(ATBLCharacter* Character) {
}

void ASiegeEngine::BroadcastInterpToMountLocation_Implementation(ATBLCharacter* Character) {
}

void ASiegeEngine::BroadcastDismount_Implementation(EDismountType DismountType) {
}

void ASiegeEngine::ArrowCamReleased() {
}

void ASiegeEngine::ArrowCamPressed() {
}

void ASiegeEngine::ArrowCamGamePadReleased() {
}

void ASiegeEngine::ArrowCamGamePadPressed() {
}

void ASiegeEngine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASiegeEngine, ReplicatedDriver);
}

ASiegeEngine::ASiegeEngine() {
    this->AnimationSet = NULL;
    this->CharacterAnimationSet = NULL;
    this->CharacterAnimationSet1P = NULL;
    this->Driver = NULL;
    this->DriverController = NULL;
    this->AIController = NULL;
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent0"));
    this->YawRotationLimit = 0.00f;
    this->PitchRotationLimit = 0.00f;
    this->SiegeInventoryItemClass = NULL;
    this->AIAimHintLocation = NULL;
    this->SiegeInventoryItem = NULL;
    this->bFireHeld = false;
    this->RotationYaw = 0.00f;
    this->bUseRotationYaw = false;
    this->bCompressRotationYaw = true;
    this->SiegeEngineType = ESiegeEngineType::None;
    this->AllowEmoteAnimations = false;
    this->ReplicatedDriver = NULL;
    this->LastDriverFaction = EFaction::None;
    this->bUseMountCombatState = true;
    this->bUseDismountCombatState = false;
    this->ValidCombatStates.AddDefaulted(13);
    this->bNeedToInitializeTBLCharacter = false;
    this->GamepadUsePressedTime = 0.00f;
}

