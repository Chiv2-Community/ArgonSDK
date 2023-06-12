#include "TBLAICombatController.h"
#include "UtilityAI_CombatDecisionMaker.h"

void ATBLAICombatController::StrafeAndKeepDistance(EAiCombatDistance Distance, EAiCombatStrafing Strafing) {
}

void ATBLAICombatController::ReleaseBlock() {
}

void ATBLAICombatController::OnCombatStateBegin(AActor* Actor, FName State, const FAttackInfo& EventAttackInfo, UCombatState* CombatState) {
}

void ATBLAICombatController::HoldBlock() {
}

void ATBLAICombatController::HandleTookDamage(const FDamageTakenEvent& Event) {
}

void ATBLAICombatController::HandleDamageCaused(const FDamageTakenEvent& DamageEvent) {
}

EAiMeleeCombatMode ATBLAICombatController::GetMeleeCombatMode() const {
    return EAiMeleeCombatMode::OutOfCombat;
}

void ATBLAICombatController::Engage(const FEngageParams& InEngageParams) {
}

void ATBLAICombatController::EnemyOnCombatStateBegin(AActor* Actor, FName State, const FAttackInfo& EventAttackInfo, UCombatState* CombatState) {
}

void ATBLAICombatController::Dodge(TArray<TEnumAsByte<EMovementDirection>> AllowedDirections) {
}

void ATBLAICombatController::Disengage(const FDisengageParams& InDisengageParams) {
}

void ATBLAICombatController::Attack(FCombatAiAttackParams InParams) {
}

ATBLAICombatController::ATBLAICombatController() {
    this->MeleeCombatMode = EAiMeleeCombatMode::OutOfCombat;
    this->Advantage = 0.00f;
    this->CombatTarget = NULL;
    this->CombatDecisionMakerComponent = CreateDefaultSubobject<UUtilityAI_CombatDecisionMaker>(TEXT("CombatDecisionMaker"));
    this->TimeLastAttack = 0.00f;
    this->CombatTargetDesiredDistance = 0.00f;
    this->DesiredDistance = EAiCombatDistance::Facehug;
    this->DesiredStrafing = EAiCombatStrafing::SafeStrafe;
    this->AttackDistanceMultiplier = 0.50f;
    this->EngageSprintStartOkayMin = 0.00f;
    this->EngageSprintStopMax = 0.00f;
    this->SprintAttackOkayMax = 0.00f;
    this->SprintAttackOkayMin = 0.00f;
    this->AttackOkayMax = 0.00f;
    this->EngagementMin = 0.00f;
    this->DisengagementMax = 0.00f;
    this->DefaultDistanceToKeep = 0.00f;
    this->FacehugRange = 0.00f;
    this->CloseAttackRange = 0.00f;
    this->MediumAttackRange = 0.00f;
    this->FarAttackRange = 0.00f;
    this->OutsideAttackRange = 0.00f;
    this->CombatMovementMaxDistance = 0.00f;
    this->StuckMaxTime = 1.50f;
    this->CorneringDistance = 200.00f;
    this->OffsetFromCornersDistance = 0.00f;
    this->bSprinting = false;
}

