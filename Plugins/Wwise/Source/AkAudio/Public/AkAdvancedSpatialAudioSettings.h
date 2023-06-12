#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedSpatialAudioSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkAdvancedSpatialAudioSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiffractionShadowAttenuationFactor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiffractionShadowDegrees;
    
    AKAUDIO_API FAkAdvancedSpatialAudioSettings();
};

