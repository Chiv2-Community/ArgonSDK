#pragma once
#include "CoreMinimal.h"
#include "Engine/DebugCameraHUD.h"
#include "TBLDebugCameraHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class ATBLDebugCameraHUD : public ADebugCameraHUD {
    GENERATED_BODY()
public:
    ATBLDebugCameraHUD();
};

