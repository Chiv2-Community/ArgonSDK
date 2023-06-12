#pragma once
#include "CoreMinimal.h"
#include "ArenaGameMode.h"
#include "LTSGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTSGameMode : public AArenaGameMode {
    GENERATED_BODY()
public:
    ALTSGameMode();
private:
    UFUNCTION(BlueprintCallable)
    void PlayRoundStartCommanderVO();
    
};

