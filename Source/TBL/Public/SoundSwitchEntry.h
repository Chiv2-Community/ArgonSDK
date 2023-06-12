#pragma once
#include "CoreMinimal.h"
#include "SoundSwitchEntry.generated.h"

USTRUCT(BlueprintType)
struct FSoundSwitchEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Switch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString State;
    
    TBL_API FSoundSwitchEntry();
};

