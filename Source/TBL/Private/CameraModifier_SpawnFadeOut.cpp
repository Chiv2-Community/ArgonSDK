#include "CameraModifier_SpawnFadeOut.h"

void UCameraModifier_SpawnFadeOut::UpdateCharacterMesh() {
}

UCameraModifier_SpawnFadeOut::UCameraModifier_SpawnFadeOut() {
    this->StartTime = 0.00f;
    this->Duration = 0.00f;
    this->InputComponent = NULL;
    this->MoveForwardInput = 0.00f;
    this->MoveRightInput = 0.00f;
    this->MoveUpInput = 0.00f;
    this->MaxSpeed = 0.00f;
}

