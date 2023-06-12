#pragma once
#include "CoreMinimal.h"
#include "LTSGameMode.h"
#include "TDMLTSGameMode.generated.h"

class ULTSTDMGameModeSettings;

UCLASS(Blueprintable, NonTransient)
class TBL_API ATDMLTSGameMode : public ALTSGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULTSTDMGameModeSettings* LTSTDMGameModeSettings;
    
public:
    ATDMLTSGameMode();
private:
    UFUNCTION(BlueprintCallable)
    void PostWarmupGivePlayersControl();
    
    UFUNCTION(BlueprintCallable)
    void OnReachedEndTime();
    
};

