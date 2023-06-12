#pragma once
#include "CoreMinimal.h"
#include "AkAudioEventTrackKey.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FAkAudioEventTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    AKAUDIO_API FAkAudioEventTrackKey();
};

