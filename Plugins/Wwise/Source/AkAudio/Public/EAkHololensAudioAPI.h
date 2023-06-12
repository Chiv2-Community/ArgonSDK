#pragma once
#include "CoreMinimal.h"
#include "EAkHololensAudioAPI.generated.h"

UENUM(BlueprintType)
enum class EAkHololensAudioAPI : uint8 {
    Wasapi,
    XAudio2,
    DirectSound,
};

