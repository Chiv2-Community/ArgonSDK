#pragma once
#include "CoreMinimal.h"
#include "EAkWindowsAudioAPI.generated.h"

UENUM(BlueprintType)
enum class EAkWindowsAudioAPI : uint8 {
    Wasapi,
    XAudio2,
    DirectSound,
};

