#pragma once
#include "CoreMinimal.h"
#include "SiegeEngineDamageSounds.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FSiegeEngineDamageSounds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DamagedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DestroyedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RepairedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FullyRepairedSound;
    
    TBL_API FSiegeEngineDamageSounds();
};

