#pragma once
#include "CoreMinimal.h"
#include "EAudioClassType.generated.h"

UENUM(BlueprintType)
namespace EAudioClassType {
    enum Type {
        Archer,
        Footman,
        Knight,
        Vanguard,
        Peasant,
        PeasantAI,
        Duke,
        Bot,
        Monk,
        PeasantAIFemale,
        Druid,
        ArgonII,
        NobleAI,
        MAX,
    };
}

