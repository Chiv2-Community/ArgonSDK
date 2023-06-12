#include "TwAkEmitterArrayComponent.h"

void UTwAkEmitterArrayComponent::PostEvent(UAkAudioEvent* Event) {
}

void UTwAkEmitterArrayComponent::EnableVoice() {
}

void UTwAkEmitterArrayComponent::DisableVoice() {
}

UTwAkEmitterArrayComponent::UTwAkEmitterArrayComponent() {
    this->NumberOfVoices = 1;
    this->ActiveVoiceCount = 0;
    this->UpdateRateSeconds = 0.40f;
    this->EventOnStartup = NULL;
    this->IsMovingTolerance = 20.00f;
    this->VoiceEnabled = false;
}

