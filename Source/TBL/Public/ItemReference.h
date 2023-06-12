#pragma once
#include "CoreMinimal.h"
#include "ItemReference.generated.h"

USTRUCT(BlueprintType)
struct FItemReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefId;
    
    TBL_API FItemReference();
};

