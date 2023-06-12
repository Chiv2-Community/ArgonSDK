#include "TBLHorseAnimInstance.h"
#include "Templates/SubclassOf.h"


void UTBLHorseAnimInstance::StopDismountAnimation() {
}

void UTBLHorseAnimInstance::PlayMountAnimation(FName AnimationName) {
}

void UTBLHorseAnimInstance::PlayLandedAnimation() {
}

void UTBLHorseAnimInstance::PlayDismountAnimation(FName AnimationName) {
}

void UTBLHorseAnimInstance::OnStartAttack() {
}

void UTBLHorseAnimInstance::OnSignificanceChanged(ECharacterSignificanceLevel InSignificance) {
}

void UTBLHorseAnimInstance::OnRiderCombatStateEvent(AActor* Actor, FName EventName, const FAttackInfo& EventAttackInfo) {
}

void UTBLHorseAnimInstance::OnRiderCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState) {
}

void UTBLHorseAnimInstance::OnPostDamage(const FDamageTakenEvent& DamageEvent, const FPostDamageEventInfo& PostDamageInfo) {
}

void UTBLHorseAnimInstance::OnMovementActionStarted(FName MovementName, FRotator Direction) {
}

void UTBLHorseAnimInstance::OnMovementActionFinished(FName MovementName) {
}

void UTBLHorseAnimInstance::OnMounted(ATBLCharacter* Driver) {
}

void UTBLHorseAnimInstance::OnKilled(const FDeathDamageTakenEvent& DamageEvent) {
}

void UTBLHorseAnimInstance::OnKickNoDriver() {
}

void UTBLHorseAnimInstance::OnInterpToMountLocation(FName AnimationName, ATBLCharacter* Character) {
}

void UTBLHorseAnimInstance::OnDismounted(ATBLCharacter* Driver, EDismountType DismountType) {
}

void UTBLHorseAnimInstance::OnCrowdControlNoDamage(AActor* OwningActor, FName InCombatState, FCrowdControlParams CrowdControlParams) {
}

void UTBLHorseAnimInstance::OnCrowdControl(FName InCombatState, const FAnimDamageParams& DamageEvent, ECrowdControlVariant CrowdControlVariant) {
}

void UTBLHorseAnimInstance::OnCombatStateEvent(AActor* Actor, FName EventName, const FAttackInfo& EventAttackInfo) {
}

void UTBLHorseAnimInstance::OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState) {
}

void UTBLHorseAnimInstance::OnAnimationSetChanged(TSubclassOf<UAnimationSet> AnimationSet) {
}

bool UTBLHorseAnimInstance::IsPlayingMountAnimation() {
    return false;
}

FVector UTBLHorseAnimInstance::GetHorseMomentumBasedScale(AActor* InitiatorActor, FName AbilityName, TSubclassOf<AInventoryItem> InventoryItemClass) {
    return FVector{};
}




















void UTBLHorseAnimInstance::AnimNotify_DeathAnim_End() {
}

UTBLHorseAnimInstance::UTBLHorseAnimInstance() {
    this->SignificanceLevel = ECharacterSignificanceLevel::Hidden;
    this->WasRecentlyRendered = false;
    this->Horse = NULL;
    this->HorseMovement = NULL;
    this->IsDead = false;
    this->HasRider = false;
    this->RiderAnimBP = NULL;
    this->CurrentSpeed = 0.00f;
    this->CurrentGroundSpeed = 0.00f;
    this->MovementDirection = 0.00f;
    this->CameraRelativeInputAngle = 0.00f;
    this->CameraRelativeFacingAngle = 0.00f;
    this->AimDirection = 0.00f;
    this->MovementAcceleration = 0.00f;
    this->SlopeWeight = 0.00f;
    this->MovementStateMaxSpeed = 0.00f;
    this->MovementStateWeight = 0.00f;
    this->StrafeWeight = 0.00f;
    this->TurnRate = 0.00f;
    this->TurnRateAccel = 0.00f;
    this->IsLunge = false;
    this->TurnRateStopTime = 0.00f;
    this->PreviousSpeed = 0.00f;
    this->PreviousTurnRate = 0.00f;
    this->PreviousInputDirection = 0.00f;
    this->CurrentAttackMontage = NULL;
    this->DismountMontage = NULL;
    this->PreviewAnimationSet = NULL;
    this->TurnRateInterpSpeed = 7.00f;
    this->TurnRateAccelInterpSpeed = 5.00f;
    this->TurnRateStopDelay = 0.20f;
    this->AttackCombatStates.AddDefaulted(5);
    this->AnimationSetBase = NULL;
}

