#pragma once
#include "CoreMinimal.h"
#include "Replicated_Bool.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_Bool {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
public:
    TBL_API FReplicated_Bool();
};

