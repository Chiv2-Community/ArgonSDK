#include "PushableComponentProperties.h"

FPushableComponentProperties::FPushableComponentProperties() {
    this->PushingFaction = EFaction::Agatha;
    this->TimeToCapture = 0.00f;
    this->TimeToNeutralize = 0.00f;
    this->ControllingRule = ECaptureVolumeControlType::TeamWithGreatestNumbers;
    this->TimeToAccelerate = 0.00f;
    this->TimeToDecelerate = 0.00f;
    this->AutoNeutralizeTeamCapturePoint = false;
    this->AutoActivatePushableAfterReachingEndPoint = false;
    this->PushableScoreAwardingInterval = 0.00f;
    this->AllowBots = false;
    this->AllowNPCs = false;
    this->EnableFollowerPushablesCollision = false;
    this->DestroyItemsUponCollision = false;
}

