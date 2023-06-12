#include "AttackType.h"

EOnHitEffect UAttackType::GetHitEffect(AActor* Target) {
    return EOnHitEffect::None;
}

UAttackType::UAttackType() {
    this->bCanComboInto = true;
    this->bCanComboOutOf = true;
    this->bCanComboIntoSelf = true;
    this->bCanRiposte = true;
    this->ComboFromRecoveryPolicy = EComboTimingPolicy::StandardTimings;
    this->ComboFromThwackPolicy = EComboTimingPolicy::ComboTimings;
    this->ComboFromReleasePolicy = EComboTimingPolicy::ComboTimings;
    this->ComboFromParryReleasePolicy = EComboTimingPolicy::GlobalParryComboTiming;
    this->ComboFromJabPolicy = EComboTimingPolicy::StandardTimings;
    this->bCanQueueAttack = true;
    this->bCanBeCancelled = true;
    this->bCancelUsesStamina = true;
    this->bCanFeint = false;
    this->bCanFeintInto = false;
    this->bCanCrouch = true;
    this->AttackTypeCategory = EAttackTypeCategory::Standard;
    this->AnimationType = EAnimationType::UpperBody;
    this->MinimumHoldingTime = 0.00f;
    this->CombatStateBehavior = ECombatStateBehavior::MeleeAttack;
    this->HeldBehavior = EHeldBehavior::None;
    this->WindupInputReleasedPolicy = EWindupInputReleasedPolicy::Nothing;
    this->ReleaseCancelPolicy = EReleaseCancelPolicy::CannotBeCancelled;
    this->AttackerBlockedPolicy = EAttackerBlockedPolicy::None;
    this->AttackerCounteredPolicy = EAttackerBlockedPolicy::Deflect;
    this->DefenderBlockedPolicy = EDefenderBlockedPolicy::None;
    this->ParrySuccessShieldBreakPolicy = EDefenderBlockedPolicy::WeakParry;
    this->PassiveShieldPolicy = EPassiveShieldPolicy::TakeHit;
    this->WorldHitPolicy = EWorldHitPolicy::WorldHit;
    this->BreakableHitPolicy = EWorldHitPolicy::Thwack;
    this->OnHitPolicy = EOnHitPolicy::Nothing;
    this->TeamHitPolicy = ETeamHitPolicy::Nothing;
    this->bCanClash = false;
    this->ClashPolicy = EClashPolicy::Clash;
    this->bDoEarlyHits = false;
    this->EarlyHitDelay = 0.00f;
    this->EarlyHitPolicy = EEarlyHitPolicy::Nothing;
    this->TeamHitDamagePolicy = ETeamHitDamagePolicy::DealDamage;
    this->OnStaminaDrainedPolicy = EOnStaminaDrainedPolicy::Nothing;
    this->TargetHitEffect = EOnHitEffect::None;
    this->TargetHitEffectHorse = EOnHitEffect::None;
    this->bUseStaminaDrain = false;
    this->bUseTurnLock = false;
    this->StartTurnLock = ECombatStateEvent::OnStartAttack;
    this->bUseLocationBasedDamage = true;
    this->bUseProjectileDamageModifiers = false;
    this->bUseDownedDamageModifier = false;
    this->DownedDamageModifier = 0.00f;
    this->bUseChargeStabDamageModifier = false;
    this->ChargeStabDamageModifier = NULL;
    this->bIsUninterruptibleInRelease = false;
    this->bHorseLeftSideAltAttack = false;
    this->bShouldLoopRelease = false;
    this->bUseParryBreakDamageModifier = true;
    this->bSlowdownOnFire = false;
    this->bUseAttackTypeModifier = true;
    this->bAddComboFromBlockedTime = true;
    this->bAddComboFromMissedAttackTime = false;
    this->bDisableArmCollision = true;
    this->bUseTracerHitDirection = false;
    this->bCancelOnAttackInput = false;
    this->DamageScaleOnHorseback = NULL;
    this->DamageScaleAgainstMountedRiders = NULL;
    this->DamageScaleAgainstMounts = NULL;
    this->ActivateAbility = EActivateAbility::StartOfCombatState;
    this->ActivateCombatState = TEXT("Release");
    this->Version = 0;
    this->FullBodyStartOfReleaseTime = 0.28f;
    this->bCanComboOutOfIfMissed = true;
    this->bCanHoldCombo = true;
    this->bCanComboInInterrupt = false;
    this->bCanCancelOtherAttack = false;
    this->bCanAlwaysQueueCombo = false;
    this->bCanBendUpperBody = false;
    this->bUseLockTurnAngle = false;
    this->LockTurnAngle = 0.00f;
}

