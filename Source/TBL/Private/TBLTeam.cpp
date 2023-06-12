#include "TBLTeam.h"
#include "Net/UnrealNetwork.h"

void ATBLTeam::SwapWithTeam(ATBLTeam* Other) {
}

void ATBLTeam::SetTiebreakScore(float SecondaryScore) {
}

void ATBLTeam::SetTeamTickets(float NewTickets) {
}

void ATBLTeam::SetTeamScore(FTeamScoreEvent ScoreEvent) {
}

void ATBLTeam::SetTeamMaxTickets(float MaxNumTickets) {
}

void ATBLTeam::IncrementKills(int32 Delta) {
}

float ATBLTeam::GetTeamScore() const {
    return 0.0f;
}

void ATBLTeam::CommitRoundResult(bool bWonRound) {
}

void ATBLTeam::BroadcastLocalizedChat(const FText& Msg, TEnumAsByte<EChatType::Type> Type) {
}

void ATBLTeam::BroadcastChat(AActor* Sender, const FString& Msg, TEnumAsByte<EChatType::Type> Type) {
}

void ATBLTeam::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATBLTeam, Faction);
    DOREPLIFETIME(ATBLTeam, MaxNumPlayers);
    DOREPLIFETIME(ATBLTeam, bIsTeamAttacking);
    DOREPLIFETIME(ATBLTeam, bIsTeamDefending);
    DOREPLIFETIME(ATBLTeam, Tickets);
    DOREPLIFETIME(ATBLTeam, MaxTickets);
    DOREPLIFETIME(ATBLTeam, TiebreakScore);
    DOREPLIFETIME(ATBLTeam, Kills);
    DOREPLIFETIME(ATBLTeam, RoundsWon);
    DOREPLIFETIME(ATBLTeam, RoundResults);
    DOREPLIFETIME(ATBLTeam, Score);
}

ATBLTeam::ATBLTeam() {
    this->Faction = EFaction::Agatha;
    this->MaxNumPlayers = 0;
    this->bIsTeamAttacking = false;
    this->bIsTeamDefending = false;
    this->Tickets = 0.00f;
    this->MaxTickets = 0.00f;
    this->TiebreakScore = 0.00f;
    this->Kills = 0.00f;
    this->RoundsWon = 0;
    this->Score = 0.00f;
}

