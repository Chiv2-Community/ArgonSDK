#include "TBLGameSingleton.h"

void UTBLGameSingleton::OnLevelAdded(ULevel* Level, UWorld* World) {
}

TArray<AActor*> UTBLGameSingleton::GetActorsWithTag(FName Tag, UWorld* World) const {
    return TArray<AActor*>();
}

UTBLGameSingleton::UTBLGameSingleton() {
    this->CharacterCustomizationSettings = NULL;
    this->bSynchronousLoad = false;
    this->bNDAShown = false;
    this->DefaultPlayerClassDataType = NULL;
    this->PersonalityEmotesDataTable = NULL;
    this->CustomPersonalityEmotesDataTable = NULL;
    this->FactionOverridePersonalityEmotesDataTable = NULL;
    this->OnlineConfigClass = NULL;
    this->CompositeMaterial = NULL;
    this->HeraldryRenderMaterial = NULL;
    this->TextureAtlasDataAsset = NULL;
    this->CustomizationLoadingManager = NULL;
}

