#include "MatchmakingQueue.h"

FMatchmakingQueue::FMatchmakingQueue() {
    this->Type = EMatchmakingQueueType::Standalone;
    this->Category = EMatchmakingQueueCategory::Normal;
    this->MaxPlayers = 0;
    this->bTeams = false;
    this->NumPlayers = 0;
    this->ETA_Mean = 0.00f;
    this->ETA_Percentile50 = 0.00f;
    this->ETA_Percentile90 = 0.00f;
    this->ETA_Percentile99 = 0.00f;
    this->bIsFeatured = false;
    this->MigrateMinPlayers = 0;
}

