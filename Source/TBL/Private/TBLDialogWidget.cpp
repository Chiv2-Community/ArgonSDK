#include "TBLDialogWidget.h"

void UTBLDialogWidget::ProcessButtonClick(EDialogButtons ButtonClicked) {
}

FDialogHandle UTBLDialogWidget::GetDialogHandle() const {
    return FDialogHandle{};
}


UTBLDialogWidget::UTBLDialogWidget() {
    this->DialogType = EDialogTypes::None;
    this->m_pLocalOwningPlayer = NULL;
}

