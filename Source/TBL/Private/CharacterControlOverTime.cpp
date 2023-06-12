#include "CharacterControlOverTime.h"

FCharacterControlOverTime::FCharacterControlOverTime() {
    this->Event = ECharacterControlEvent::OnRelease;
    this->CharacterToControl = ECharacterToControl::Initiator;
    this->bApplyOnFatalBlow = false;
    this->Time = 0.00f;
    this->ModifierOverTime = NULL;
    this->StartTime = 0.00f;
    this->InstanceId = 0;
}

