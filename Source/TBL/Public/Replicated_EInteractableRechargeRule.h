#pragma once
#include "CoreMinimal.h"
#include "EInteractableRechargeRule.h"
#include "Replicated_EInteractableRechargeRule.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_EInteractableRechargeRule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractableRechargeRule Value;
    
public:
    TBL_API FReplicated_EInteractableRechargeRule();
};

