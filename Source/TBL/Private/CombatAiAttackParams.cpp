#include "CombatAiAttackParams.h"

FCombatAiAttackParams::FCombatAiAttackParams() {
    this->AttackMoveMode = EAiAttackMoveMode::CurrentLocation;
    this->ComboMode = EAiComboMode::Always;
}

