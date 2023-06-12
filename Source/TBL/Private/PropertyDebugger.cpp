#include "PropertyDebugger.h"

void UPropertyDebugger::ToggleShowDebugOther() {
}

void UPropertyDebugger::ToggleReplication() {
}

void UPropertyDebugger::ServerSetOtherCharacter_Implementation(ATBLCharacter* Other) {
}
bool UPropertyDebugger::ServerSetOtherCharacter_Validate(ATBLCharacter* Other) {
    return true;
}

void UPropertyDebugger::ServerSetOtherActor_Implementation(AActor* Other) {
}
bool UPropertyDebugger::ServerSetOtherActor_Validate(AActor* Other) {
    return true;
}

void UPropertyDebugger::ServerGetSelectedClass_Implementation(const FDebugProperty& Property) {
}
bool UPropertyDebugger::ServerGetSelectedClass_Validate(const FDebugProperty& Property) {
    return true;
}

void UPropertyDebugger::ServerGetBaseClass_Implementation(FName BaseObj) {
}
bool UPropertyDebugger::ServerGetBaseClass_Validate(FName BaseObj) {
    return true;
}

void UPropertyDebugger::ServerEnableReplication_Implementation(bool bReplicate) {
}
bool UPropertyDebugger::ServerEnableReplication_Validate(bool bReplicate) {
    return true;
}

void UPropertyDebugger::ServerDeleteDebugProperty_Implementation(bool bFromEnd) {
}
bool UPropertyDebugger::ServerDeleteDebugProperty_Validate(bool bFromEnd) {
    return true;
}

void UPropertyDebugger::ServerAddDebugProperty_Implementation(const FDebugProperty& Property) {
}
bool UPropertyDebugger::ServerAddDebugProperty_Validate(const FDebugProperty& Property) {
    return true;
}

void UPropertyDebugger::PrintToFile() {
}

void UPropertyDebugger::PreviousProperty() {
}

void UPropertyDebugger::OnPossessed(APawn* NewPawn) {
}

void UPropertyDebugger::OnMovementSync(UMovementDebugger* MovementDebugger) {
}

void UPropertyDebugger::NextProperty() {
}

void UPropertyDebugger::MenuUpPressed() {
}

void UPropertyDebugger::MenuRight() {
}

void UPropertyDebugger::MenuReleased() {
}

void UPropertyDebugger::MenuPageUp() {
}

void UPropertyDebugger::MenuPageDown() {
}

void UPropertyDebugger::MenuOpen() {
}

void UPropertyDebugger::MenuLeft() {
}

void UPropertyDebugger::MenuDownPressed() {
}

void UPropertyDebugger::MenuDelete() {
}

void UPropertyDebugger::MenuClose() {
}

void UPropertyDebugger::MenuBackSpace() {
}

void UPropertyDebugger::MenuAdd() {
}

void UPropertyDebugger::InitHUD() {
}

bool UPropertyDebugger::HandleFilterText(const FString& Char) {
    return false;
}

UStruct* UPropertyDebugger::GetOverrideSelectedClass(const FDebugProperty& Property) {
    return NULL;
}

UStruct* UPropertyDebugger::GetOverrideBaseClass(FName BaseObj) {
    return NULL;
}

void UPropertyDebugger::FindProperty(const FString& PropName) {
}

void UPropertyDebugger::DrawProperty(UCanvas* Canvas, float& XPos, float& YPos, const FString& PropName, const FString& PropVal) {
}

void UPropertyDebugger::DrawDebug(UCanvas* Canvas) {
}

void UPropertyDebugger::DisplayDebugScrollUp() {
}

void UPropertyDebugger::DisplayDebugScrollReleased() {
}

void UPropertyDebugger::DisplayDebugScrollDown() {
}

void UPropertyDebugger::DebugInputChar(const FString& Char) {
}

void UPropertyDebugger::CreateMenu() {
}

void UPropertyDebugger::CloseDebugger() {
}

void UPropertyDebugger::ClientReturnSelectedClass_Implementation(UStruct* Struct) {
}

void UPropertyDebugger::ClearFilter() {
}

void UPropertyDebugger::ApplyFilter(const FString& Text) {
}

UPropertyDebugger::UPropertyDebugger() {
    this->OtherCharacter = NULL;
    this->OtherActor = NULL;
    this->DisplayDebugScrollDir = 0;
    this->DisplayDebugScrollY = 0.00f;
    this->bShowMenu = false;
    this->MenuDirection = 0;
    this->MenuTimer = 0.00f;
    this->MenuHeldTime = 0.00f;
    this->MenuTimerRate = 0.00f;
    this->bFilterEnabled = false;
    this->LastInputTime = 0.00f;
    this->SelectedPropertyIndex = 0;
    this->InputComponent = NULL;
    this->MenuInputComponent = NULL;
    this->bReplicateProperties = false;
    this->bShowDebugOther = false;
    this->OtherCharacterTraceTime = 0.00f;
    this->DebugAllOption = TEXT("All");
    this->MyHUD = NULL;
    this->CurrentHistoryIndex = -1;
}

