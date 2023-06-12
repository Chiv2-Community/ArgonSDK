#include "MapModifiers.h"

FMapModifiers::FMapModifiers() {
    this->GamemodeType = EGameModeType::TeamObjective;
    this->MaxPlayers = 0;
    this->MinPlayers = 0;
    this->MaxScoreLimit = 0;
    this->MinScoreLimit = 0;
    this->MaxNumBots = 0;
    this->MinNumBots = 0;
    this->MaxTime = 0;
    this->MinTime = 0;
}

