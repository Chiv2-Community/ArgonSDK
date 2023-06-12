#include "ReplayCharacterState.h"

FReplayCharacterState::FReplayCharacterState() {
    this->FacingAngle = 0.00f;
    this->AttackType = 0;
    this->TimeInState = 0.00f;
    this->Score = 0.00f;
    this->CombatState = 0;
    this->AttackComboState = 0;
    this->CharacterClass = 0;
    this->bCanMoveLeft = false;
    this->bCanMoveRight = false;
    this->bCanMoveForward = false;
    this->bCanMoveBackward = false;
    this->Actor = NULL;
}

