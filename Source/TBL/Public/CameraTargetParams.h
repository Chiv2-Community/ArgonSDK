#pragma once
#include "CoreMinimal.h"
#include "CameraTargetParams.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FCameraTargetParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    TBL_API FCameraTargetParams();
};

