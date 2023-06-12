#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_Action.h"
#include "A_SetBlackboardValueToContextTarget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UA_SetBlackboardValueToContextTarget : public UUtilityAI_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyName;
    
    UA_SetBlackboardValueToContextTarget();
};

