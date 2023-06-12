#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_InputAxis.h"
#include "I_IncomingAttackIs.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UI_IncomingAttackIs : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> AllowedAttackNames;
    
    UI_IncomingAttackIs();
};

