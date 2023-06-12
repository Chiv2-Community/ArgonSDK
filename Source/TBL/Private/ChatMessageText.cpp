#include "ChatMessageText.h"

UChatMessageText::UChatMessageText() {
    this->ChatTypeStyles.AddDefaulted(15);
    this->ChatFormatStrings.AddDefaulted(15);
    this->TimestampFormatString = FText::FromString(TEXT("[{Time}] "));
    this->WrapWidth = 300.00f;
    this->bRenderTimestamps = false;
}

