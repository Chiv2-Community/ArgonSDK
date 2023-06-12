#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_InputAxis.h"
#include "I_CanUseInteractable.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UI_CanUseInteractable : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreIfNotAvailable;
    
public:
    UI_CanUseInteractable();
};

