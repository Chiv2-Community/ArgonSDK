#include "TBLDemoPlayerController.h"

void ATBLDemoPlayerController::ToggleHud() {
}

void ATBLDemoPlayerController::ToggleDebugHud() {
}

void ATBLDemoPlayerController::ToggleCamera() {
}

void ATBLDemoPlayerController::ShowIngameMenu() {
}

void ATBLDemoPlayerController::OnPausePlayback() {
}

void ATBLDemoPlayerController::OnIncreasePlaybackSpeed() {
}

void ATBLDemoPlayerController::OnDecreasePlaybackSpeed() {
}

bool ATBLDemoPlayerController::IsPaused() {
    return false;
}

bool ATBLDemoPlayerController::IsFirstPerson() const {
    return false;
}

float ATBLDemoPlayerController::GetPlaybackSpeed() {
    return 0.0f;
}

ATBLDemoPlayerController::ATBLDemoPlayerController() {
    this->bIsFirstPerson = false;
}

