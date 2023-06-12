#include "TwAnimNotify_PostAkEvent.h"

UTwAnimNotify_PostAkEvent::UTwAnimNotify_PostAkEvent() {
    this->AKEvent = NULL;
    this->bAttachToOwner = false;
    this->bStopWhenOwnerDestroyed = false;
    this->bNotifyAI = false;
    this->AINoiseStrength = 0.50f;
    this->AINoiseRange = 0.00f;
    this->AINoiseType = EAINoiseType::NT_Ambient;
}

