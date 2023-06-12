#pragma once
#include "CoreMinimal.h"
#include "ModEntry.h"
#include "ReplicatedArray_FModEntry.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedArray_FModEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModEntry> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_FModEntry();
};

