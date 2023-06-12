#pragma once
#include "CoreMinimal.h"
#include "ReplicatedArray_AActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FReplicatedArray_AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_AActor();
};

