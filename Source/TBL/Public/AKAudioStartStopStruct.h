#pragma once
#include "CoreMinimal.h"
#include "AKAudioStartStopStruct.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FAKAudioStartStopStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopSound;
    
    TBL_API FAKAudioStartStopStruct();
};

