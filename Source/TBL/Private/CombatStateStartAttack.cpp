#include "CombatStateStartAttack.h"

FCombatStateStartAttack::FCombatStateStartAttack() {
    this->AttackID = 0;
    this->PrevAttackID = 0;
    this->ClientTimeStamp = 0.00f;
    this->InventoryItem = NULL;
    this->EmoteId = 0;
    this->AttackTransition = EAttackTransition::Normal;
    this->CombatStateIndex = 0;
    this->PrevCombatStateIndex = 0;
    this->AttackIndex = 0;
    this->InputActionIndex = 0;
    this->bAltComboState = false;
    this->bAltAttack = false;
    this->bEndAnimation = false;
    this->bIsFeint = false;
    this->bIsFeintCombo = false;
    this->bIsCounter = false;
    this->bIsCounterSuccess = false;
    this->bComboFromBlocked = false;
    this->bComboFromDoingParryBreak = false;
    this->bComboFromMissedAttack = false;
    this->bIsMultiAttack = false;
    this->bIsPreMovement = false;
}

