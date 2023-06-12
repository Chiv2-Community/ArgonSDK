#pragma once
#include "CoreMinimal.h"
#include "AkPoly.generated.h"

class UAkAcousticTexture;

USTRUCT(BlueprintType)
struct FAkPoly {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAcousticTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Occlusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableSurface;
    
    AKAUDIO_API FAkPoly();
};

