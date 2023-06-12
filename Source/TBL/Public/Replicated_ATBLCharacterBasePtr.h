#pragma once
#include "CoreMinimal.h"
#include "Replicated_ATBLCharacterBasePtr.generated.h"

class ATBLCharacterBase;

USTRUCT(BlueprintType)
struct FReplicated_ATBLCharacterBasePtr {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacterBase* Value;
    
public:
    TBL_API FReplicated_ATBLCharacterBasePtr();
};

