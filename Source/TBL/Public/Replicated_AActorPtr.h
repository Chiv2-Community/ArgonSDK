#pragma once
#include "CoreMinimal.h"
#include "Replicated_AActorPtr.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FReplicated_AActorPtr {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Value;
    
public:
    TBL_API FReplicated_AActorPtr();
};

