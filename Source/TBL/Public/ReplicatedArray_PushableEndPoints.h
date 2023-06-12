#pragma once
#include "CoreMinimal.h"
#include "PushableEndPoint.h"
#include "ReplicatedArray_PushableEndPoints.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedArray_PushableEndPoints {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPushableEndPoint> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_PushableEndPoints();
};

