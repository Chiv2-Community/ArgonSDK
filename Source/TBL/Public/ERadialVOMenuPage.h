#pragma once
#include "CoreMinimal.h"
#include "ERadialVOMenuPage.generated.h"

UENUM(BlueprintType)
enum class ERadialVOMenuPage : uint8 {
    PersonalPage,
    TacticalPage,
    EmotePage,
    Battlecry,
    None,
};

