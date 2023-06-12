#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "TBLGameMode.h"
#include "TBLFrontendGameMode.generated.h"

class APlayerController;
class ATBLPlayerStart;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class ATBLFrontendGameMode : public ATBLGameMode {
    GENERATED_BODY()
public:
    ATBLFrontendGameMode();
    UFUNCTION(BlueprintCallable)
    void PlayerRequestSpawn(ATBLPlayerStart* PlayerStart, APlayerController* Player, EFaction Faction, int32 PawnClass);
    
};

