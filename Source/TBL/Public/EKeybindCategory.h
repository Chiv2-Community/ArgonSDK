#pragma once
#include "CoreMinimal.h"
#include "EKeybindCategory.generated.h"

UENUM(BlueprintType)
namespace EKeybindCategory {
    enum Type {
        Combat,
        Movement,
        General,
        Expression,
        Communication,
        Inventory,
        Interface,
        Spectator,
        Debug,
        MAX,
    };
}

