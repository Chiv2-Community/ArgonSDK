#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_Action.h"
#include "A_MaintainDistanceFromActor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UA_MaintainDistanceFromActor : public UUtilityAI_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSprinting;
    
    UA_MaintainDistanceFromActor();
};

