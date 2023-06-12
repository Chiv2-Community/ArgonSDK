#include "ProgressBarCostsOverlay.h"

void UProgressBarCostsOverlay::SetOverlayPercent(float InOverlayPercent) {
}

void UProgressBarCostsOverlay::SetOverlayFillColorAndOpacity(FLinearColor InColor) {
}

void UProgressBarCostsOverlay::SetDamageFillColorAndOpacity(FLinearColor InColor) {
}

UMaterialInstanceDynamic* UProgressBarCostsOverlay::GetFillDynamicMaterial() {
    return NULL;
}

UProgressBarCostsOverlay::UProgressBarCostsOverlay() {
    this->OverlayPercent = 0.00f;
    this->DamageLingerTime = 1.00f;
    this->DamageRemovedPerSecond = 0.50f;
}

