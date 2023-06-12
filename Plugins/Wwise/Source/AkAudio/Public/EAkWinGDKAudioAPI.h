#pragma once
#include "CoreMinimal.h"
#include "EAkWinGDKAudioAPI.generated.h"

UENUM(BlueprintType)
enum class EAkWinGDKAudioAPI : uint8 {
    Wasapi,
    XAudio2,
    DirectSound,
};

