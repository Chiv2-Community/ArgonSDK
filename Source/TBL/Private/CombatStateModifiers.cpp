#include "CombatStateModifiers.h"

FCombatStateModifiers::FCombatStateModifiers() {
    this->bCanQueueAttack = false;
    this->bCanJump = false;
    this->bCanDash = false;
    this->bCanSprint = false;
    this->bCannotMove = false;
    this->bCanUseWeaponsAndSiegeActors = false;
    this->bCannotUseInteractables = false;
    this->bDisableSprintTurn = false;
    this->bCanCrouch = false;
    this->CrouchEndWindow = 0.00f;
}

