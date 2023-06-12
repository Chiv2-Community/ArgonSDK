#pragma once
#include "CoreMinimal.h"
#include "EAudioAutoVOType.h"
#include "OnPossessedAutoVo.generated.h"

USTRUCT(BlueprintType)
struct FOnPossessedAutoVo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioAutoVOType::Type> AutoVo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    TBL_API FOnPossessedAutoVo();
};

