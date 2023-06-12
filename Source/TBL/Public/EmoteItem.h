#pragma once
#include "CoreMinimal.h"
#include "EAudioVOType.h"
#include "EmoteItem.generated.h"

USTRUCT(BlueprintType)
struct FEmoteItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioVOType::Type> EmoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationEmoteName;
    
    TBL_API FEmoteItem();
};

