#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraTypes.h"
#include "LastSpectatorPOV.generated.h"

USTRUCT(BlueprintType)
struct FLastSpectatorPOV {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinimalViewInfo POV;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Frame;
    
    TBL_API FLastSpectatorPOV();
};

