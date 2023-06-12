#pragma once
#include "CoreMinimal.h"
#include "EServerListType.generated.h"

UENUM(BlueprintType)
enum class EServerListType : uint8 {
    Internet,
    Lan,
    Friends,
    History,
    Favorites,
};

