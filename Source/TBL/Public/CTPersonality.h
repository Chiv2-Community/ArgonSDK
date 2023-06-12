#pragma once
#include "CoreMinimal.h"
#include "CTBase.h"
#include "EAudioPersonalityType.h"
#include "CTPersonality.generated.h"

UCLASS(Blueprintable)
class TBL_API UCTPersonality : public UCTBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioPersonalityType::Type> PersonalityType;
    
    UCTPersonality();
};

