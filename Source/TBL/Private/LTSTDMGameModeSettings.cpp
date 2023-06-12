#include "LTSTDMGameModeSettings.h"

ULTSTDMGameModeSettings::ULTSTDMGameModeSettings() {
    this->TicketsPerTeam = 200;
    this->TicketsNumPlayersBonus = NULL;
    this->MatchTimeSeconds = 900.00f;
    this->MatchTimeNumPlayersBonus = NULL;
    this->AutomaticRouts.AddDefaulted(2);
    this->bAutoStartAllSequences = true;
    this->bAutoStopSequencesOnTicketless = true;
}

