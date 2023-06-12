#include "TeamCapturePointComponentProperties.h"

FTeamCapturePointComponentProperties::FTeamCapturePointComponentProperties() {
    this->PlayersNeededToCapture = 0;
    this->TimeToNeutralize = 0.00f;
    this->TimeToCapture = 0.00f;
    this->ImmunityTimeAfterCapture = 0.00f;
    this->ImmunityTimeAfterActivation = 0.00f;
    this->DefendingFaction = EFaction::Agatha;
    this->TimeBetweenTickEvents = 0.00f;
    this->CapturePointRule = ECaptureVolumeControlType::TeamWithGreatestNumbers;
    this->AutoNeutralizeTeamCapturePoint = false;
    this->AllowBots = false;
    this->AllowNPCs = false;
    this->AllowKillBonusInsideCaptureVolume = false;
}

