#include "TBLDialogManager.h"

FDialogHandle UTBLDialogManager::ShowYesNoDialog(FText Title, FText Body, FDialogButtonDelegate YesDelegate, FDialogButtonDelegate NoDelegate, int32 DialogPriority) {
    return FDialogHandle{};
}

FDialogHandle UTBLDialogManager::ShowOkDialog(FText Title, FText Body, FDialogButtonDelegate OkDelegate, int32 DialogPriority) {
    return FDialogHandle{};
}

FDialogHandle UTBLDialogManager::ShowOkCancelDialog(FText Title, FText Body, FDialogButtonDelegate OkDelegate, FDialogButtonDelegate CancelDelegate, int32 DialogPriority) {
    return FDialogHandle{};
}

FDialogHandle UTBLDialogManager::ShowNoButtonsWorkingDialog(FText Title, FText Body, int32 DialogPriority) {
    return FDialogHandle{};
}

FDialogHandle UTBLDialogManager::ShowNoButtonsDialog(FText Title, FText Body, int32 DialogPriority) {
    return FDialogHandle{};
}

FDialogHandle UTBLDialogManager::ShowExitDialog(FText Title, FText Body, FDialogButtonDelegate ExitDelegate, int32 DialogPriority) {
    return FDialogHandle{};
}

FDialogHandle UTBLDialogManager::ShowCancelWorkingDialog(FText Title, FText Body, FDialogButtonDelegate CancelDelegate, int32 DialogPriority) {
    return FDialogHandle{};
}









bool UTBLDialogManager::IsDialogActive(FDialogHandle InDialogHandle) {
    return false;
}

FDialogHandle UTBLDialogManager::CloseDialog(const FDialogHandle& DialogHandle) {
    return FDialogHandle{};
}

FDialogHandle UTBLDialogManager::ChangeDialogText(const FDialogHandle& DialogHandle, const FText& Title, const FText& Body) {
    return FDialogHandle{};
}

UTBLDialogManager::UTBLDialogManager() {
}

