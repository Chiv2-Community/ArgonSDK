#pragma once
#include "CoreMinimal.h"
#include "Replicated_FString.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FString {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
public:
    TBL_API FReplicated_FString();
};

