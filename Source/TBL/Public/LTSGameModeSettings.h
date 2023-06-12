#pragma once
#include "CoreMinimal.h"
#include "ArenaGameModeSettings.h"
#include "LTSGameModeSettings.generated.h"

class UHudMarkerDisplayComponent;

UCLASS(Blueprintable)
class ULTSGameModeSettings : public UArenaGameModeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPlayerHudMarkersThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RoundsFromVictoryMusicTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHudMarkerDisplayComponent> LTSPlayerHudComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerCommanderVOAfterRoundStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerCommanderVOMatchPointDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideNumberOfLTSRounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumRoundsOverride;
    
    ULTSGameModeSettings();
};

