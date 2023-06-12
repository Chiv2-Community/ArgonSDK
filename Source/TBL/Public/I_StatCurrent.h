#pragma once
#include "CoreMinimal.h"
#include "EStat.h"
#include "UtilityAI_InputAxis.h"
#include "I_StatCurrent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UI_StatCurrent : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStat Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStat StatMax;
    
    UI_StatCurrent();
};

