#include "Horse.h"
#include "Components/SceneComponent.h"
#include "CombatStateComponent.h"
#include "CombatStateQueue.h"
#include "CombatStateSynchronization.h"
#include "ConditionsComponent.h"
#include "InteractableComponent.h"
#include "MovementModifierComponent.h"
#include "Net/UnrealNetwork.h"
#include "PushingComponent.h"
#include "TeamOwnershipComponent.h"

void AHorse::WantsToGallop(bool bWantsToGallop) {
}

bool AHorse::TrySlowdownForKick(FName AttackName) {
    return false;
}

void AHorse::StartInterpToMountLocation() {
}


void AHorse::ServerHorseMoveDualHybridRootMotion_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector ClientLoc, uint8 NewFlags, uint32 View, UPrimitiveComponent* ClientMovementBase, uint8 ClientMovementMode, float InRotationYaw, int16 ForwardSpeed) {
}
bool AHorse::ServerHorseMoveDualHybridRootMotion_Validate(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector ClientLoc, uint8 NewFlags, uint32 View, UPrimitiveComponent* ClientMovementBase, uint8 ClientMovementMode, float InRotationYaw, int16 ForwardSpeed) {
    return true;
}

void AHorse::ServerHorseMoveDual_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector ClientLoc, uint8 NewFlags, uint32 View, UPrimitiveComponent* ClientMovementBase, uint8 ClientMovementMode, float InRotationYaw, int16 ForwardSpeed) {
}
bool AHorse::ServerHorseMoveDual_Validate(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector ClientLoc, uint8 NewFlags, uint32 View, UPrimitiveComponent* ClientMovementBase, uint8 ClientMovementMode, float InRotationYaw, int16 ForwardSpeed) {
    return true;
}

void AHorse::ServerHorseMove_Implementation(float Timestamp, FVector_NetQuantize10 InAccel, FVector ClientLoc, uint8 CompressedMoveFlags, uint32 View, UPrimitiveComponent* ClientMovementBase, uint8 ClientMovementMode, float InRotationYaw, int16 ForwardSpeed) {
}
bool AHorse::ServerHorseMove_Validate(float Timestamp, FVector_NetQuantize10 InAccel, FVector ClientLoc, uint8 CompressedMoveFlags, uint32 View, UPrimitiveComponent* ClientMovementBase, uint8 ClientMovementMode, float InRotationYaw, int16 ForwardSpeed) {
    return true;
}


void AHorse::PostHorseFxEvent(FName EventName, float EventScale, const TArray<FName>& EventTags) {
}

void AHorse::OnRiderStartAttack() {
}

void AHorse::OnProcessPlayerInput() {
}

void AHorse::OnPlayerMeshChanged(USkeletalMeshComponent* OldMesh, USkeletalMeshComponent* NewMesh) {
}

void AHorse::OnKilled(const FDeathDamageTakenEvent& DamageEvent) {
}

void AHorse::OnHorseDamaged(const FDamageTakenEvent& Event) {
}

void AHorse::OnDismountSetAttached(bool bAttached) {
}

void AHorse::OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* CombatState) {
}

void AHorse::OnCinematicControlRestricted(ATBLCharacter* Character) {
}

void AHorse::OnCinematicControlAllowed(ATBLCharacter* Character) {
}

void AHorse::NetMulticastFastSharedReplication_Implementation(const FFastSharedProperties_Horse& Properties) {
}

void AHorse::MaintainSpeedOnImpact() {
}

void AHorse::KnockRiderOffHorse() {
}

void AHorse::Kill() {
}

void AHorse::KickNoDriver() {
}

bool AHorse::IsExhausted() const {
    return false;
}

bool AHorse::IsDead() const {
    return false;
}

void AHorse::InitiateKick(FName AttackName) {
}




void AHorse::Horse_ClientAdjustPosition_Implementation(float Timestamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, const FHorseMovementCorrection& HorseCorrection) {
}

bool AHorse::HasSpeedForAttack(FName AttackName) {
    return false;
}





FVector AHorse::GetThirdPersonCameraAttachPoint() {
    return FVector{};
}


float AHorse::GetRelativeSpeed(AActor* OtherActor) {
    return 0.0f;
}


FName AHorse::GetHorseCollisionProfile() {
    return NAME_None;
}

FVector AHorse::GetCurveValueBySpeed(UCurveVector* Curve, float RelativeSpeed) {
    return FVector{};
}

void AHorse::ForceRun(float Time) {
}

void AHorse::EventUsePressed(APawn* InPawn, UInteractableComponent* InInteractable) {
}

void AHorse::BroadcastSetFaction_Implementation(EFaction Faction) {
}

void AHorse::BroadcastRandomSeed_Implementation(int32 Seed) {
}

void AHorse::BroadcastPostHorseFxEvent_Implementation(FName EventName, float EventScale, const TArray<FName>& EventTags) {
}

void AHorse::BroadcastPlayDismountAnimation_Implementation(FName AnimationName) {
}

void AHorse::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHorse, bSpawnOnHorse);
    DOREPLIFETIME(AHorse, ReplicatedServerFrame);
}

AHorse::AHorse() {
    this->FXImpactSpeedThreshold = 30.00f;
    this->CollisionRoot = CreateDefaultSubobject<USceneComponent>(TEXT("CollisionRoot"));
    this->Interactable = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable"));
    this->ConditionsComponent = CreateDefaultSubobject<UConditionsComponent>(TEXT("ConditionsComponent"));
    this->MovementModifiers = CreateDefaultSubobject<UMovementModifierComponent>(TEXT("MovementModifiers"));
    this->TeamOwnershipComponent = CreateDefaultSubobject<UTeamOwnershipComponent>(TEXT("TeamOwnershipComponent"));
    this->bRiderUseControllerRotationYaw = true;
    this->ThirdPersonCameraOffsetZ = 96.00f;
    this->PushingPriority = 3;
    this->PushSpeed = 550.00f;
    this->ExpireTime = 30.00f;
    this->KnockdownBlendOutTime = 0.60f;
    this->CombatStateComponent = CreateDefaultSubobject<UCombatStateComponent>(TEXT("CombatStateComponent"));
    this->CombatStateSynchronization = CreateDefaultSubobject<UCombatStateSynchronization>(TEXT("CombatStateSynchronization"));
    this->CombatStateQueue = CreateDefaultSubobject<UCombatStateQueue>(TEXT("CombatStateQueue"));
    this->CombatStateSet = NULL;
    this->PushingComponent = CreateDefaultSubobject<UPushingComponent>(TEXT("PushingComponent"));
    this->RotationLimit = 135.00f;
    this->HorseMovement = NULL;
    this->WorldCollision_FrontLegs = NULL;
    this->WorldCollision_BackLegs = NULL;
    this->WorldCollision_Rider = NULL;
    this->LastClientRotationYaw = 0.00f;
    this->LastClientForwardSpeed = 0.00f;
    this->bSpawnOnHorse = false;
    this->bGallopExhausted = false;
    this->bEmergencyBrakeExhausted = false;
    this->ReplicatedServerFrame = 0;
    this->LanceChargeSpec = NULL;
    this->HorizLockId = -1;
    this->bLanceChargeEnabled = false;
    this->bIsDead = false;
    this->PreviousIsPlayingRootMotion = false;
    this->IsGalloping = false;
    this->HasAccelerateVoBeenPlayed = false;
    this->LastMountedFaction = EFaction::None;
    this->bHorseGallopVoIgnoredOnce = false;
    this->LastHorseMountTime = 0.00f;
}

