#include "MatchWinTask.h"

UMatchWinTask::UMatchWinTask() {
    this->Team = EFaction::All;
    this->MatchResult = EMatchVictoryType::Victory;
    this->MatchWinType = EMatchWinType::Map;
}

