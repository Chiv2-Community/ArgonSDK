#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UtilityAI_InputAxis.h"
#include "I_NumUnloadedLoadableActorsWithAITag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UI_NumUnloadedLoadableActorsWithAITag : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
public:
    UI_NumUnloadedLoadableActorsWithAITag();
};

