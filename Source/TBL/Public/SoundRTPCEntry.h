#pragma once
#include "CoreMinimal.h"
#include "SoundRTPCEntry.generated.h"

USTRUCT(BlueprintType)
struct FSoundRTPCEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpTime;
    
    TBL_API FSoundRTPCEntry();
};

