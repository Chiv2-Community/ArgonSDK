#include "TBLWebWidget.h"

void UTBLWebWidget::InitializeWidget() {
}

FString UTBLWebWidget::GetButtonText(int32 ButtonIndex) {
    return TEXT("");
}

void UTBLWebWidget::ClickedButton(int32 ButtonIndex) {
}

void UTBLWebWidget::BrowseToUrl(const FString& URL) {
}

UTBLWebWidget::UTBLWebWidget() {
    this->ShowControls = false;
    this->ShowAddressBar = false;
    this->ShowErrorMessage = false;
    this->SupportsTransparency = false;
    this->SupportsThumbMouseButtonNavigation = false;
    this->ShowInitialThrobber = false;
}

