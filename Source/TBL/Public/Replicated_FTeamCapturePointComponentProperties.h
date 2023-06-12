#pragma once
#include "CoreMinimal.h"
#include "TeamCapturePointComponentProperties.h"
#include "Replicated_FTeamCapturePointComponentProperties.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FTeamCapturePointComponentProperties {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamCapturePointComponentProperties Value;
    
public:
    TBL_API FReplicated_FTeamCapturePointComponentProperties();
};

