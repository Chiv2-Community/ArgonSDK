#include "TeamScoreEvent.h"

FTeamScoreEvent::FTeamScoreEvent() {
    this->Instigator = NULL;
    this->Victim = NULL;
    this->PointCategory = EObjectivePointCategory::None;
    this->Team = NULL;
    this->Score = 0;
    this->ModifyType = EScoreModifyType::Delta;
}

