#pragma once
#include "CoreMinimal.h"
#include "ReplSequenceBinding.generated.h"

class ATBLCharacter;

USTRUCT(BlueprintType)
struct FReplSequenceBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BindingLookupString;
    
    TBL_API FReplSequenceBinding();
};

