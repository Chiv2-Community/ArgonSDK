#include "FxInstance.h"

void UFxInstance::SetCharacterPostProcessMID(UMaterialInstanceDynamic* InCharacterPostProcessMID) {
}

void UFxInstance::ResetCharacterPostProcessMID() {
}

void UFxInstance::PlayWeaponCombatStateSound(const AActor* SoundActor, const FName PreviousCombatState, const FName NewCombatState, const FAttackInfo AttackInfo, const UCombatState* CombatState) {
}

void UFxInstance::PlayCharacterCombatStateSound(const AActor* SoundActor, const FName PreviousCombatState, const FName NewCombatState, const FAttackInfo AttackInfo, const UCombatState* CombatState) {
}

void UFxInstance::OnKilledInternal(const FDeathDamageTakenEvent& DamageEvent) {
}

void UFxInstance::OnCombatStateChangedInternal(AActor* InActor, FName EventName, const FAttackInfo& EventAttackInfo) {
}

void UFxInstance::OnActorPreAbilityInitiate() {
}

UMaterialInstanceDynamic* UFxInstance::GetCharacterPostProcessMID() const {
    return NULL;
}

void UFxInstance::Cleanup() {
}


bool UFxInstance::AreBloodDecalsRestricted() const {
    return false;
}

UFxInstance::UFxInstance() {
    this->StopTimerPolicy = EStopTimerPolicy::OnNextAbility;
    this->DelegateRemovalPolicy = EDelegateRemovalPolicy::OnNextAbility;
    this->bUnbindOnAttackEnd = false;
    this->Actor = NULL;
    this->Flags = 0;
    this->PlaySuicideDelay = 1.55f;
    this->PlayBandageDelay = 0.00f;
    this->BandageAppliedSound = NULL;
}

