#include "InputReplayComponent.h"

void UInputReplayComponent::UpdateReplay(float DeltaTime) {
}

void UInputReplayComponent::SetReplayState(TEnumAsByte<EInputReplayState::Type> NewReplayState) {
}

void UInputReplayComponent::SaveAutoInputRecord() {
}

void UInputReplayComponent::InputStop() {
}

void UInputReplayComponent::InputRec(const FString& NewReplayName) {
}

void UInputReplayComponent::InputPlay(const FString& NewReplayName) {
}

void UInputReplayComponent::InputCopyToOtherChars(const FString& NewReplayName) {
}

void UInputReplayComponent::InputAppend(const FString& NewReplayName, const FString& ReplayName2) {
}

FVector UInputReplayComponent::GetRelativeLocation(AActor* Actor) {
    return FVector{};
}

float UInputReplayComponent::GetRelativeFacingAngle(AActor* Actor) {
    return 0.0f;
}

int32 UInputReplayComponent::GetNumFrames() {
    return 0;
}

UInputReplay* UInputReplayComponent::GetInputReplay() {
    return NULL;
}

int32 UInputReplayComponent::GetCurrentFrame() {
    return 0;
}

FReplayCharacterState UInputReplayComponent::GetCharacterState(ATBLCharacter* Character) {
    return FReplayCharacterState{};
}

void UInputReplayComponent::DoKeyEvent(uint8 KeyBind, TEnumAsByte<EInputEvent> KeyEvent) {
}

void UInputReplayComponent::DoFrame(float DeltaTime) {
}

void UInputReplayComponent::ClearInput() {
}

void UInputReplayComponent::AutoInputRec() {
}

void UInputReplayComponent::AdvanceFrame() {
}

UInputReplayComponent::UInputReplayComponent() {
    this->bValidRotation = false;
    this->ReplayState = EInputReplayState::Disabled;
    this->InputReplay = NULL;
    this->CurrentFrame = 0;
    this->PlaybackFrameTime = 0.00f;
    this->bNewReplayFrame = false;
    this->bDoObjective = false;
    this->bAutoInputRec = false;
}

