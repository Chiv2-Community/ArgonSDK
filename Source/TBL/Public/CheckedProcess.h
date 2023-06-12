#pragma once
#include "CoreMinimal.h"
#include "CheckedProcess.generated.h"

USTRUCT(BlueprintType)
struct FCheckedProcess {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Attempted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Succeeded;
    
    TBL_API FCheckedProcess();
};

