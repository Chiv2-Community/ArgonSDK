#include "TBLSpectatorPawn.h"
#include "Camera/CameraComponent.h"

void ATBLSpectatorPawn::UpdateOnCinematicStateChanged(FGameplayTag PreviousStateTag, UCinematicState* PreviousState, FGameplayTag NewStateTag, UCinematicState* NewState) {
}

void ATBLSpectatorPawn::SpectatorFollow(const FString& PlayerName) {
}

void ATBLSpectatorPawn::SpectatorCam(int32 CameraNum) {
}

void ATBLSpectatorPawn::ProcessTurnAndLookInputRate(const TEnumAsByte<EAxis::Type> Axis, const float Rate) {
}

void ATBLSpectatorPawn::ProcessTurnAndLookInput(const TEnumAsByte<EAxis::Type> Axis, const float Value) {
}

void ATBLSpectatorPawn::PreviousCharacter_Implementation() {
}

void ATBLSpectatorPawn::NextCharacter_Implementation() {
}

void ATBLSpectatorPawn::LockSpectatorTranslationAxis(FName AxisName, bool Blocked) {
}

bool ATBLSpectatorPawn::IsGhost() const {
    return false;
}

void ATBLSpectatorPawn::GhostOff() {
}

void ATBLSpectatorPawn::Ghost() {
}

void ATBLSpectatorPawn::FreeCam_Implementation() {
}

void ATBLSpectatorPawn::EnableSmoothCameraMode(int32 CameraNum) {
}

void ATBLSpectatorPawn::DisplayDebugScrollUp() {
}

void ATBLSpectatorPawn::DisplayDebugScrollReleased() {
}

void ATBLSpectatorPawn::DisplayDebugScrollDown() {
}

void ATBLSpectatorPawn::ClearSpectatorCams() {
}

void ATBLSpectatorPawn::AddTurnAcceleration(float Val, int32 Axis) {
}

ATBLSpectatorPawn::ATBLSpectatorPawn() {
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->SmoothCameras.AddDefaulted(7);
    this->FollowCharacter = NULL;
    this->FollowPlayerState = NULL;
    this->ZoomDistance = 400.00f;
    this->ZoomMin = 100.00f;
    this->ZoomMax = 800.00f;
    this->ZoomDir = 0;
    this->ZoomStartTime = 0.00f;
    this->SmoothTurn.AddDefaulted(2);
    this->InitialMaxSpeed = 0.00f;
    this->TurnMaxSpeed = 0.00f;
    this->TurnAcceleration = 0.00f;
    this->TurnDeceleration = 0.00f;
    this->TurnChangeDirBoost = 0.00f;
    this->bSpectatorSpeedUp = false;
    this->bSpectatorSpeedDown = false;
    this->bSpectatorRightStickSensitivityIncrease = false;
    this->bSpectatorRightStickSensitivityDecrease = false;
    this->bIsGhost = false;
    this->bResetIdleTime = false;
    this->LastResetIdleTime = 0.00f;
    this->ResetIdleRate = 10.00f;
    this->DisplayDebugScrollDir = 0;
    this->DisplayDebugScrollY = 0.00f;
    this->bDidAutoSpectatorFollow = false;
    this->bUseCachedViewRotation = false;
    this->bSpectatorRollHeld = false;
}

