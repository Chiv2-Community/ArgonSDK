#pragma once
#include "CoreMinimal.h"
#include "TBLCompoundInputAction.generated.h"

USTRUCT(BlueprintType)
struct FTBLCompoundInputAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CompoundActionName;
    
    TBL_API FTBLCompoundInputAction();
};

