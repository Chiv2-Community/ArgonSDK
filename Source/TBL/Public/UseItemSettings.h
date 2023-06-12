#pragma once
#include "CoreMinimal.h"
#include "UseItemSettings.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FUseItemSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent;
    
    TBL_API FUseItemSettings();
};

