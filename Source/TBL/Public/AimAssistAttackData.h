#pragma once
#include "CoreMinimal.h"
#include "AimAssistStateData.h"
#include "AimAssistAttackData.generated.h"

USTRUCT(BlueprintType)
struct FAimAssistAttackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AllowedAimAssistAttackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAimAssistStateData> AllowedAimAssistStates;
    
    TBL_API FAimAssistAttackData();
};

