#include "AbilityConfig.h"
#include "Templates/SubclassOf.h"

FVector UAbilityConfig::GetHorseMomentumBasedScale(AActor* InitiatorActor, AActor* TargetActor, FName AbilityName, TSubclassOf<AInventoryItem> InventoryItemClass) {
    return FVector{};
}

FName UAbilityConfig::GetAnimationMontageSection(FName AbilityName) {
    return NAME_None;
}

FName UAbilityConfig::GetAnimationMontage(FName AbilityName) {
    return NAME_None;
}

UAbilitySpec* UAbilityConfig::GetAbilitySpec(FName AbilityName) {
    return NULL;
}

UAbilityConfig::UAbilityConfig() {
    this->GlobalXp = 0;
    this->IsLookingDownAngle = 35.00f;
    this->FakeClientProjectileInterpolateTime = 0.50f;
    this->FakeClientProjectileInterpolateExp = 2.00f;
    this->ParryBoxAngle = 45.00f;
    this->DefaultAbilityClass = NULL;
    this->PlaytimeDropTable = NULL;
    this->PlaytimeAwardCurve = NULL;
    this->PlaytimeForItem = 60.00f;
    this->MaxRecentlyAwardedPlaytime = 480.00f;
    this->bDebugSounds = false;
    this->bMuteServerSounds = false;
    this->ChanceToLogAbilityEvents = 100;
    this->TurnLimitEndTime = 0.50f;
    this->BowAgainstArcherDamageModifier = 1.25f;
    this->SiegeAgainstCatapultDamageModifier = 0.25f;
    this->BlockingArrowDamageModifier = 0.00f;
    this->ThwackTracerLengthPercent = 1.00f;
    this->SprintAttackSpeed = 420.00f;
    this->DownedWeapon = NULL;
    this->GoreHeadItem = NULL;
    this->ParryBreakDamageModifier = 0.50f;
    this->ParryBreakNonFatal = true;
    this->bShouldCooldownRefreshStatesResetCooldowns = true;
    this->FeintComboAnimPercentThreshold = 0.50f;
    this->FeintMaxTransitionTargetPercent = 0.85f;
    this->FeintEndWindow = 0.10f;
    this->CounterFeintEndWindow = 0.15f;
    this->ParryComboTiming = 0.15f;
    this->RiposteParryWindow = 0.50f;
    this->CancelCooldown = 0.50f;
    this->ComboCancelTriggerEndWindow = 0.20f;
    this->ComboCancelInputWindow = 0.40f;
    this->ParryForgivenessWindowTime = 0.10f;
    this->ActiveRiposteWindowTime = 0.50f;
    this->ProjectileCounterWindowTime = 0.25f;
    this->MinCounterWindowTime = 0.30f;
    this->MaxCounterWindowTime = 0.40f;
    this->CounterSuccessExtendWindowTime = 0.10f;
    this->CounterWindowGapTime = 0.28f;
    this->GamepadCancelWindow = 0.30f;
    this->FallingTime = 1.00f;
    this->CanSprintInAirTime = 0.80f;
    this->RemainInSprintBelowMinSpeedTime = 1.50f;
    this->KickLowAngle = 45.00f;
    this->ComboFromBlockedTime = 0.10f;
    this->ComboFromMissedAttackTime = 0.00f;
    this->JabFromDashAttackTime = 0.00f;
    this->bOnlyClashOnHorseVsHorse = true;
    this->bUseClashCameraAngleCheck = true;
    this->MaxClashCameraAngle = 45.00f;
    this->bScaleRecoveryAnimiation = true;
    this->DamageItemDelayTimeSeconds = 0.15f;
    this->PercentChanceToPlayRootMotionDeathAnimation = 0.40f;
    this->PercentChanceToPlayRagdollInsteadOfAnimation = 0.00f;
    this->bRiposteUsesParriedComboStateOnlyForSlash = false;
    this->ParryBreakStamina = 0.00f;
    this->ParryBreakStaminaDelay = 0.00f;
    this->RevivedStamina = 0.00f;
    this->GlobalStaminaModifier = 0.25f;
    this->ThrownStaminaModifier = 0.12f;
    this->ParryReduceStaminaTime = 0.50f;
    this->ParryReduceStaminaRate = 0.50f;
    this->ParryDisableStaminaDrainTime = 0.50f;
    this->ActiveRiposteBlockedStaminaModifier = 0.00f;
    this->CounterBlockedStaminaModifier = 0.00f;
    this->SpecialAbilityHealingScoreModifier = 0.50f;
    this->HorseScoreBonusDamageThreshold = 100.00f;
    this->InputActionNames.AddDefaulted(47);
    this->CharacterMovementStates.AddDefaulted(15);
}

