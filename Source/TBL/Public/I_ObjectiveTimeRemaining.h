#pragma once
#include "CoreMinimal.h"
#include "EFactionOrAttackerDefender.h"
#include "UtilityAI_InputAxis.h"
#include "I_ObjectiveTimeRemaining.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UI_ObjectiveTimeRemaining : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValueAsPercentRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionOrAttackerDefender RelevantFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueIfNotRelevant;
    
    UI_ObjectiveTimeRemaining();
};

