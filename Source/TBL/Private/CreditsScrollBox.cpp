#include "CreditsScrollBox.h"

void UCreditsScrollBox::UpdateScrolling(float DeltaTime) {
}

TArray<FCreditsSection> UCreditsScrollBox::GetCredits() {
    return TArray<FCreditsSection>();
}

UCreditsScrollBox::UCreditsScrollBox() {
    this->SecondsBeforeResumingScroll = 0.00f;
    this->ScrollPerSecond = 0.00f;
    this->ReversePerSecond = 0.00f;
    this->MaxScrollOffset = 0.00f;
}

