#pragma once
#include "CoreMinimal.h"
#include "BaseKillTask.h"
#include "KillXWithDamageTask.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UKillXWithDamageTask : public UBaseKillTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DamageTypeName;
    
    UKillXWithDamageTask();
};

