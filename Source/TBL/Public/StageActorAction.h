#pragma once
#include "CoreMinimal.h"
#include "EStageActorActions.h"
#include "StageActorAction.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FStageActorAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> StageActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageActorActions StageActorAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    TBL_API FStageActorAction();
};

