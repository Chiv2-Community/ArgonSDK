#pragma once
#include "CoreMinimal.h"
#include "ETeamCapturePointComponentState.h"
#include "Replicated_ECapturePointState.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_ECapturePointState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETeamCapturePointComponentState::Type> Value;
    
public:
    TBL_API FReplicated_ECapturePointState();
};

