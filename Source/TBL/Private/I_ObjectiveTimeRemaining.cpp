#include "I_ObjectiveTimeRemaining.h"

UI_ObjectiveTimeRemaining::UI_ObjectiveTimeRemaining() {
    this->bValueAsPercentRemaining = false;
    this->RelevantFaction = EFactionOrAttackerDefender::All;
    this->ValueIfNotRelevant = 0.00f;
}

