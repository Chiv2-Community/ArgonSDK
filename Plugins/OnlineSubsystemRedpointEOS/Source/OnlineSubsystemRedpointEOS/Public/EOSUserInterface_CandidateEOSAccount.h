#pragma once
#include "CoreMinimal.h"
#include "EOSUserInterface_CandidateEOSAccount.generated.h"

USTRUCT(BlueprintType)
struct ONLINESUBSYSTEMREDPOINTEOS_API FEOSUserInterface_CandidateEOSAccount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    FEOSUserInterface_CandidateEOSAccount();
};

