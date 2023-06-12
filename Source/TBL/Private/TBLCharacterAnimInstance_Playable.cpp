#include "TBLCharacterAnimInstance_Playable.h"

UTBLCharacterAnimInstance_Playable::UTBLCharacterAnimInstance_Playable() {
    this->WeaponEquippedType = EEquippedHand::Unequipped;
    this->CameraOffsetRotation = 0.00f;
    this->IsCameraOffset = false;
    this->MovementAcceleration = 0.00f;
    this->InputDirection = 0.00f;
    this->InputDirectionTime = 0.00f;
    this->WoundedWeight = 0.00f;
    this->WoundedWeightInterpSpeed = 10.00f;
    this->LowStaminaWeight = 0.00f;
    this->SlopeWeight = 0.00f;
    this->IsHeadlook = false;
    this->PreviousDashCooldown = false;
    this->PreviousSpeed = 0.00f;
    this->PreviousSpeed2d = 0.00f;
    this->PreviousMovementDirection = 0.00f;
    this->PreviousMovementDirectionTime = 0.00f;
    this->PreviousInputDirection = 0.00f;
    this->PreviousInputDirectionTime = 0.00f;
    this->PreviousAcceleration2d = 0.00f;
    this->PreviousSprintTime = 0.00f;
    this->PreviousBackSpeedModifier = 0.00f;
    this->PreviousIsSprinting = false;
}

