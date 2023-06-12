#include "AIControlHandler.h"

void UAIControlHandler::UpdateSprint() {
}

void UAIControlHandler::UpdateAction() {
}

bool UAIControlHandler::StopAction(EWeaponAbilitySlotKey Action) {
    return false;
}

bool UAIControlHandler::StartAction(EWeaponAbilitySlotKey Action) {
    return false;
}

bool UAIControlHandler::RevokeSprint(UObject* RequestedBy) {
    return false;
}

void UAIControlHandler::RevokeAllActionsFromObject(UObject* RequestedBy) {
}

bool UAIControlHandler::RevokeAction(EWeaponAbilitySlotKey Action, UObject* RequestedBy, EInputPriority Priority) {
    return false;
}

bool UAIControlHandler::RequestSprint(UObject* RequestedBy) {
    return false;
}

bool UAIControlHandler::RequestAction(EWeaponAbilitySlotKey Action, UObject* RequestedBy, EInputPriority Priority) {
    return false;
}

void UAIControlHandler::OnPossess(APawn* Pawn) {
}

void UAIControlHandler::Initialize() {
}

EWeaponAbilitySlotKey UAIControlHandler::GetWeaponAbilitySlotKey(const FName& Name) const {
    return EWeaponAbilitySlotKey::Slash;
}

void UAIControlHandler::ClearSprint() {
}

void UAIControlHandler::ClearActions() {
}

UAIControlHandler::UAIControlHandler() {
    this->InputRequestList.AddDefaulted(4);
    this->CurrentAction = EWeaponAbilitySlotKey::Slash;
    this->Character = NULL;
    this->Inventory = NULL;
}

