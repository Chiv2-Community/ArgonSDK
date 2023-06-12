#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_InputAxis.h"
#include "I_Random.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UI_Random : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentChance;
    
public:
    UI_Random();
};

