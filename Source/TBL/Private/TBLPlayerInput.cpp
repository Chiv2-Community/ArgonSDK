#include "TBLPlayerInput.h"

void UTBLPlayerInput::SetGamepadRYSens(const float Sensitivity) {
}

void UTBLPlayerInput::SetGamepadRXSens(const float Sensitivity) {
}

void UTBLPlayerInput::SetConsoleKey(FKey Key) {
}

void UTBLPlayerInput::SetAxisBinding(FName AxisName, FKey Key, float Scale, bool bBypassDialog) {
}

void UTBLPlayerInput::SetActionBinding(FName ActionName, FKey Key, bool bIsShiftPressed, bool bIsCtrlPressed, bool bIsAltPressed, bool bBypassDialog) {
}

void UTBLPlayerInput::ResetConsoleKey() {
}

void UTBLPlayerInput::ResetCompoundInputActions() {
}

void UTBLPlayerInput::ResetAxisBinding(FName AxisName) {
}

void UTBLPlayerInput::ResetAllBindings() {
}

void UTBLPlayerInput::ResetActionBinding(FName ActionName) {
}

void UTBLPlayerInput::OnIsKeyInUse_Yes() {
}

void UTBLPlayerInput::OnIsKeyInUse_No() {
}

bool UTBLPlayerInput::IsShiftPressed() {
    return false;
}

bool UTBLPlayerInput::IsKeybindingDefault(FName KeybindingName, bool ActionBinding, bool AxisBinding) {
    return false;
}

bool UTBLPlayerInput::IsCtrlPressed() {
    return false;
}

bool UTBLPlayerInput::IsAltPressed() {
    return false;
}

void UTBLPlayerInput::InvertGamepad() {
}

void UTBLPlayerInput::GetKeysForConsole(TArray<FKey>& ConsoleKeys) {
}

void UTBLPlayerInput::GetKeysForAxis(FName AxisName, TArray<FInputAxisKeyMapping>& Bindings) {
}

void UTBLPlayerInput::GetKeysForAction(FName ActionName, TArray<FInputActionKeyMapping>& Bindings) {
}

void UTBLPlayerInput::GetDefaultKeysForAxis(FName AxisName, TArray<FInputAxisKeyMapping>& Bindings) {
}

void UTBLPlayerInput::GetDefaultKeysForAction(FName ActionName, TArray<FInputActionKeyMapping>& Bindings) {
}

TArray<FName> UTBLPlayerInput::GetAllAxisKeyNames() {
    return TArray<FName>();
}

TArray<FInputAxisKeyMapping> UTBLPlayerInput::GetAllAxisKeyMappings() {
    return TArray<FInputAxisKeyMapping>();
}

TArray<FName> UTBLPlayerInput::GetAllActionKeyNames() {
    return TArray<FName>();
}

TArray<FInputActionKeyMapping> UTBLPlayerInput::GetAllActionKeyMappings() {
    return TArray<FInputActionKeyMapping>();
}

void UTBLPlayerInput::ClearConsoleKey() {
}

void UTBLPlayerInput::ClearAxisBinding(FName AxisName, bool ClearMouseKeyboardBinding, bool ClearGamepadBinding) {
}

void UTBLPlayerInput::ClearActionBinding(FName ActionName, bool ClearMouseKeyboardBinding, bool ClearGamepadBinding) {
}

void UTBLPlayerInput::AddCompoundInputAction(FTBLCompoundInputAction NewAction) {
}

UTBLPlayerInput::UTBLPlayerInput() {
    this->InputActionMode = EInputActionMode::None;
    this->DefaultActionMappings.AddDefaulted(165);
}

