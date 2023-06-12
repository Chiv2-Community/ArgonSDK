#pragma once
#include "CoreMinimal.h"
#include "EItemSoundPolicy.generated.h"

UENUM(BlueprintType)
enum class EItemSoundPolicy : uint8 {
    PlaySoundOnItem,
    PlaySoundOnOwningCharacter,
};

