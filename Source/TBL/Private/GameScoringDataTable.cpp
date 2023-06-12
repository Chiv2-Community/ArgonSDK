#include "GameScoringDataTable.h"

FGameScoringDataTable::FGameScoringDataTable() {
    this->TeamObjective = 0;
    this->TeamDeathMatch = 0;
    this->FreeForAll = 0;
    this->Symmetrical = 0;
    this->Arena = 0;
    this->LastTeamStanding = 0;
    this->AudioEvent = NULL;
    this->ScoreGroup = EScoreGroup::Player;
}

