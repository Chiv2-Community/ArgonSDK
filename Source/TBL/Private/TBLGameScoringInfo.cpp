#include "TBLGameScoringInfo.h"

void ATBLGameScoringInfo::PlayerKilled(AController* Killer, AController* Killed, UDamageSource* DamageSource, FDeathEvent DeathEvent, const FDeathDamageTakenEvent& DamageEvent) {
}

void ATBLGameScoringInfo::PawnRevived(APawn* RevivedPlayer, APawn* RevivorPlayer) {
}

void ATBLGameScoringInfo::PawnDowned(APawn* DownedPlayer, AActor* DamageCauser, UDamageSource* DamageSource) {
}

void ATBLGameScoringInfo::OnHorseKilled(const FDeathDamageTakenEvent& DamageEvent) {
}

ATBLGameScoringInfo::ATBLGameScoringInfo() {
    this->GameScoringDataTable = NULL;
    this->TeamScoreFormatDataTable = NULL;
    this->LongshotCurve = NULL;
}

