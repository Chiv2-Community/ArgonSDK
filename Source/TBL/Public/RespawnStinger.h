#pragma once
#include "CoreMinimal.h"
#include "RespawnStinger.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FRespawnStinger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Sound;
    
    TBL_API FRespawnStinger();
};

