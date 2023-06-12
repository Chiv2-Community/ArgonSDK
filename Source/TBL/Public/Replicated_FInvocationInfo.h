#pragma once
#include "CoreMinimal.h"
#include "InvocationInfo.h"
#include "Replicated_FInvocationInfo.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FInvocationInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInvocationInfo Value;
    
public:
    TBL_API FReplicated_FInvocationInfo();
};

