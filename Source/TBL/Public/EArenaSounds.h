#pragma once
#include "CoreMinimal.h"
#include "EArenaSounds.generated.h"

UENUM(BlueprintType)
enum class EArenaSounds : uint8 {
    None,
    FiveSecondCountdown,
    ThreeSecondCountdown,
    MasonVictory,
    AgathaVictory,
    TenosiaVictory,
    ThirtySecondsRemainging,
    FifteenSecondsRemainging,
    MatchNearEndingMusicStart,
    MatchNearEndingMusicStop,
    RoundStart,
    RoundFight,
    AgathaMatchPoint,
    MasonMatchPoint,
    TenosiaMatchPoint,
    MatchPoint,
};

