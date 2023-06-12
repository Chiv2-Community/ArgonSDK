#pragma once
#include "CoreMinimal.h"
#include "ArenaGameMode.h"
#include "JoustingGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class AJoustingGameMode : public AArenaGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoundCountdownTime;
    
    AJoustingGameMode();
};

