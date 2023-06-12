#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UtilityAI_InputAxis.h"
#include "I_InfluenceCurrent.generated.h"

class UI_Influence;

UCLASS(Blueprintable, EditInlineNew)
class UI_InfluenceCurrent : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UI_Influence> InfluenceInput;
    
    UI_InfluenceCurrent();
};

