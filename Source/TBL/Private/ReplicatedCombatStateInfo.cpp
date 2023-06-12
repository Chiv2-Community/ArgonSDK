#include "ReplicatedCombatStateInfo.h"

FReplicatedCombatStateInfo::FReplicatedCombatStateInfo() {
    this->CombatStateIndex = 0;
    this->AttackIndex = 0;
    this->AnimationLength = 0;
    this->EmoteId = 0;
    this->AttackProperties = 0;
    this->ItemSlot = 0;
    this->bIsAltComboState = false;
    this->bIsFeint = false;
    this->bIsFeintCombo = false;
    this->bIsCounter = false;
    this->bIsHeavy = false;
    this->bComboFromBlocked = false;
    this->bComboFromDoingParryBreak = false;
    this->bComboFromMissedAttack = false;
    this->bStartAttack = false;
    this->bUseWeaponTracers = false;
    this->bOffHandWeapon = false;
    this->DirtyIndex = 0;
}

