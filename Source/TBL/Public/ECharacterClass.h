#pragma once
#include "CoreMinimal.h"
#include "ECharacterClass.generated.h"

UENUM(BlueprintType)
enum class ECharacterClass : uint8 {
    None,
    Archer,
    Longbowman,
    Crossbowman,
    Skirmisher,
    ARCHER_CUSTOM_SUBCLASS,
    Vanguard,
    Devastator,
    Raider,
    Ambusher,
    Highlander,
    Footman,
    Poleman,
    ManAtArms,
    FieldEngineer,
    FOOTMAN_CUSTOM_SUBCLASS,
    Knight,
    Officer,
    Guardian,
    Crusader,
    KNIGHT_CUSTOM_SUBCLASS,
    Duke,
    Botman,
    Peasant,
    CUSTOM_ARCHETYPE,
    ARCHETYPE_CUSTOM_SUBCLASS1,
    ARCHETYPE_CUSTOM_SUBCLASS2,
    ARCHETYPE_CUSTOM_SUBCLASS3,
    ARCHETYPE_CUSTOM_SUBCLASS4,
    MAX,
};

