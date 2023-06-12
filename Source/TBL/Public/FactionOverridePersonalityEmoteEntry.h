#pragma once
#include "CoreMinimal.h"
#include "EAudioAutoVOType.h"
#include "EAudioPersonalityType.h"
#include "EAudioVOType.h"
#include "FactionOverridePersonalityEmoteEntry.generated.h"

USTRUCT(BlueprintType)
struct FFactionOverridePersonalityEmoteEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioPersonalityType::Type> PersonalityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EAudioVOType::Type>> VoTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EAudioAutoVOType::Type>> AutoVoTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AppendString;
    
    TBL_API FFactionOverridePersonalityEmoteEntry();
};

