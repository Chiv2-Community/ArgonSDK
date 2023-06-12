#pragma once
#include "CoreMinimal.h"
#include "EQuestRewardType.generated.h"

UENUM(BlueprintType)
enum class EQuestRewardType : uint8 {
    Item,
    Gold,
    Crown,
};

