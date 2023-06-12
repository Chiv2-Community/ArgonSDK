#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "Engine/EngineTypes.h"
#include "HeraldryAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHeraldryAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCanvasUVTri> Triangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMeshBuffers;
    
    UHeraldryAssetUserData();
};

