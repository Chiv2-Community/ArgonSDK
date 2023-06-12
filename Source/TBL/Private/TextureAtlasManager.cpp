#include "TextureAtlasManager.h"

void UTextureAtlasManager::OnAssetCacheComplete(URuntimeAssetCacheBuilder_ObjectBase* CachedAssetBuilder, bool Success) {
}

UTextureAtlasManager::UTextureAtlasManager() {
    this->RenderTargetForTextureType = NULL;
    this->RenderTargetTemp = NULL;
    this->RenderTargetForHeraldry = NULL;
    this->bHeraldryRenderTargetInitialized = false;
    this->HeraldryRenderMID = NULL;
    this->OriginalHelmetMID = NULL;
    this->RuntimeMorphTargets.AddDefaulted(8);
    this->CacheBuilder = NULL;
    this->CompositeMesh = NULL;
}

