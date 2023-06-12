#pragma once
#include "CoreMinimal.h"
#include "RPCDebugClientRPC.generated.h"

USTRUCT(BlueprintType)
struct FRPCDebugClientRPC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    TBL_API FRPCDebugClientRPC();
};

