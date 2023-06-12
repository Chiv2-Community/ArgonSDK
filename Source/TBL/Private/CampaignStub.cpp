#include "CampaignStub.h"

UCampaignStub::UCampaignStub() {
    this->Difficulty = EQuestDifficulty::Normal;
    this->Xp = 0;
    this->Levels.AddDefaulted(1);
}

