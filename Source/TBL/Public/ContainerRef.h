#pragma once
#include "CoreMinimal.h"
#include "EInstanceContainerType.h"
#include "ContainerRef.generated.h"

USTRUCT(BlueprintType)
struct FContainerRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInstanceContainerType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    TBL_API FContainerRef();
};

