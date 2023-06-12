#pragma once
#include "CoreMinimal.h"
#include "OverlappedCharacterList.generated.h"

class ATBLCharacter;

USTRUCT(BlueprintType)
struct FOverlappedCharacterList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATBLCharacter*> Characters;
    
    TBL_API FOverlappedCharacterList();
};

