#pragma once
#include "CoreMinimal.h"
#include "EFactionOrAttackerDefender.generated.h"

UENUM(BlueprintType)
enum class EFactionOrAttackerDefender : uint8 {
    Agatha,
    Mason,
    Attacker,
    Defender,
    Friendly,
    Enemy,
    All,
    Tenosia,
};

