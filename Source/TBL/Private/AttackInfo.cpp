#include "AttackInfo.h"

FAttackInfo::FAttackInfo() {
    this->AttackType = NULL;
    this->InventoryItem = NULL;
    this->InventoryItemClass = NULL;
    this->AttackTransition = EAttackTransition::Normal;
    this->ComboTimingPolicy = EComboTimingPolicy::StandardTimings;
    this->bUseWeaponTracers = false;
    this->bUsesMouseScrollWheel = false;
    this->bAltAttack = false;
    this->bIsCounter = false;
    this->bIsFeint = false;
    this->bIsFeintCombo = false;
    this->bIsHeavy = false;
    this->bWasBlocked = false;
    this->bWasBlockedWithParryForgivenessWindow = false;
    this->bDidParryBreak = false;
    this->bCausedDamage = false;
    this->bComboFromBlocked = false;
    this->bComboFromDoingParryBreak = false;
    this->bComboFromMissedAttack = false;
    this->bOffHandWeapon = false;
    this->Invocation = NULL;
    this->MinimumHoldingTime = 0.00f;
    this->StaminaCost = 0.00f;
    this->InvocationId = 0;
    this->bAnimNotifyActivationOverride = false;
    this->AbilitiesComponent = NULL;
    this->AttackID = 0;
    this->PrevAttackID = 0;
    this->LastInQueueTime = 0.00f;
    this->bHeldQueue = false;
    this->EmoteId = 0;
    this->DegreesTurnedLeft = 0.00f;
    this->DegreesTurnedRight = 0.00f;
    this->bIsCounterSuccess = false;
    this->bHorseAttackSwitchDirection = false;
}

