#pragma once
#include "CoreMinimal.h"
#include "Replicated_FollowerPushables.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FReplicated_FollowerPushables {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ReplicatedArray;
    
public:
    TBL_API FReplicated_FollowerPushables();
};

