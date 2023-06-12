#include "LTSGameModeSettings.h"

ULTSGameModeSettings::ULTSGameModeSettings() {
    this->NumPlayerHudMarkersThreshold = 5;
    this->RoundsFromVictoryMusicTrigger = 1;
    this->TriggerCommanderVOAfterRoundStartTime = 2.00f;
    this->TriggerCommanderVOMatchPointDuration = 0.75f;
    this->bOverrideNumberOfLTSRounds = false;
    this->NumRoundsOverride = 9;
}

