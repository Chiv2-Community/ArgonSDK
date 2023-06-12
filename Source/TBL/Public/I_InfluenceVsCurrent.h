#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UtilityAI_InputAxis.h"
#include "I_InfluenceVsCurrent.generated.h"

class UI_Influence;

UCLASS(Blueprintable, EditInlineNew)
class UI_InfluenceVsCurrent : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UI_Influence> InfluenceInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantTargetInfluenceToBeHigherThanCurrent;
    
    UI_InfluenceVsCurrent();
};

