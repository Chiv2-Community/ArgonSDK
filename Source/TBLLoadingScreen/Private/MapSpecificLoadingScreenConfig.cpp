#include "MapSpecificLoadingScreenConfig.h"
#include "Templates/SubclassOf.h"

TSubclassOf<ULoadingScreenPanelWidget> UMapSpecificLoadingScreenConfig::GetDefaultLoadingScreenPanelWidgetClass_Implementation() {
    return NULL;
}

UMapSpecificLoadingScreenConfig::UMapSpecificLoadingScreenConfig() {
    this->Frontend_TitleBar_FadeOutTime = 1500.00f;
    this->TitleBar_FadeOutTime = 3500.00f;
    this->Frontend_Widget_FadeOutTime = 1500.00f;
    this->Widget_FadeOutTime = 3500.00f;
}

