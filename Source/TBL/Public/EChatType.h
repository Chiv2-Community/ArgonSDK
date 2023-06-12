#pragma once
#include "CoreMinimal.h"
#include "EChatType.generated.h"

UENUM(BlueprintType)
namespace EChatType {
    enum Type {
        AllSay,
        TeamSay,
        Whisper,
        Admin,
        Objective,
        System,
        ServerSay,
        Debug,
        CrosshairMsg,
        Backend,
        Party,
        Spectator,
        ClosedCaption,
        ClosedCaptionMason,
        ClosedCaptionAgatha,
        MAX,
    };
}

