#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "TBLAssetManager.generated.h"

UCLASS(Blueprintable)
class TBL_API UTBLAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
    UTBLAssetManager();
};

