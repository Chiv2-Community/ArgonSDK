#pragma once
#include "CoreMinimal.h"
#include "SoundStateEntry.generated.h"

USTRUCT(BlueprintType)
struct FSoundStateEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StateGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString State;
    
    TBL_API FSoundStateEntry();
};

