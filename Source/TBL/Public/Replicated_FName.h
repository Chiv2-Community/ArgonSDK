#pragma once
#include "CoreMinimal.h"
#include "Replicated_FName.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FName {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Value;
    
public:
    TBL_API FReplicated_FName();
};

