#pragma once
#include "CoreMinimal.h"
#include "PlayerCapturePointComponentProperties.h"
#include "Replicated_FPlayerCapturePointComponentProperties.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FPlayerCapturePointComponentProperties {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCapturePointComponentProperties Value;
    
public:
    TBL_API FReplicated_FPlayerCapturePointComponentProperties();
};

