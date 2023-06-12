#include "ChatWidget.h"

void UChatWidget::UsedChat() {
}

void UChatWidget::SetAlwaysVisible(bool InAlwaysVisible) {
}

UChatWidget::UChatWidget() {
    this->bShowTimestamps = true;
    this->bAlwaysVisible = false;
    this->bUseAbbreviatedChatHistory = true;
    this->SecondsToConsiderMessageFresh = 14;
}

