#pragma once
#include "CoreMinimal.h"
#include "EEquippedHand.generated.h"

UENUM(BlueprintType)
enum class EEquippedHand : uint8 {
    Unequipped,
    PrimaryHand,
    OffHand,
    TwoHands,
    NoHands,
};

