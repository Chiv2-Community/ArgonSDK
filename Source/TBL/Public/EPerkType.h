#pragma once
#include "CoreMinimal.h"
#include "EPerkType.generated.h"

UENUM(BlueprintType)
enum class EPerkType : uint8 {
    None,
    Fighter,
    Helper,
    Agile,
    Elusive,
    Eager,
    Focus,
    Tackle,
    Heavy,
    Sneaky,
    Sapper,
    LeapingStrike,
    SprintCharge,
    Headhunter,
    Charger,
    Medic,
    Unbreakable,
    Murderer,
    RangedHeadhunter,
    Sniper,
    Cleaver,
    Executioner,
};

