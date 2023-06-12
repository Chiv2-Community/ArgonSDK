#pragma once
#include "CoreMinimal.h"
#include "ArenaCommanderVO.h"
#include "EArenaSounds.h"
#include "EFaction.h"
#include "TBLGameModeSettings.h"
#include "ArenaGameModeSettings.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class UArenaGameModeSettings : public UTBLGameModeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArenaCommanderVO MasonVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArenaCommanderVO AgathaVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArenaCommanderVO TenosiaVO;
    
    UArenaGameModeSettings();
    UFUNCTION(BlueprintCallable)
    UAkAudioEvent* GetSound(EArenaSounds ArenaSound, EFaction Faction);
    
};

