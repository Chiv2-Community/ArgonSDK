#pragma once
#include "CoreMinimal.h"
#include "AKAudioStartStopStruct.h"
#include "Replicated_FAKAudioStartStopStruct.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FAKAudioStartStopStruct {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAKAudioStartStopStruct Value;
    
public:
    TBL_API FReplicated_FAKAudioStartStopStruct();
};

