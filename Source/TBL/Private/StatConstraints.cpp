#include "StatConstraints.h"

FStatConstraints::FStatConstraints() {
    this->CappedByStat = EStat::None;
    this->OverChargeCappedByStat = EStat::None;
    this->DefaultValue = 0.00f;
    this->bApplyBonusesToBase = false;
    this->bDefaultAtCap = false;
    this->bPersistent = false;
    this->bCanBeNegative = false;
    this->bReplicated = false;
}

