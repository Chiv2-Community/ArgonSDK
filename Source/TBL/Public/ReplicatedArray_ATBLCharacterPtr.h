#pragma once
#include "CoreMinimal.h"
#include "ReplicatedArray_ATBLCharacterPtr.generated.h"

class ATBLCharacter;

USTRUCT(BlueprintType)
struct FReplicatedArray_ATBLCharacterPtr {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATBLCharacter*> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_ATBLCharacterPtr();
};

