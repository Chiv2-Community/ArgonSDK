#include "GameNetworkSettings.h"

FGameNetworkSettings::FGameNetworkSettings() {
    this->ClientAuthorativePosition = 0;
    this->MaxErrorSquared = 0.00f;
    this->bMovementTimeDiscrepancyDetection = 0;
    this->bMovementTimeDiscrepancyResolution = 0;
    this->MovementTimeDiscrepancyResolutionThreshold = 0.00f;
    this->MovementTimeDiscrepancyMaxTimeMargin = 0.00f;
    this->MovementTimeDiscrepancyMinTimeMargin = 0.00f;
    this->MovementTimeDiscrepancyResolutionRate = 0.00f;
    this->MovementTimeDiscrepancyDriftAllowance = 0.00f;
    this->bMovementTimeDiscrepancyForceCorrectionsDuringResolution = 0;
}

