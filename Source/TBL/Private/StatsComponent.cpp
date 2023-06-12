#include "StatsComponent.h"
#include "Net/UnrealNetwork.h"

void UStatsComponent::UndoDisableRegeneration(int32 ID) {
}

void UStatsComponent::StartHealOverTime(float Amount, float Speed, UCurveFloat* Curve, ATBLCharacter* Healer, ATBLPlayerState* InstigatorPlayerState, bool AwardHealingScore, bool bOverheal, EHealingSource HealingSource) {
}

void UStatsComponent::SetBase(EStat Stat, float Value, bool bCanOverCharge) {
}

void UStatsComponent::SetAllowedDamagingFaction(EFaction InFaction) {
}

void UStatsComponent::ServerDebugSetBase_Implementation(EStat Stat, float Value) {
}
bool UStatsComponent::ServerDebugSetBase_Validate(EStat Stat, float Value) {
    return true;
}

void UStatsComponent::ServerDebugApplyDamage_Implementation(float Damage, UDamageSource* DamageSource) {
}
bool UStatsComponent::ServerDebugApplyDamage_Validate(float Damage, UDamageSource* DamageSource) {
    return true;
}

void UStatsComponent::ServerDebugApplyBonus_Implementation(EStat Stat, float Value) {
}
bool UStatsComponent::ServerDebugApplyBonus_Validate(EStat Stat, float Value) {
    return true;
}

void UStatsComponent::ReceiveHealthChanged(float Amount, UDamageSource* DamageSource, AActor* InitiatorActor) {
}

void UStatsComponent::ReceiveExperienceChanged(float Amount, UDamageSource* DamageSource, AActor* InitiatorActor) {
}

void UStatsComponent::OnRep_Stamina() {
}

void UStatsComponent::OnRep_MaxHealth() {
}

void UStatsComponent::OnRep_Health() {
}

bool UStatsComponent::IsValidDamagingFaction(EFaction inDamageFaction) {
    return false;
}

bool UStatsComponent::IsRegenerationDisabled(EStat Stat) {
    return false;
}

bool UStatsComponent::IsDead() const {
    return false;
}

bool UStatsComponent::HasMod(TEnumAsByte<EMod::Type> Mod) const {
    return false;
}

bool UStatsComponent::HasHealOverTimeOfSource(EHealingSource HealingSource) const {
    return false;
}

bool UStatsComponent::HasHealOverTime() const {
    return false;
}

UStatsDelegateObject* UStatsComponent::GetStatChangedDelegate(EStat Stat) {
    return NULL;
}

FStatEntry UStatsComponent::GetStat(EStat Stat) const {
    return FStatEntry{};
}

float UStatsComponent::GetHealthPercent() const {
    return 0.0f;
}

float UStatsComponent::GetHealOverTimeLeft() const {
    return 0.0f;
}

int32 UStatsComponent::GetExperienceLevel() {
    return 0;
}

EFaction UStatsComponent::GetAllowedDamagingFaction() {
    return EFaction::Agatha;
}

void UStatsComponent::DrainStamina(float Amount) {
}

int32 UStatsComponent::DisableRegeneration(EStat Stat) {
    return 0;
}

float UStatsComponent::Current(EStat Stat) const {
    return 0.0f;
}

void UStatsComponent::BroadcastKilled_Implementation(const TArray<AActor*>& Killers, FBroadcastKilledParams Params) {
}

void UStatsComponent::BroadcastHealOverTime_Implementation(float Amount, float Speed, UCurveFloat* Curve, ATBLPlayerState* InstigatorPlayerState, bool bOverheal, EHealingSource HealingSource) {
}

void UStatsComponent::BroadcastDamageTaken_Implementation(FDamageTakenEventCompressed Event, int32 InvocationId) {
}

float UStatsComponent::BonusPercent(EStat Stat) const {
    return 0.0f;
}

float UStatsComponent::Bonus(EStat Stat) const {
    return 0.0f;
}

float UStatsComponent::base(EStat Stat) const {
    return 0.0f;
}

bool UStatsComponent::ApplyPlayerCountHealthScalingCurve(UObject* Target, UCurveFloat* OverrideCurve) {
    return false;
}

void UStatsComponent::ApplyModDelta(TEnumAsByte<EMod::Type> Mod, int32 Delta) {
}

void UStatsComponent::ApplyBonusPercent(EStat Stat, float Value, bool bCanOverCharge) {
}

void UStatsComponent::ApplyBonus(EStat Stat, float Value, bool bCanOverCharge) {
}

void UStatsComponent::AddStamina(float Amount) {
}

void UStatsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStatsComponent, ReplicatedHealth);
    DOREPLIFETIME(UStatsComponent, ReplicatedMaxHealth);
    DOREPLIFETIME(UStatsComponent, ReplicatedStamina);
    DOREPLIFETIME(UStatsComponent, Mods);
    DOREPLIFETIME(UStatsComponent, ReplicatedAllowedDamagingFaction);
}

UStatsComponent::UStatsComponent() {
    this->StatChangedDelegates.AddDefaulted(6);
    this->StatsDataTable = NULL;
    this->bStatsScaleToPlayerCount = false;
    this->PlayerCountHealthScalingCurve = NULL;
    this->bReplicateStats = true;
    this->bDisableRegenTimer = true;
    this->bDisableProjectileDamage = false;
    this->bEnableSiegeDamage = false;
    this->bStopProjectileOnBlockingHit = true;
    this->OnTeamDamage = ETeamDamageOptions::IgnoreDamage;
    this->bDebugGotoDowned = false;
    this->PreviousStaminaReduction = 0.00f;
    this->OnDamageApplyCondition = EConditionType::None;
    this->LastParrySuccessTime = 0.00f;
    this->bAppliedPlayerCountHealthScaling = false;
    this->RegenDisabledId = 0;
    this->bGatherDebugHealOverTime = false;
    this->BeginPlayTime = 0.00f;
    this->bLoggedKillEvent = false;
    this->AllowedDamagingFaction = EFaction::All;
}

