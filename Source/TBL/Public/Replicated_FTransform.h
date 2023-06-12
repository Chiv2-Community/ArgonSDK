#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Replicated_FTransform.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FTransform {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Value;
    
public:
    TBL_API FReplicated_FTransform();
};

