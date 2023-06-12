#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TBLGameModeSettings.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, NotPlaceable)
class UTBLGameModeSettings : public UObject {
    GENERATED_BODY()
public:
    UTBLGameModeSettings();
};

