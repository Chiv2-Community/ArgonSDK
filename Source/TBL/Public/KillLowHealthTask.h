#pragma once
#include "CoreMinimal.h"
#include "BaseKillTask.h"
#include "KillLowHealthTask.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UKillLowHealthTask : public UBaseKillTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredMaxHealth;
    
    UKillLowHealthTask();
};

