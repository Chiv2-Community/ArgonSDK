#pragma once
#include "CoreMinimal.h"
#include "ST_Int2D.generated.h"

USTRUCT(BlueprintType)
struct ST_SPARSEGRID_API FST_Int2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    FST_Int2D();
};

