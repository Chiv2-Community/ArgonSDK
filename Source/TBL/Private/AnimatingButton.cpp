#include "AnimatingButton.h"

void UAnimatingButton::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UAnimatingButton::PlayNormalAnimation() {
}

UMaterialInstanceDynamic* UAnimatingButton::GetDynamicMaterial() {
    return NULL;
}

UAnimatingButton::UAnimatingButton() {
    this->TextBlockJustification = ETextJustify::Left;
    this->bDoNotReverseHoveredStateUponMouseLeave = false;
    this->Material = NULL;
    this->MaterialMID = NULL;
}

