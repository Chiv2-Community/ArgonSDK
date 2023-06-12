#pragma once
#include "CoreMinimal.h"
#include "InputReplayValues.h"
#include "CharacterInputReplay.generated.h"

USTRUCT(BlueprintType)
struct FCharacterInputReplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputReplayValues> FrameData;
    
    TBL_API FCharacterInputReplay();
};

