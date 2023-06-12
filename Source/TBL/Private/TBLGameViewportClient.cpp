#include "TBLGameViewportClient.h"

void UTBLGameViewportClient::FadeOutLoadingPanel(bool bIsInitialLoadingScreen) {
}

UTBLGameViewportClient::UTBLGameViewportClient() {
    this->IsListeningForKeybinding = false;
    this->bDisableDemoDebugInfo = false;
    this->LoadingScreenPanelUserWidget = NULL;
}

