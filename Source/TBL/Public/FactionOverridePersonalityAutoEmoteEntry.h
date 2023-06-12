#pragma once
#include "CoreMinimal.h"
#include "EAudioAutoVOType.h"
#include "EAudioPersonalityType.h"
#include "FactionOverridePersonalityAutoEmoteEntry.generated.h"

USTRUCT(BlueprintType)
struct FFactionOverridePersonalityAutoEmoteEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioPersonalityType::Type> PersonalityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioAutoVOType::Type> AutoVoType;
    
    TBL_API FFactionOverridePersonalityAutoEmoteEntry();
};

