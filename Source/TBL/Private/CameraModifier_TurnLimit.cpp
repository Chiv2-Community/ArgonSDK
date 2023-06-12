#include "CameraModifier_TurnLimit.h"

void UCameraModifier_TurnLimit::SmoothTurnLimitEnding(float& CurrentTurnLimit, float& EndSpeed, float TargetTurnLimit, float DeltaTime) {
}

float UCameraModifier_TurnLimit::CalcTurnLimit(float InPercent) {
    return 0.0f;
}

UCameraModifier_TurnLimit::UCameraModifier_TurnLimit() {
    this->LeftTurnRatePercent = 100.00f;
    this->RightTurnRatePercent = 100.00f;
    this->UpTurnRatePercent = 100.00f;
    this->DownTurnRatePercent = 100.00f;
    this->LeftTurnLimit = -1.00f;
    this->RightTurnLimit = -1.00f;
    this->UpTurnLimit = -1.00f;
    this->DownTurnLimit = -1.00f;
    this->HorizontalDirection = 0.00f;
    this->HorizontalInitialDirection = 0.00f;
    this->HorizontalChangedDirectionCount = 0;
    this->VerticalDirection = 0.00f;
    this->VerticalInitialDirection = 0.00f;
    this->VerticalChangedDirectionCount = 0;
    this->SkippedFrameTime = 0.00f;
    this->LeftTurnRateEndSpeed = 0.00f;
    this->RightTurnRateEndSpeed = 0.00f;
    this->UpTurnRateEndSpeed = 0.00f;
    this->DownTurnRateEndSpeed = 0.00f;
}

