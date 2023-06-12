#include "TBLTextBlock.h"

void UTBLTextBlock::SetWrapTextAt(float InWrapTextAt) {
}

void UTBLTextBlock::SetShadowOffset(FVector2D InShadowOffset) {
}

void UTBLTextBlock::SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity) {
}

void UTBLTextBlock::SetFontSize(int32 Size) {
}

void UTBLTextBlock::SetFont(FSlateFontInfo InFontInfo) {
}

void UTBLTextBlock::SetColorAndOpacity(FSlateColor InColorAndOpacity) {
}

UTBLTextBlock::UTBLTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
    this->KeyBindingDecorators.AddDefaulted(1);
    this->EmbeddedWidgetsTable = NULL;
    this->bOverrideDefaultTextStyle = false;
    this->DefaultEmbeddedKeyBindingClass = NULL;
}

