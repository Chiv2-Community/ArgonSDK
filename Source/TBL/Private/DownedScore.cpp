#include "DownedScore.h"

FDownedScore::FDownedScore() {
    this->StartScore = 0.00f;
    this->ScorePerDamage = 0.00f;
    this->ScorePerDownedPunchDamage = 0.00f;
    this->ScorePerKill = 0.00f;
    this->DrainPauseTime = 0.00f;
    this->DrainInterval = 0.00f;
    this->DrainCurve = NULL;
}

