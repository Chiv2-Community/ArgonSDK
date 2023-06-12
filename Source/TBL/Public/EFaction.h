#pragma once
#include "CoreMinimal.h"
#include "EFaction.generated.h"

UENUM(BlueprintType)
enum class EFaction : uint8 {
    Agatha,
    Mason,
    FFA,
    None,
    All,
    Tenosia,
    MAX,
};

