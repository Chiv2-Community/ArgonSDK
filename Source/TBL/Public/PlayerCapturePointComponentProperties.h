#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "PlayerCapturePointComponentProperties.generated.h"

USTRUCT(BlueprintType)
struct FPlayerCapturePointComponentProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction AllowedFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBeBlockedByOtherFaction;
    
    TBL_API FPlayerCapturePointComponentProperties();
};

