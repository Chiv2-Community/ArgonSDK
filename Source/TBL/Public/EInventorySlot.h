#pragma once
#include "CoreMinimal.h"
#include "EInventorySlot.generated.h"

UENUM(BlueprintType)
enum class EInventorySlot : uint8 {
    None,
    EyeColor,
    HairColor,
    Skin,
    Swatch,
    Gradient,
    Trim,
    Emblem,
    Tattoo,
    Helmet,
    Class,
    Generic,
    Hair,
    Weapon,
    AccentColor,
    Emote,
    Personality,
};

