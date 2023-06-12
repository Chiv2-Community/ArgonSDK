#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/DataAsset.h"
#include "DebugCanvasTriangles.generated.h"

UCLASS(Blueprintable)
class UDebugCanvasTriangles : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCanvasUVTri> DebugTriangles;
    
    UDebugCanvasTriangles();
};

