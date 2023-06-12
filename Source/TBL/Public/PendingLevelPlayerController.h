#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PendingLevelPlayerController.generated.h"

UCLASS(Blueprintable)
class APendingLevelPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    APendingLevelPlayerController();
};

