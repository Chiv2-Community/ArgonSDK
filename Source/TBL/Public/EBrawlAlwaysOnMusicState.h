#pragma once
#include "CoreMinimal.h"
#include "EBrawlAlwaysOnMusicState.generated.h"

UENUM(BlueprintType)
enum class EBrawlAlwaysOnMusicState : uint8 {
    None,
    WaitingToStart,
    RecordScratch,
    PlayJukeBox,
    StopJukeBox,
};

