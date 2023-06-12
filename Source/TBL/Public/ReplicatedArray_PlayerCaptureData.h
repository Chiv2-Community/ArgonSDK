#pragma once
#include "CoreMinimal.h"
#include "PlayerCaptureData.h"
#include "ReplicatedArray_PlayerCaptureData.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedArray_PlayerCaptureData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerCaptureData> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_PlayerCaptureData();
};

