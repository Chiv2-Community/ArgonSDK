#pragma once
#include "CoreMinimal.h"
#include "EAudioClassType.h"
#include "EAudioVOType.h"
#include "EmoteItem.h"
#include "EquippedEmotesByClass.generated.h"

USTRUCT(BlueprintType)
struct FEquippedEmotesByClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioClassType::Type> CharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EAudioVOType::Type>, FEmoteItem> EmotesByType;
    
    TBL_API FEquippedEmotesByClass();
};

