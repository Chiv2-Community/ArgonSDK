#pragma once
#include "CoreMinimal.h"
#include "ENameType.generated.h"

UENUM(BlueprintType)
enum class ENameType : uint8 {
    PersonName,
    FirstName,
    LastName,
    ServerName,
    SpecialBotName,
};

