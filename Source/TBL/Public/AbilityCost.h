#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "AbilityCost.generated.h"

class UCondition;

UCLASS(Blueprintable, EditInlineNew)
class UAbilityCost : public UAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCondition*> Conditions;
    
    UAbilityCost();
};

